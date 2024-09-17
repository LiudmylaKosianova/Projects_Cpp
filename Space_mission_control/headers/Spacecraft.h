#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Spacecraft
{
    protected:
    string missionName, 
    launchDate, 
    status, 
    spacecraftType, 
    action;

    public:
    Spacecraft(string name, string launch) : missionName(name), launchDate(launch){}
    virtual ~Spacecraft(){}

    virtual void launch(){}
    virtual void sendMissionUpdate(const string &update){ status = update;}
    virtual void completeMission(){}   
     
    void printAction(){cout << spacecraftType <<" \"" << missionName << "\" " << action << endl;}
};