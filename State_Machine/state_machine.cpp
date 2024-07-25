/*
State Machine, that enforce the legal movement state transition for a character
*/

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){

    cout << "===============================" << "\n";
    cout << "  Welcome to the State Machine " << "\n";
    cout << "===============================" << "\n";
    cout <<"\n";
    cout << "Press 0 if you want your character to stand" << "\n"
         << "Press 1 if you want your character to walk" << "\n"
         << "Press 2 if you want your character to run" << "\n"
         << "Press 3 if you want your character to crawl" << "\n"
         << "Press 7 to finish" << "/n";
    cout <<"\n\n";
    
    enum m_s {stand, walk, run, crawl};
    srand(time(NULL));
    int choice = 0;
    cout << "Your choice: " << "\n";
    cin >> choice;
    m_s state = (m_s)choice;

    while(choice != 7){
        switch(state){
        case 0: cout << "You are standing. Next you can walk (1) or crawl (3). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;
                state = (m_s)choice;
                break;
        case 1: cout << "You are walking. Next you can stand (0) or run (2). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;
                state = (m_s)choice;
                break;
        case 2: cout << "You are running. Next you can walk (1). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;
                state = (m_s)1;
                break;
        default:cout << "You are crawling. Next you can stand (0). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;
                state = (m_s)0;
                break;
    }
    }
    cout << "Thanks for playing!\n";      

    return 0;
}