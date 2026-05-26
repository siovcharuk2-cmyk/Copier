#pragma once
#include <iostream>

class PoweredDevice
{
protected:
	int powerConsumption;
	bool isOn;

public:
    PoweredDevice(int powerConsumption)
        : powerConsumption{ powerConsumption },
        isOn{ false }
    {
        std::cout << "[PoweredDevice] Constructor\n";
    }

    PoweredDevice() = default;

    void turnOn()
    {
        if (!isOn)
        {
            isOn = true;
            std::cout << "Device is now ON (Consuming " << powerConsumption << "W).\n";
        }
    }

    void turnOff()
    {
        if (isOn)
        {
            isOn = false;
            std::cout << "Device is now OFF.\n";
        }
    }
};