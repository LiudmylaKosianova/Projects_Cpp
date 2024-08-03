
#include <iostream>
using namespace std;

class Vehicle{
private:
    int damage;
protected:
    int id;
public:
    Vehicle(int id, int damage);
    virtual void Display();
};