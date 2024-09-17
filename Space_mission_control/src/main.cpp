#include "../headers/Spacecraft.h"
#include "../headers/Rocket.h"
#include "../headers/Satellite.h"

int main()
{
    Rocket* myRocket = new Rocket("Moonlight", "05.10.2025", 20.45, 3);
    myRocket->launch();
    myRocket->ignite();
    myRocket->separateStage(1);
    myRocket->separateStage(2);
    myRocket->reachOrbit();

    Satellite* mySat = new Satellite("Uranus orbit", "07.02.2026", "low orbit", 20.5);
    mySat->launch();
    mySat->deploySolarPanels();
    mySat->beginTransmission();    



    return 0;
}