#pragma once
#include "PoweredDevice.h"
#include <iostream>

class Printer :
	public PoweredDevice
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

