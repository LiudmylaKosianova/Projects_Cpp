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
         << "Press 7 to finish";
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

                if(choice == 1 || choice == 3){state = (m_s)choice;}
                else if(choice == 7){
                        cout << "Thanks for playing! Good bye!\n";}
                else{
                        cout << "Illigal movement. You will be set to standing\n";
                        state = (m_s)0;
                }

                break;
        case 1: cout << "You are walking. Next you can stand (0) or run (2). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;

                if(choice == 0 || choice == 2){state = (m_s)choice;}
                else if(choice == 7){
                        cout << "Thanks for playing! Good bye!\n";}
                else{
                        cout << "Illigal movement. You will be set to standing\n";
                        state = (m_s)0;
                }

                break;
        case 2: cout << "You are running. Next you can walk (1). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;

                if(choice == 1){state = (m_s)choice;}
                else if(choice == 7){
                        cout << "Thanks for playing! Good bye!\n";}
                else{
                        cout << "Illigal movement. You will be set to standing\n";
                        state = (m_s)0;
                }
                 
                break;
        default:cout << "You are crawling. Next you can stand (0). Press 7 to finish\n";
                cout << "Your choice: " << "\n";
                cin >> choice;

                if(choice == 1){state = (m_s)choice;}
                else if(choice == 7){
                        cout << "Thanks for playing! Good bye!7\n";}
                else{
                        cout << "Illigal movement. You will be set to standing\n";
                        state = (m_s)0;
                }          

                break;
    }
    }
    cout << "\n=========Finish!========\n";      

    return 0;
}