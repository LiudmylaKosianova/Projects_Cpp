#pragma once
#include <iostream>
using namespace std;

class Person{
protected:
    enum myState{sand, walk, run, crawl};
    myState ms;
public:
    Person();
    void Crawl();
    void Stand();
    void Walk();
    void Run();
};
