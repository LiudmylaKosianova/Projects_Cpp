#include <iostream>
using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
char board[3][3];

void Initialize(char board[][3]);
void Display(char board[][3]);
void SetValue(int row, int col, char symb);
bool IsFree(int row, int col);

int main(){
    Initialize(board);
    Display(board);
    SetValue(0,0,PLAYER_1);
    SetValue(0,1,PLAYER_2);
    Display(board);
    cout << IsFree(0,0) << "\n";

    return 0;
}

void SetValue(int row, int col, char symb){
    board[row][col] = symb;
}
bool IsFree(int row, int col){
    if (board[row][col] == '-') return true;
    return false;
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