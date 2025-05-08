#include "stock_brocker.h"

StockBrockerApp::StockBrockerApp() {};

void StockBrockerApp::selectStockBrocker(string brocker) {
	if (0 != brocker.compare("Kiwer") && 0 != brocker.compare("Nemo")) {
		throw std::exception("Failed to select broker - Unknown brocker");
	}

	selectedBrocker = brocker;
}

bool StockBrockerApp::login(string id, string pw) {
	if (selectedBrocker == "Kiwer") kiwer.login(id, pw);
	else nemo.certification(id, pw);
	
	return true;
};

void StockBrockerApp::buy(int code, int price, int quantity){
	if (price <= 0 || quantity <= 0)
	{
		throw std::exception("Failed to buy - Invalid price or quantity");
	}
}