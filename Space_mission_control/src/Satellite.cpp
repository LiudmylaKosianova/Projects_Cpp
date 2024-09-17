#include "../headers/Satellite.h"

Satellite::Satellite(string name, string launch, string orbit, double time) :
Spacecraft(name, launch), orbitType(orbit), operationalLifetime(time)
{
    spacecraftType = "Satellite";
    action = "is created";
    Spacecraft::printAction;
}

Satellite::~Satellite()
{
    action = "is destroyed";
    Spacecraft::printAction;
}

void Satellite::launch()
{
    action = "is launched";
    Spacecraft::printAction;
    status = "Launched";
}

void Satellite::completeMission()
{
    action = "is completed";
    Spacecraft::printAction;
    status = "Completed";
}

void Satellite::deploySolarPanels()
{
    action = "solar panels deployed";
    Spacecraft::printAction();
}

void Satellite::adjustOrbit()
{
    action = "orbit is adjested";
    Spacecraft::printAction();
}

void Satellite::beginTransmission()
{
    action = "transmission started";
    Spacecraft::printAction();

}