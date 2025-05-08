#include "stock_brocker.h"


void StockBrockerApp::selectStockBrocker(string brocker) {
	if (0 != brocker.compare("Kiwer") && 0 != brocker.compare("Nemo")) {
		throw std::exception("Failed to select broker - Unknown brocker");
	}
	selectedBrocker = brocker;
}

void StockBrockerApp::login(string id, string pw) {
	driver->login(id, pw);
};

void StockBrockerApp::sell(string stockCode, int count, int price) {
	driver->sell(stockCode, count, price);
};

void StockBrockerApp::buy(string code, int price, int quantity){
	if (price <= 0 || quantity <= 0)
	{
		throw std::exception("Failed to buy - Invalid price or quantity");
	}

	driver->buy(code, price, quantity);
}

int StockBrockerApp::getPrice(string code) {

	return driver->getPrice(code);
}

void StockBrockerApp::buyNiceTiming(string code, int price)
{
	int prevPrice = driver->getPrice(code);
	int currentPrice = 0;
	// sleep(100ms);
	for (int a = 0; a < 2; a++) {
		currentPrice = driver->getPrice(code);
		if (currentPrice < prevPrice) return;
		prevPrice = currentPrice;
		// sleep(100ms);
	}
	int quantity = price / currentPrice;
	driver->buy(code, currentPrice, quantity);
}
