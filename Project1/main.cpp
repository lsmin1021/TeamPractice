#include "gmock/gmock.h"
#include "stock_brocker.h"
#include "string"
#include "mock_driver.h"
using std::string;
using namespace testing;

class BrockerFixture : public Test {
protected:
	void SetUp() override {
		app = new StockBrockerApp(&mock);
	}

public:
	NiceMock<MockDriver> mock;
	StockBrockerApp* app;

	const string KIWER = "Kiwer";
	const string NEMO = "Nemo";

	const string SAMPLE_ID = "idid";
	const string SAMPLE_PW = "pwpw";
	const string SAMPLE_STOCK_CODE = "123";
};

TEST_F(BrockerFixture, selectStockBrockerKiwer) {
	EXPECT_NO_THROW(app->selectStockBrocker(KIWER));
}

TEST_F(BrockerFixture, selectStockBrockerNemo) {
	EXPECT_NO_THROW(app->selectStockBrocker(NEMO));
}

TEST_F(BrockerFixture, StockBrockerLogin) {
	EXPECT_CALL(mock, login(SAMPLE_ID, SAMPLE_PW));
	EXPECT_NO_THROW(app->login(SAMPLE_ID, SAMPLE_PW));
}

TEST_F(BrockerFixture, StockBrockerBuySucess) {
	int price = 100;
	int count = 3;

	EXPECT_NO_THROW(app->buy(SAMPLE_STOCK_CODE, price, count));
}


TEST_F(BrockerFixture, StockBrockerSell) {
	int price = 100;
	int count = 3;

	EXPECT_NO_THROW(app->sell(SAMPLE_STOCK_CODE, count, price));
}

TEST_F(BrockerFixture, StockBrockerGetPrice) {
	EXPECT_THAT(app->getPrice(SAMPLE_STOCK_CODE), Ge(0));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
