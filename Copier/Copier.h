#pragma once
#include "Scanner.h"
#include "Printer.h"
#include "PoweredDevice.h"
#include <iostream>

class Copier :
    public Scanner, public Printer
{
private:
    int maxCopies;

public:
    Copier(int powerConsumption, int resolution, int printSpeed, int maxCopies)
        : PoweredDevice{ powerConsumption },
        Scanner{ powerConsumption, resolution },
        Printer{ powerConsumption, printSpeed },
        maxCopies{ maxCopies }
    {
        std::cout << "[Copier] Constructor\n\n";
    }

    Copier() = default;

    void makeCopy(int count)
    {
        if (!isOn)
        {
            std::cout << "Cannot copy. The device is turned off!\n";
            return;
        }

        if (count > maxCopies)
        {
            std::cout << "Error: Cannot make " << count << " copies. Max limit is " << maxCopies << ".\n";
            return;
        }

        std::cout << "--- Starting Copy Process (Total: " << count << ") ---\n";
        scan();
        for (int i = 0; i < count; ++i)
        {
            std::cout << "[" << i + 1 << "/" << count << "] ";
            print();
        }
        std::cout << "--- Copy Process Finished ---\n";
    }
};