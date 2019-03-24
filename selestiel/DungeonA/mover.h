#pragma once

int MoveUP() {
    *p = &arr[--k][j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
        return 0;
    }
}
int MoveDOWN() {
    *p = &arr[++k][j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
        return 0;
    }
}
int MoveLEFT() {
    *p = &arr[k][--j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
        return 0;
    }
}
int MoveRIGHT() {
    *p = &arr[k][++j];
    if (*p != 1 && *p != 7) {
        return *p;
    }
    else {
        std::cout << "Game over: TRAP!" << std::endl;
        return 0;
    }
}
