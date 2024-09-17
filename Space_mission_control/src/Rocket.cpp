#include "../headers/Rocket.h"

Rocket::Rocket(string name, double cap, int stages) : Spacecraft(name), 
payloadCapacity(cap), numberOfStages(stages)
{
    cout << "Rocket \"" << missionName << "\"" << " is created\n";
}
Rocket::~Rocket()
{
    cout << "Rocket \"" << missionName << "\"" << " is destroyed\n";
}

void Rocket::launch()
{
    cout << "Rocket \"" << missionName << "\"" << " is launched\n";
    status = "Launched";
}

void Rocket::ignite()
{
    cout << "Rocket \"" << missionName << "\"" << " engine is ignited\n";
    status = "Ignited";
}

void Rocket::separateStage(int stage)
{
    cout << "Rocket \"" << missionName << "\"" << " stage " << stage << " is separated\n";
    status = "Stage separation";
}

void Rocket::reachOrbit()
{
    cout << "Rocket \"" << missionName << "\"" << " reached the orbit\n";
    status = "Orbit reached";
}
