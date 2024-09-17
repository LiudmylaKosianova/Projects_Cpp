#pragma once

#include "Spacecraft.h"

class Rocket : public Spacecraft
{
    protected:
    double payloadCapacity; //(in tons)
    int numberOfStages;

    public:
    Rocket(string name, string launch, double cap, int stages);
    ~Rocket();

    void launch()override;
    void ignite(); 
    void separateStage(int stageNumber);
    void reachOrbit();

};