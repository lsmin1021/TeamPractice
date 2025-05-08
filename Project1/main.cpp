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

TEST(StockBrocker, StockBrockerLoginFail) {
	// TODO Login Fail
	StockBrokerApp* app = nullptr;

	EXPECT_THROW(app->login("idid", ""), std::exception);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}