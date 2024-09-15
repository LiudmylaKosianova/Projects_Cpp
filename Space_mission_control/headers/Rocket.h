#pragma once

#include "Spacecraft.h"

class Rocket : public Spacecraft
{
    protected:
    double payloadCapacity; //(in tons)
    int numberOfStages;

    public:
    Rocket(string name);
    ~Rocket();

    void launch()override;

// void ignite(): Simulates engine ignition.
// void separateStage(int stageNumber): Simulates the separation of a rocket stage.
// void reachOrbit(): Marks the rocket as having reached orbit.

};