#pragma once

#include "Spacecraft.h"

class Satellite : public Spacecraft
{
    protected:
    string orbitType; 
    double operationalLifetime;// (in years)

    public:
    Satellite(string name, string date, string orbit, double lifetime);
    ~Satellite();

    void launch()override;
    void completeMission()override;
    void deploySolarPanels();
    void adjustOrbit(); 
    void beginTransmission();

};