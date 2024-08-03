
#include "../headers/VehicleManager.h"

VehicleManager::VehicleManager(int size) : maxVehicles(size){
    count = 0;
    vehicles = new Vehicle *[size];
}
bool VehicleManager::Add(Vehicle *v){
    if(count < maxVehicles){
        vehicles[count] = v;
        count++;
        return true;
    }else{
        return false;
    }
}

void VehicleManager::Display(){
    for(int i = 0; i < count; i++){
        vehicles[i]->Display();
    }
}

int VehicleManager::GetCount(){
    return count;
}

Vehicle** VehicleManager::GetList(){
    return vehicles;
}