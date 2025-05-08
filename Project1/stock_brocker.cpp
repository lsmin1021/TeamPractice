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
};


int StockBrockerApp::getPrice(string code) {
	int ret = 0;

	if (selectedBrocker == "Kiwer") ret = kiwer.currentPrice(code);
	else ret = nemo.getMarketPrice(code, 0);

	return ret;
}

void StockBrockerApp::buy(string code, int price, int quantity){
	if (price <= 0 || quantity <= 0)
	{
		throw std::exception("Failed to buy - Invalid price or quantity");
	}
}
