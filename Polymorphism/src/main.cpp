
#include "../headers/Boat.h"
#include "../headers/Car.h"

int main(){

    Vehicle *myVehicle = new Vehicle(1, 0);
    myVehicle->Display();
    Boat *myBoat = new Boat(7, 0);
    myBoat->Display();
    Car *myCar = new Car(151, 0);
    myCar->Display();
    
    return 0;
}