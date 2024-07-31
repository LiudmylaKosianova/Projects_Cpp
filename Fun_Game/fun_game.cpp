#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

const char PLAYER_1 = 'O';
const char PLAYER_2 = 'X';
char board[3][3];
int WinState[8][3][2] = {{{0,0},{0,1},{0,2}},
                         {{1,0},{1,1},{1,2}},
                         {{2,0},{2,1},{2,3}},
                         {{0,0},{1,1},{2,2}},
                         {{2,0},{1,1},{0,2}},
                         {{0,0},{1,0},{2,0}},
                         {{0,1},{1,1},{2,1}},
                         {{0,2},{1,2},{2,2}}};

void Initialize(char board[][3]);
void Display(char board[][3]);
void SetValue(int row, int col, char symb);
bool IsFree(int row, int col);
bool HasWon(char symb);

int main(){
    srand(time(NULL));

    int row = 0, col = 0, count = 0;
    bool gameOver = false;
    char player = PLAYER_1;

    Initialize(board);
    Display(board);

    while(!gameOver){

        do{
            row = rand()%3;
            col = rand()%3;
        }while(!IsFree(row, col));

        SetValue(row, col, player);
        if(HasWon(player)) gameOver = true;

        if(player == PLAYER_1) player = PLAYER_2;
        else player = PLAYER_1;

        count++;
        if(count == 9) gameOver = true;

        Display(board);
         
    }


    return 0;
}

bool HasWon(char symb){
    bool match = false;
    int row = 0, col = 0;

    for(int a = 0; a < 8; a++){
        for(int b = 0; b < 3; b++){
            row = WinState[a][b][0];
            col = WinState[a][b][1];
            if(board[row][col] == symb)match = true;
            else{
                match = false;
                break;
            }
        }
        if(match)return match;
    }

    return false;
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