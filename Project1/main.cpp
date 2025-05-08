#include "gmock/gmock.h"
#include "stock_brocker.h"
#include "string"
using std::string;
using namespace testing;

class MockDriver : public StockBrockerApp {
public:
	MOCK_METHOD(bool, login, (string, string), ());
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

	EXPECT_EQ(true, app.login("idid", "pwpw"));
}

TEST(StockBrocker, StockBrockerLoginFail) {
	// TODO Login Fail
	MockDriver app;
	EXPECT_CALL(app, login("idid", "pwpw"))
		.WillRepeatedly(Return(false));

	EXPECT_EQ(false, app.login("idid", "pwpw"));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
