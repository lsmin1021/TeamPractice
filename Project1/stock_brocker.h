#pragma once
#include <string>
#include "kiwer_api.cpp"
#include "nemo_api.cpp"

using std::string;

class StockBrockerApp {
public:
	StockBrockerApp();

	void selectStockBrocker(string brocker);
	void login(string id, string pw);
	void sell(string stockCode, int count, int price);

private:
	string selectedBrocker;
	KiwerAPI kiwer;
	NemoAPI nemo;
};