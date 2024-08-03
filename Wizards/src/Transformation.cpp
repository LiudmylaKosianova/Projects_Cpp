#include "../headers/Transformation.h"

Transformation::Transformation(string creature):creature(creature){}
void Transformation::Display(){
    cout << "Transformation creature: " << creature << endl;
}