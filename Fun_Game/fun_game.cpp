#include <iostream>
using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
char board[3][3];

void Initialize(char board[][3]);
void Display(char board[][3]);

int main(){
    Initialize(board);
    Display(board);

    return 0;
}

void Initialize(char board[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = '-';
        }
    }
}

void Display(char board[][3]){
    
    for (int i = 0; i < 3; i++){

        cout << "\n\t\t";
        for (int j = 0; j < 3; j++){
            cout << board[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}