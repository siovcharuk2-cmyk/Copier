#pragma once
#include "PoweredDevice.h"
#include <iostream>

class Printer :
	virtual public PoweredDevice
{
protected:
	int printSpeed;

public:
    Printer(int powerConsumption, int printSpeed)
        : PoweredDevice{ powerConsumption },
        printSpeed{ printSpeed }
    {
        std::cout << "[Printer] Constructor\n";
    }

    Printer() = default;

    void print()
    {
        if (!isOn)
        {
            std::cout << "Cannot print. Power is off!\n";
            return;
        }
        std::cout << "Printing document at speed of " << printSpeed << " pages/min...\n";
    }
};

