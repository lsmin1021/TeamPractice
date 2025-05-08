#include "gmock/gmock.h"
#include "stock_brocker.h"

using namespace testing;

TEST(StockBrocker, selectStockBrockerKiwer) {
	// TODO StockBrockerApp 개발
	StockBrockerApp* app = nullptr;

	EXPECT_NO_THROW(app->selectStockBrocker("Kiwer"));
}

TEST(StockBrocker, selectStockBrockerNemo) {
	// TODO StockBrockerApp 개발
	StockBrockerApp* app = nullptr;

	EXPECT_NO_THROW(app->selectStockBrocker("Nemo"));
}

/*
TEST(StockBrocker, StockBrockerLogin) {
	// TODO Login 기능
	StockBrokerApp* app = nullptr;
	
	EXPECT_NO_THROW(app.login("idid","pwpw"));
}
*/

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}