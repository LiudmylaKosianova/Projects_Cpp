#pragma once
#include "Vehicle.h"

class VehicleManager{
protected:
    int count;
    int maxVehicles;
    Vehicle **vehicles;
public:
    VehicleManager(int size);
    bool Add(Vehicle *v);
    void Display();
    int GetCount();
    Vehicle** GetList();
};