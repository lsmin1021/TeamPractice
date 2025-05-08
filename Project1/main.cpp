#include "gmock/gmock.h"
#include "string"
using std::string;

TEST(StockBrocker, selectStockBrockerKiwer) {
	// TODO StockBrockerApp 개발
	//StockBrokerApp app;

	//EXPECT_NO_THROW(app.selectStockBrocker("Kiwer"));
}

TEST(StockBrocker, selectStockBrockerNemo) {
	// TODO StockBrockerApp 개발
	//StockBrokerApp app;

	//EXPECT_NO_THROW(app.selectStockBrocker("Nemo"));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}