#include"iostream"
#include"hollygame.h"
static char board[8][10];
namespace HollyGame {

void initialize()
{
    int col = 0,row = 0;
    //GIVES ALL SPACES NULL VALUE
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<10; j++)
        {
            board[i][j] = '.';
        }
    }

    //TREASURE RANDOM
    while(col+row == 0){
        srand(time(0));
        col = rand() % 10;
        row = rand() % 8;
        board[row][col] = 'X';
    }

    //PLAYER AT 0,0.
    board[0][0] = 'G';

}

void buildboard()
{
    ClearScreen();
    std::cout << "\n DUNGEON CRAWL \n";
    std::cout << "\n Hurry they're multiplying... \n\n";

    for(int row=0; row<8; row++)
    {
        std::cout << "\t ";
        for(int col=0; col<10; col++)
        {
            std::cout << board[row][col];
        }
        std::cout << "\n";
    }
}

int moveplayer(char userinput)
{
    int col,row;
    //need to set m,n to player's position
    for(int i=0; i<10; i++){
        for(int j=0; j<8; j++){
            if(board[j][i] == 'G'){
                col = i;
                row = j;
                break;
            }
        }
    }

    //W UP, S DOWN, A LEFT, D RIGHT;
    //DOES NOT LET PLAYER MOVE OFF BOARD
    board[row][col] = '.';
    if(userinput =='w' && row!=0){
        row--;
    }
    else if(userinput =='s' && row!=7){
        row++;
    }
    else if(userinput =='a' && col!=0){
        col--;
    }
    else if(userinput =='d' && col!=9){
        col++;
    }
    //before reassigning G check for treasure or trap!!******
    //if win
    if (checkwin(row,col) == true){
        std::cout << "\n WINNER!\n\n\n";
        return true;
    }
    //if lose
    else if(checklose(row,col) == true){
        std::cout << "\n Sorry, you LOSE!\n\n\n";
        return true;
    }
    else{
        board[row][col] ='G';
        return false;
    }
}

void settrap()
{
    //TRAP RANDOM
    int col, row;
    bool ok = false;
    while(ok == false){
        col = rand() % 10;
        row = rand() % 8;
        if(board[row][col]=='.'){
            board[row][col] = 'T';
            ok=true;
        }
    }
}

bool checkwin(int row, int col)
{
    //IF PLAYER G FINDS TREASURE X
    if(board[row][col] == 'X'){
        return true;
    }
    else
    {
        return false;
    }
}
bool checklose(int row, int col)
{
    //IF PLAYER G FINDS TRAP
    if(board[row][col] == 'T'){
        return true;
    }
    else
    {
        return false;
    }
}
void ClearScreen()
{
    printf("\033c");
}
}
