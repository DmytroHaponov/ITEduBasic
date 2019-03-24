#include <iostream>
#include <string>


int arr[7][9] = {
{0 ,1 ,0 ,0 ,4 ,0 ,0 ,1 ,0},
{1, 0, 0, 1, 0, 1, 0, 0, 1},
{0, 0, 1, 0, 0, 0, 1, 0, 0},
{0, 1, 0, 0, 1, 0, 0, 1, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0},
{1, 0, 1, 1, 0, 1, 1, 0, 1},
{0, 0, 0, 0, 7, 0, 0, 0, 0} };

struct P {
    int s = 4;
    int x;
    int y;
};

void show_map() {
    std::cout.clear();
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 9; j++) {
            //if (i == P.x && j == P.y) {
            //   std::cout << P.s << " ";
            //}
            //else {
                std::cout << arr[i][j] << " ";
            //}
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
char M;
int j, k;
int *p = &arr[0][4];


int MoveUP();
int MoveDOWN();
int MoveLEFT();
int MoveRIGHT();


int main() {
    std::string name;


    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;
    std::cout << "Welcome " << name << " to the Escape Dungeon game" << std::endl;
    std::cout << "In this game you have to use keys to manipulate your charackter in dungeon" << std::endl;
    std::cout << "you start at the top floor and you have to make it to the bottom floor." << std::endl;
    std::cout << "Using keys W,S,D,A to move UP,DOWN, RIGHT, LEFT respectively beware of traps!" << std::endl;
    std::cout << "Dungeon Is:" << std::endl;

    show_map();

    std::cout << "Let's start the game!:" << std::endl;

    int o = 1;
    while (o != 0) {
        std::cin >> M;
        switch (M) {
        case 'w':
            MoveUP();
            show_map();

            break;
        case 's':
            MoveDOWN();
            show_map();

            break;
        case 'd':
            MoveRIGHT();
            show_map();

            break;
        case 'a':
            MoveLEFT();
            show_map();

            break;
        default:
            break;
        }
        if (*p == 7) {
            std::cout << "Congratulation You exited the dungeon and Won!" << std::endl;
        }



    } //end while
    std::cout << "Would you like to exit? 0 - yes, 1 - no" << std::endl;
    std::cin >> o;
    std::system("pause");
    return 0;
}

int MoveUP() {
    p = &arr[--k][j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
    }
    return 0;
}
int MoveDOWN() {
    p = &arr[++k][j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
    }return 0;
}
int MoveLEFT() {
    p = &arr[k][--j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
    }return 0;
}
int MoveRIGHT() {
    p = &arr[k][++j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
    }return 0;
}

