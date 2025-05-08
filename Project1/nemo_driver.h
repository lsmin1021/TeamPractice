#pragma once
#include "driver_interface.h"
#include "nemo_api.cpp"
#include <string>
using std::string;

class NemoDriver : public DriverInterface {
public:
    void login(string id, string pw);
    void buy(string code, int price, int quantity);
    void sell(string code, int price, int quantity);
    int getPrice(string code);
private:
    NemoAPI api;
};