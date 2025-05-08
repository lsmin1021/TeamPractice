#pragma once
#include <string>
#include "kiwer_api.cpp"
#include "nemo_api.cpp"

using std::string;

class StockBrockerApp {
public:
	StockBrockerApp();

	void selectStockBrocker(string brocker);
	bool login(string id, string pw);
	int getPrice(string code);
	void buy(int code, int price, int quantity);

private:
	string selectedBrocker;
	KiwerAPI kiwer;
	NemoAPI nemo;
};