#include "../headers/Rocket.h"

Rocket::Rocket(string name) : Spacecraft(name){}
Rocket::~Rocket()
{
    cout << "Rocket \"" << missionName << "\"" << " is destroyed\n";
}

void Rocket::launch()
{
    cout << "Rocket \"" << missionName << "\"" << " is launched\n";
    status = "Launched";
}

