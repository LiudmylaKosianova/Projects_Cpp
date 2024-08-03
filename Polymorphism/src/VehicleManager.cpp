
#include "../headers/VehicleManager.h"

VehicleManager::VehicleManager(int size) : maxVehicles(size){
    count = 0;
    
}
bool VehicleManager::Add(Vehicle *v){
    if(count == maxVehicles)return false;
    else{
        vehicles[count] = v;
        count++;
    }
}