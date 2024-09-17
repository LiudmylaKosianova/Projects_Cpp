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