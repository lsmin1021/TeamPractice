#pragma once

#include <string>

using std::string;

class StockBrockerApp {
public:
	StockBrockerApp();

	void selectStockBrocker(string brocker);

private:
	string selectedBrocker;
};