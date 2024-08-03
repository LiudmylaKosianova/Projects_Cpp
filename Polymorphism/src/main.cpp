
#include "../headers/Boat.h"
#include "../headers/Car.h"
#include "../headers/VehicleManager.h"

int main(){

    // Vehicle *myVehicle = new Vehicle(1, 0);
    // myVehicle->Display();
    // Boat *myBoat = new Boat(7, 0);
    // myBoat->Display();
    // Car *myCar = new Car(151, 0);
    // myCar->Display();

    // Vehicle **myVehicles = new Vehicle*[5];
    // myVehicles[0] = new Car(1,35);
    // myVehicles[1] = new Boat(2, 55);
    // myVehicles[2] = new Vehicle(3, 30);
    // myVehicles[3] = new Car(4, 25);
    // myVehicles[4] = new Boat(5, 65);
    // for(int i = 0; i < 5; i++){
    //     myVehicles[i]->Display();
    // }

    VehicleManager myV(10);
    myV.Add(new Car(1,35));
    myV.Add(new Boat(2, 55));
    myV.Add(new Vehicle(3,30));
    myV.Add(new Car(4,25));
    myV.Add(new Boat(5,65));
    myV.Display();

    
    return 0;
}