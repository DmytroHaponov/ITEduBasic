#include "dung.h"
#include <iostream>
#include <stdlib.h>

namespace DUNG{
enum class F: char  { //Fields
    F = ' ', //field
    T = 'T', //trap
    X = 'X', //exit
    M = '#' //mines
};


static const int ROW{ 9 };
static const int COL{ 11 };
static F map[ROW][COL] {
    {F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M},
    {F::M, F::T, F::F, F::T, F::F, F::F, F::F, F::T, F::F, F::T, F::M},
    {F::M, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::M},
    {F::M, F::T, F::F, F::T, F::F, F::T, F::F, F::T, F::F, F::T, F::M},
    {F::M, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::M},
    {F::M, F::F, F::T, F::T, F::F, F::T, F::F, F::T, F::T, F::F, F::M},
    {F::M, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::F, F::M},
    {F::M, F::T, F::F, F::T, F::F, F::X, F::F, F::T, F::F, F::T, F::M},
    {F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M, F::M}};
struct P{
    char S{ 'P' };
    int x{ 5 };
    int y{ 1 };
}P{};

void clrscr()
{
    system("@cls||clear");
}

void drawMap()
{
    for (int i{0}; i < ROW; ++i)
    {
        for (int j{0}; j < COL; ++j)
        {
            if ((i == P.y) && (j == P.x))
            {
                std::cout << P.S <<" ";
            }
            else
            {
                std::cout << static_cast<char>(map[i][j]) << ' ';
            }
        }
        std::cout << std::endl;
    }
}

void MP()
{
    char M;
    std::cin >> M;
    switch (M) {
    case 'w':
        if (P.y - 1 > 0)
        {
            --P.y;
        }
        else {
            std::cout << "MINE FIELD!" << std::endl;
        }
        break;
    case 's':
        if (P.y + 1 < 9)
        {
            ++P.y;
        }
        else {
            std::cout << "MINE FIELD!" << std::endl;
        }
        break;
    case 'a':
        if (P.x - 1 > 0)
        {
            --P.x;
        }
        else {
            std::cout << "MINE FIELD!" << std::endl;
        }
        break;
    case 'd':
        if (P.x + 1 < 11)
        {
            ++P.x;
        }
        else {
            std::cout << "MINE FIELD!" << std::endl;
        }
        break;
    default:
        std::cout << "Wrong input" << std::endl;
        break;
    }
}

bool CP()
{
    bool goahead = true;

    switch (map[P.y][P.x]) {
    case F::T:
        P.S = '+';
        goahead = false;
        break;
    case F::X:
        P.S = 'V';
        std::cout << "YOU WIN!" << std::endl;
        goahead = false;
        break;
    case F::M:
        goahead = false;
        std::cout << "You are blown up!" << std::endl;
        break;
    default:
        break;
    }

    return goahead;
}
} // namespace DC DungeonCrawl
