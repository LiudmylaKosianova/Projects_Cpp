
#include "../headers/Vehicle.h"


Vehicle::Vehicle(int id, int damage):id(id), damage(damage){}

void Vehicle::Display(){
    cout << "Vehicle id: " << id << endl;
}