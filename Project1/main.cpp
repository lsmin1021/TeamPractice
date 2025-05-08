#include "gmock/gmock.h"
#include "string"
using std::string;
using namespace testing;

class StockBrockerInterface {
public:
	// virtual void selectStockBrocker() = 0;
	virtual bool login(string id, string pass) = 0;
	// virtual void buy(int code, int price, int quantity) = 0;
	// virtual void sell(int code, int price, int quantity) = 0;
	// virtual void getPrice(int code) = 0;
};

class MockDriver : public StockBrockerInterface {
public:
	MOCK_METHOD(bool, login, (string, string), (override));


	MockDriver() = default;
};

TEST(StockBrocker, selectStockBrockerKiwer) {
	// TODO StockBrockerApp 개발
	// StockBrokerApp* app = nullptr;
	// 
	// EXPECT_NO_THROW(app->selectStockBrocker("Kiwer"));
}

TEST(StockBrocker, selectStockBrockerNemo) {
	// TODO StockBrockerApp 개발
	// StockBrokerApp* app = nullptr;
	// 
	// EXPECT_NO_THROW(app.selectStockBrocker("Nemo"));
}

TEST(StockBrocker, StockBrockerLogin) {
	// TODO Login 기능
	MockDriver app;
	EXPECT_CALL(app, login("idid", "pwpw"))
		.WillRepeatedly(Return(true));

	app.login("idid", "pwpw");
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
