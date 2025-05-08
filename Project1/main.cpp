#include "gmock/gmock.h"
#include "stock_brocker.h"
#include "string"
#include "mock_driver.h"
using std::string;
using namespace testing;

TEST(StockBrocker, selectStockBrockerKiwer) {
	// TODO StockBrockerApp 개발
	StockBrockerApp* app = new StockBrockerApp();
	
	EXPECT_NO_THROW(app->selectStockBrocker("Kiwer"));
}

TEST(StockBrocker, selectStockBrockerNemo) {
	// TODO StockBrockerApp 개발
	NiceMock<MockDriver> driver;
	StockBrockerApp* app = new StockBrockerApp(&driver);
	
	EXPECT_NO_THROW(app->selectStockBrocker("Nemo"));
}


TEST(StockBrocker, StockBrockerLogin) {
	// TODO Login 기능
	NiceMock<MockDriver> driver;
	StockBrockerApp* app = new StockBrockerApp(&driver);
	
	EXPECT_NO_THROW(app->login("idid", "pwpw"));
}

TEST(StockBrocker, StockBrockerBuySucess) {
	// TODO 매수 기능
	NiceMock<MockDriver> driver;
	StockBrockerApp* app = new StockBrockerApp(&driver);

	string code = "123";
	int price = 100;
	int count = 3;
	EXPECT_NO_THROW(app->buy(code, price, count));
}

TEST(StockBrocker, StockBrockerSell) {
	NiceMock<MockDriver> driver;
	StockBrockerApp* app = new StockBrockerApp(&driver);

	string code = "123";
	int price = 100;
	int count = 3;
	EXPECT_NO_THROW(app->sell(code, count, price));
}

TEST(StockBrocker, StockBrockerGetPrice) {

	NiceMock<MockDriver> driver;
	StockBrockerApp* app = new StockBrockerApp(&driver);

	string code = "123";

	EXPECT_THAT(app->getPrice(code), Gt(0));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
