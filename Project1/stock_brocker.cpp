#include "stock_brocker.h"

StockBrockerApp::StockBrockerApp() {};

void StockBrockerApp::selectStockBrocker(string brocker) {
	if (0 != brocker.compare("Kiwer") && 0 != brocker.compare("Nemo")) {
		throw std::exception("Failed to select broker - Unknown brocker");
	}

	selectedBrocker = brocker;
}

bool StockBrockerApp::login(string id, string pw) {
	return true;
};