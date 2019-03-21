#pragma once

namespace HollyGame {

void buildboard();
void initialize();
int moveplayer(char userinput);
bool checkwin(int row, int col);
void settrap();
bool checklose(int row, int col);
void ClearScreen();

} //namespace HollyGame
