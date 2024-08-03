#include "../headers/Boat.h"

Boat::Boat(int id, int damage) : Vehicle(id, damage){}

void Boat::Display(){
    cout << "Boat ";
    Vehicle::Display();
}