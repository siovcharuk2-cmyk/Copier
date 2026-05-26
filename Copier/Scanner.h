#pragma once
#include "PoweredDevice.h"
#include <iostream>

class Scanner :
    virtual public PoweredDevice
{
protected:
    int resolution;

public:
    Scanner(int powerConsumption, int resolution)
        : PoweredDevice{ powerConsumption },
        resolution{ resolution }
    {
        std::cout << "[Scanner] Constructor\n";
    }

    Scanner() = default;

    void scan()
    {
        if (!isOn)
        {
            std::cout << "Cannot scan. Power is off!\n";
            return;
        }
        std::cout << "Scanning document at " << resolution << " DPI...\n";
    }
};

