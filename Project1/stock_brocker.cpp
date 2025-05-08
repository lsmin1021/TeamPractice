#include "stock_brocker.h"

StockBrockerApp::StockBrockerApp() {};

void StockBrockerApp::selectStockBrocker(string brocker) {
	if (0 != brocker.compare("Kiwer") && 0 != brocker.compare("Nemo")) {
		throw std::exception("Failed to select broker - Unknown brocker");
	}

	selectedBrocker = brocker;
}

void StockBrockerApp::login(string id, string pw) {
	if (selectedBrocker == "Kiwer") kiwer.login(id, pw);
	else nemo.certification(id, pw);
};

void StockBrockerApp::sell(string stockCode, int count, int price) {
	if (selectedBrocker == "Kiwer") kiwer.sell(stockCode, count, price);
	else nemo.sellingStock(stockCode, price, count);
}