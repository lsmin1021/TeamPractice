#pragma once

#include <string>

using std::string;

class StockBrockerApp {
public:
	StockBrockerApp();

	void selectStockBrocker(string brocker);
	bool login(string id, string pw);

private:
	string selectedBrocker;
};