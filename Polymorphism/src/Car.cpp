#include "../headers/Car.h"

Car::Car(int id, int damage) : Vehicle(id, damage){}

void Car::Display(){
    cout << "Car" << endl;
    cout << "id: " << id << endl;
}