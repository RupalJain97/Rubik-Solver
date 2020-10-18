/// Header files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

// void PrintingCube(vector<vector<char>> vec);
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}

/// Main function
int main()
{
    /**
     *   Welcome to the Game.....
     */
    /// Staring the Game.....
    string name;
    cout << " \t\t\t Rubik's Cube!!! " << endl;
    cout << " Enter your Name: ";
    cin >> name;
    name[0] = toupper(name[0]);
    system("CLS");
    cout << "\n\n\t Welcome " << name << " to Rubik's World...";
    cout << endl;
    cout << endl;
    

    /// Initializing Color for each side...
    char color[6] = {'W', 'B', 'R', 'O', 'G', 'Y'};
    char ans = 'y';

    vector<vector<char>> vec(6, vector<char>(9));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            char ch = color[i];
            vec[i][j] = ch;
        }
    }

    /// Printing Solved Cube...
    PrintingCube(vec);
    cout << "Colour Coding:  W = White, R = Red, B = Blue, O = Orange, G = Green, Y = Yellow";
    delay(1000);
    
    /// Exit
    return 0;
    
}
