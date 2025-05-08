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

void StockBrockerApp::sellNiceTiming(string code, int cnt) {
	if (true == isFalling(code)) {
		driver->sell(code, cnt, driver->getPrice(code));
	}
}

bool StockBrockerApp::isFalling(string code) {
	int price = driver->getPrice(code);
	int ret = true;

	for (int i = 0; i < 2; i++) {
		int nextPrice = driver->getPrice(code);

		if (nextPrice > price) {
			ret = false;
		}
	}

	return ret;
}