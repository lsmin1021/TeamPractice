#pragma
#include "gmock/gmock.h"
#include "driver_interface.h"
#include "string"

using std::string;
class MockDriver : public DriverInterface {
public:
    MOCK_METHOD(void, login, (string, string), (override));
    MOCK_METHOD(void, buy, (string, int, int), (override));
    MOCK_METHOD(void, sell, (string, int, int), (override));
  	MOCK_METHOD(int, getPrice, (string), (override));
};