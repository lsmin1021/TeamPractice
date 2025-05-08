#pragma once
#include <string>
#include "kiwer_api.cpp"
#include "nemo_api.cpp"
#include "driver_interface.h"

using std::string;

class StockBrockerApp {
public:
	StockBrockerApp() = default;
	StockBrockerApp(DriverInterface* driver) : driver(driver){};
	
	void sellNiceTiming(string code, int cnt);

	void selectStockBrocker(string brocker);
	void login(string id, string pw);
	void sell(string stockCode, int count, int price);
	void buy(string code, int price, int quantity);
	int getPrice(string code);

private:
	string selectedBrocker;
	DriverInterface* driver;
	//KiwerDriver kiwer;
	//NemoDriver nemo;

	bool isFalling(string code);
};