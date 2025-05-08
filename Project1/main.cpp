#include "gmock/gmock.h"
#include "stock_brocker.h"
#include "string"
using std::string;
using namespace testing;

TEST(StockBrocker, selectStockBrockerKiwer) {
	// TODO StockBrockerApp 개발
	StockBrockerApp* app = new StockBrockerApp();
	
	EXPECT_NO_THROW(app->selectStockBrocker("Kiwer"));
}

TEST(StockBrocker, selectStockBrockerNemo) {
	// TODO StockBrockerApp 개발
	StockBrockerApp* app = new StockBrockerApp();
	
	EXPECT_NO_THROW(app->selectStockBrocker("Nemo"));
}


TEST(StockBrocker, StockBrockerLogin) {
	// TODO Login 기능
	StockBrockerApp* app = new StockBrockerApp();
	
	EXPECT_EQ(true, app->login("idid", "pwpw"));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
