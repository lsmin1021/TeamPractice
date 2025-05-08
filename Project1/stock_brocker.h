#pragma once
#include <string>
#include "driver_interface.h"

using std::string;

class StockBrockerApp {
public:
	StockBrockerApp();

	void selectStockBrocker(string brocker);
	int getPrice(string code);
	void login(string id, string pw);
	void sell(string stockCode, int count, int price);
	void buy(string code, int price, int quantity);

private:
	string selectedBrocker;
	DriverInterface* apiDriver;
};