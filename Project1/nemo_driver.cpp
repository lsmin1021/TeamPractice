#include "nemo_driver.h"

void NemoDriver::login(string id, string pw)
{
	api.certification(id, pw);
}

void NemoDriver::buy(string code, int price, int quantity)
{
	api.purchasingStock(code, price, quantity);
}

void NemoDriver::sell(string code, int price, int quantity)
{
	api.sellingStock(code, price, quantity);
}

int NemoDriver::getPrice(string code)
{
	return api.getMarketPrice(code, 0);
}
