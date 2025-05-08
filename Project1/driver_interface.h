#pragma once 

#include <string>

using std::string;
class DriverInterface {
public:
virtual void login(string id, string pw) = 0;
    virtual void buy(string code, int price, int quantity) = 0;
    virtual void sell(string code, int price, int quantity) = 0;
    virtual int getPrice(string code) = 0;

};