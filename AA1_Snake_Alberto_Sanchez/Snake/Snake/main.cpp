#define FRAME_RATE 150

#include <iostream>
#include <thread>
#include <chrono>
#include<Windows.h>
#include<vector>
#include<random>
#include<time.h>
#include "keyboard.h"


void tablero_render(char tablero[22][12]) { 
    short tablero_height = 12;
    short tablero_width = 22;

    for (short i = 0; i < tablero_height; i++) 
    {
        std::cout << "\n";
        for (short j = 0; j < tablero_width; j++) 
        {
            std::cout << tablero[j][i];
        }
    }
}

void movement() {

    if (IsWPressed() == true) {
        std::cout << "W" << std::endl; 
    }
    if (IsSPressed() == true) {
        std::cout << "S" << std::endl; 
    }
    if (IsAPressed() == true) {
        std::cout << "A" << std::endl; 
    }
    if (IsDPressed() == true) {
        std::cout << "D" << std::endl; 
    }
}




void main() {
    
    bool bGameOver = false;
 

    //While game is not over execute game loop 
    while (!bGameOver) {
        system("CLS");

        const short tablero_width = 22; 
        const short tablero_height = 12; 
        char tablero[tablero_width][tablero_height]; 
        char sideline = '|'; 
        char upline = '-'; 
        char HeadSnake = 'X';
        char BodySnake = 'x';
        bool snakecreate = true;

        for (short i = 0; i < tablero_height; i++) 
        {
            for (short j = 0; j < tablero_width; j++) 
            {
                if (j == 0 || j == 21) {

                    tablero[j][i] = sideline; 
                }
                else if (i != 0) {
                    tablero[j][i] = ' '; 
                }

                if (i == 0 || i == 11) {

                    tablero[j][i] = upline; 
                }
            }

        }

        //crear serpiente
        if (snakecreate) {
            tablero[rand() % 2 - 20][rand() % 2 - 10] = HeadSnake;
            snake 
        }
        




        tablero_render(tablero);

        //Sleep main thread to control game speed execution
        std::this_thread::sleep_for(std::chrono::milliseconds(FRAME_RATE));
    }
}
