/// Header Files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock())
        ;
}

/// Rotation of Side Clockwise
vector<char> rotate_clock(vector<char> vec)
{
    char a = vec[2];
    char b = vec[1];
    char c = vec[0];

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

/// Rotation of Side Anti-Clockwise
vector<char> rotate_anti_clock(vector<char> vec)
{
    char a = vec[0];
    char b = vec[1];
    char c = vec[2];

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
     *   Welcome to Rubik's Cube World.....
     */
    /// Staring the Game.....
    string name;
    cout << " \t\t Welcome to Rubik's Cube!!! " << endl;
    cout << endl;
    cout << " Enter your Name: ";
    cin >> name;
    name[0] = toupper(name[0]);
    system("CLS");
    cout << "\n\n\t Welcome " << name << " to Rubik's Cube World!!!.....";
    cout << endl;
    cout << endl;

    /// Initializing Color for each side...
    char color[6] = {'W', 'B', 'R', 'G', 'O', 'Y'};
    char ans = 'y';

    while (ans == 'y' || ans == 'Y')
    {
        vector<vector<char>> vec(6, vector<char>(9));
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char ch = color[i];
                vec[i][j] = ch;
            }
        }

        cout << "\t";
        PrintingCube(vec);
        cout << " Colour Coding:  W = White, R = Red, B = Blue, O = Orange, G = Green, Y = Yellow" << endl;
        cout << endl;

        /// Taking Input from the User to Scramble the Cube.....
        cout << " You have to Scramble the Cube, type {A B C D E..... or ABCDE....} from the moves given below: " << endl;
        cout << "  A: Right Clockwise " << endl;
        cout << "  B: Right Anti Clockwise " << endl;
        cout << "  C: Left Clockwise " << endl;
        cout << "  D: Left Anti Clockwise " << endl;
        cout << "  E: Up Clockwise " << endl;
        cout << "  F: Up Anti Clockwise " << endl;
        cout << "  G: Down Clockwise " << endl;
        cout << "  H: Down Anti Clockwise " << endl;
        cout << "  I: Front Clockwise " << endl;
        cout << "  J: Front Anti Clockwise " << endl;
        cout << "  K: Back Clockwise " << endl;
        cout << "  L: Back Anti Clockwise " << endl;
        cout << " Now Enter Sequence to Scramble the Cube: ";
        string str;
        cin >> str;

        /// Applying Moves to Scramble the Solved Cube.....
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str.at(i);
            if (islower(ch))
            {
                ch = toupper(ch);
            }
            if (ch == 'A' || ch == 'M' || ch == 'Y')
            {
                vec = Blue_Right_Clock(vec);
            }
            else if (ch == 'B' || ch == 'N' || ch == 'Z')
            {
                vec = Blue_Right_Anti_Clock(vec);
            }
            else if (ch == 'C' || ch == 'O')
            {
                vec = Blue_Left_Clock(vec);
            }
            else if (ch == 'D' || ch == 'P')
            {
                vec = Blue_Left_Anti_Clock(vec);
            }
            else if (ch == 'E' || ch == 'Q')
            {
                vec = Blue_Up_Clock(vec);
            }
            else if (ch == 'F' || ch == 'R')
            {
                vec = Blue_Up_Anti_Clock(vec);
            }
            else if (ch == 'G' || ch == 'S')
            {
                vec = Blue_Down_Clock(vec);
            }
            else if (ch == 'H' || ch == 'T')
            {
                vec = Blue_Down_Anti_Clock(vec);
            }
            else if (ch == 'I' || ch == 'U')
            {
                vec = Blue_Front_Clock(vec);
            }
            else if (ch == 'J' || ch == 'V')
            {
                vec = Blue_Front_Anti_Clock(vec);
            }
            else if (ch == 'K' || ch == 'W')
            {
                vec = Blue_Back_Clock(vec);
            }
            else if (ch == 'L' || ch == 'X')
            {
                vec = Blue_Back_Anti_Clock(vec);
            }
        }

        /// prints scrambled cube...
        cout << endl;
        cout << endl;
        cout << " Scrambled Cube is....." << endl;
        PrintingCube(vec);

        /// Solving Cube.....
        cout << " Choose how to solve the Cube....." << endl;
        cout << "   Type 'C' for Computer to Solve and 'U' to solve youself... " << endl;
        char choice;
        cout << "  Enter Choice: ";
        cin >> choice;
        cout << endl;
        if (choice == 'c' || choice == 'C')
        {
            cout << " Solving Rubik's Cube..... " << endl;
            cout << endl;
            vec = SolvingByAlgorithm(vec);
        }
        else if (choice == 'u' || choice == 'U')
        {
            cout << " Let's Start Solving Rubik's Cube..... " << endl;
            cout << endl;
            vec = SolvingByUser(vec);
        }

        /// Finally prints Solved cube...
        cout << endl;
        cout << " Solved Rubik's cube is..... " << endl;
        PrintingCube(vec);

        cout << " Want to Solve again? (y/n): ";
        cin >> ans;
        vec.clear();
    }

    /// Exit
    return 0;
}
