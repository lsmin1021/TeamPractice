#pragma
#include "gmock/gmock.h"
#include "driver_interface.h"

class MockDriver : public DriverInterface {
public:
    MOCK_METHOD(bool, login, (string, string), ());
};