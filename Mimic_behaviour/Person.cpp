#include "Person.h"

Person::Person(){
    
}

void Person::Crawl(){
    ms = (myState)3;
    cout << "\nCrawling\n";
}
void Person::Stand(){
    ms = (myState)0;
    cout << "\nStanding\n";
}
void Person::Walk(){
    ms = (myState)1;
    cout << "\nWalking\n";
}
void Person::Run(){
    ms = (myState)2;
    cout << "\nRunning\n";
}