#pragma once 

class DriverInterface {
public:
    virtual bool login(int id, int pass) = 0;
    virtual void buy(int code, int price, int quantity) = 0;
    virtual void sell(int code, int price, int quantity) = 0;
    virtual void getPrice(int code) = 0;

};