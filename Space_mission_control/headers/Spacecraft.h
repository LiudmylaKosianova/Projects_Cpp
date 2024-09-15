#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Spacecraft
{
    protected:
    string missionName, launchDate, status;

    public:
    Spacecraft(string name);
    virtual ~Spacecraft(){}

    virtual void launch(){}
    virtual void sendMissionUpdate(const string &update);
    virtual void completeMission();
};