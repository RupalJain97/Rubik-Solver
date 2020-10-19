/// Header files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}

/// Rotating Clockwise
vector<char> rotate_clock(vector<char> vec)
{
    int a = vec[2];
    int b = vec[1];
    int c = vec[0];

    vec[2] = vec[0];
    vec[1] = vec[3];
    vec[0] = vec[6];

    vec[0] = vec[6];
    vec[3] = vec[7];
    vec[6] = vec[8];

    vec[6] = vec[8];
    vec[7] = vec[5];
    vec[8] = vec[2];

    vec[8] = a;
    vec[5] = b;
    vec[2] = c;

    return vec;
}

/// Rotating Anti-Clockwise
vector<char> rotate_anti_clock(vector<char> vec)
{
    int a = vec[0];
    int b = vec[1];
    int c = vec[2];

    vec[0] = vec[2];
    vec[1] = vec[5];
    vec[2] = vec[8];

    vec[2] = vec[8];
    vec[5] = vec[7];
    vec[8] = vec[6];

    vec[8] = vec[6];
    vec[7] = vec[3];
    vec[6] = vec[0];

    vec[6] = a;
    vec[3] = b;
    vec[0] = c;

    return vec;
}

/// Main function
int main()
{
    /**
     *   Welcome to the Game.....
     */
    /// Staring the Game.....
    // string name;
    // cout << " \t\t\t Rubik's Cube!!! " << endl;
    // cout << " Enter your Name: ";
    // cin >> name;
    // name[0] = toupper(name[0]);
    // system("CLS");
    // cout << "\n\n\t Welcome " << name << " to Rubik's World...";
    // cout << endl;
    // cout << endl;

    /// Initializing Color for each side...
    char color[6] = {'W', 'B', 'R', 'G', '0', 'Y'};
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

    /// Original Cube
    // PrintingCube(vec);
    delay(1000);

    /// Testing Moves
    // vec = Green_Right_Clock(vec);
    // PrintingCube(vec);
    // vec = Green_Right_Anti_Clock(vec);
    // PrintingCube(vec);
    // vec = Green_Left_Clock(vec);
    // PrintingCube(vec);
    // vec = Green_Left_Anti_Clock(vec);
    // PrintingCube(vec);
    vec = Green_Up_Clock(vec);
    PrintingCube(vec);
    vec = Green_Up_Anti_Clock(vec);
    PrintingCube(vec);
    vec = Green_Down_Clock(vec);
    PrintingCube(vec);
    vec = Green_Down_Anti_Clock(vec);
    PrintingCube(vec);
    vec = Green_Front_Clock(vec);
    PrintingCube(vec);
    vec = Green_Front_Anti_Clock(vec);
    PrintingCube(vec);
    vec = Green_Back_Clock(vec);
    PrintingCube(vec);
    vec = Green_Back_Anti_Clock(vec);
    PrintingCube(vec);

    /// Printing Solved Cube...
    // PrintingCube(vec);
    delay(2000);
    cout << "Colour Coding:  W = White, R = Red, B = Blue, O = Orange, G = Green, Y = Yellow";
    delay(1000);

    /// Exit
    return 0;
}
