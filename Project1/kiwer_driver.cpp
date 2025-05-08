#include "kiwer_driver.h"

void KiwerDriver::login(string id, string pw)
{
	api.login(id, pw);
}

void KiwerDriver::buy(string code, int price, int quantity)
{
	api.buy(code, quantity, price);
}

void KiwerDriver::sell(string code, int price, int quantity)
{
	api.sell(code, quantity, price);
}

int KiwerDriver::getPrice(string code)
{
	return api.currentPrice(code);
}
