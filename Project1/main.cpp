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

	const int STOCK_PRICE = 100;
	const int STOCK_COUNT = 3;
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
<<<<<<< HEAD
	EXPECT_CALL(mock, buy(SAMPLE_STOCK_CODE, 1000, 2)).Times(1);
	app->buy(SAMPLE_STOCK_CODE, 1000, 2);
=======
	EXPECT_NO_THROW(app->buy(SAMPLE_STOCK_CODE, STOCK_PRICE, STOCK_COUNT));
>>>>>>> feature/unitTest2
}



TEST_F(BrockerFixture, StockBrockerSell) {
	EXPECT_NO_THROW(app->sell(SAMPLE_STOCK_CODE, STOCK_COUNT, STOCK_PRICE));
}

TEST_F(BrockerFixture, StockBrockerGetPrice) {
	EXPECT_THAT(app->getPrice(SAMPLE_STOCK_CODE), Ge(0));
}

TEST_F(BrockerFixture, buyNiceTimingSucess) {
	EXPECT_CALL(mock, buy, (SAMPLE_STOCK_CODE, STOCK_PRICE, STOCK_COUNT), (override));
	EXPECT_CALL(mock, getPrice, (SAMPLE_STOCK_CODE), (override))
		.Times(3)
		.WillOnce(Return(100))
		.WillOnce(Return(130))
		.WillOnce(Return(150));
	app->buyNiceTiming(SAMPLE_STOCK_CODE, STOCK_COUNT);
}

TEST_F(BrockerFixture, sellNiceTimingSucess) {
	EXPECT_CALL(mock, sell, (string, int, int), (override)).Times(1);
	EXPECT_CALL(mock, getPrice, (int), (override))
		.Times(4)
		.WillOnce(Return(160))
		.WillOnce(Return(140))
		.WillOnce(Return(110))
		.WillRepeatedly(Return(100));

	app->sellNiceTiming(SAMPLE_STOCK_CODE, STOCK_COUNT);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
