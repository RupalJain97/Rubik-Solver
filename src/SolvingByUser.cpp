/// Header Files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

/**
 *   Letting User Solve the Cube.....
 */

vector<vector<char>> SolvingByUser(vector<vector<char>> vec)
{
    cout << " Rules:" << endl;
    cout << "  1) You have to enter the SIDE of the cube and the MOVE to be used." << endl;
    cout << "  2) To enter the SIDE, type following color codes:" << endl;
    cout << "       'R'/'r' : RED Side" << endl;
    cout << "       'B'/'b' : BLUE Side" << endl;
    cout << "       'O'/'o' : ORANGE Side" << endl;
    cout << "       'G'/'g' : GREEN Side" << endl;
    cout << "      And" << endl;
    cout << "       'stop'  : To STOP Solving" << endl;
    cout << "  3) To enter the MOVE, type following move codes:" << endl;
    cout << "       'A' : Right Clockwise " << endl;
    cout << "       'B' : Right Anti Clockwise " << endl;
    cout << "       'C' : Left Clockwise " << endl;
    cout << "       'D' : Left Anti Clockwise " << endl;
    cout << "       'E' : Up Clockwise " << endl;
    cout << "       'F' : Up Anti Clockwise " << endl;
    cout << "       'G' : Down Clockwise " << endl;
    cout << "       'H' : Down Anti Clockwise " << endl;
    cout << "       'I' : Front Clockwise " << endl;
    cout << "       'J' : Front Anti Clockwise " << endl;
    cout << "       'K' : Back Clockwise " << endl;
    cout << "       'L' : Back Anti Clockwise " << endl;
    cout << endl;

    string side;
    char move;
    char color[6] = {'W', 'B', 'R', 'G', 'O', 'Y'};

    while (side != "stop")
    {
    Side:
        cout << " Enter Side: ";
        cin >> side;
        char ch = side[0];
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        if (side == "stop")
        {
            break;
        }

        switch (ch)
        {
        case 'R':
        MoveR:
            cout << " Enter Move: ";
            cin >> move;
            if (islower(move))
            {
                move = toupper(move);
            }
            switch (move)
            {
            case 'A':
                vec = Red_Right_Clock(vec);
                break;
            case 'B':
                vec = Red_Right_Anti_Clock(vec);
                break;
            case 'C':
                vec = Red_Left_Clock(vec);
                break;
            case 'D':
                vec = Red_Left_Anti_Clock(vec);
                break;
            case 'E':
                vec = Red_Up_Clock(vec);
                break;
            case 'F':
                vec = Red_Up_Anti_Clock(vec);
                break;
            case 'G':
                vec = Red_Down_Clock(vec);
                break;
            case 'H':
                vec = Red_Down_Anti_Clock(vec);
                break;
            case 'I':
                vec = Red_Front_Clock(vec);
                break;
            case 'J':
                vec = Red_Front_Anti_Clock(vec);
                break;
            case 'K':
                vec = Red_Back_Clock(vec);
                break;
            case 'L':
                vec = Red_Back_Anti_Clock(vec);
                break;

            default:
                cout << "   Invalid Move!!, Enter again..." << endl;
                goto MoveR;
                break;
            }
        case 'B':
        MoveB:
            cout << " Enter Move: ";
            cin >> move;
            if (islower(move))
            {
                move = toupper(move);
            }
            switch (move)
            {
            case 'A':
                vec = Blue_Right_Clock(vec);
                break;
            case 'B':
                vec = Blue_Right_Anti_Clock(vec);
                break;
            case 'C':
                vec = Blue_Left_Clock(vec);
                break;
            case 'D':
                vec = Blue_Left_Anti_Clock(vec);
                break;
            case 'E':
                vec = Blue_Up_Clock(vec);
                break;
            case 'F':
                vec = Blue_Up_Anti_Clock(vec);
                break;
            case 'G':
                vec = Blue_Down_Clock(vec);
                break;
            case 'H':
                vec = Blue_Down_Anti_Clock(vec);
                break;
            case 'I':
                vec = Blue_Front_Clock(vec);
                break;
            case 'J':
                vec = Blue_Front_Anti_Clock(vec);
                break;
            case 'K':
                vec = Blue_Back_Clock(vec);
                break;
            case 'L':
                vec = Blue_Back_Anti_Clock(vec);
                break;

            default:
                cout << "   Invalid Move!!, Enter again..." << endl;
                goto MoveB;
                break;
            }
            break;
        case 'O':
        MoveO:
            cout << " Enter Move: ";
            cin >> move;
            if (islower(move))
            {
                move = toupper(move);
            }
            switch (move)
            {
            case 'A':
                vec = Orange_Right_Clock(vec);
                break;
            case 'B':
                vec = Orange_Right_Anti_Clock(vec);
                break;
            case 'C':
                vec = Orange_Left_Clock(vec);
                break;
            case 'D':
                vec = Orange_Left_Anti_Clock(vec);
                break;
            case 'E':
                vec = Orange_Up_Clock(vec);
                break;
            case 'F':
                vec = Orange_Up_Anti_Clock(vec);
                break;
            case 'G':
                vec = Orange_Down_Clock(vec);
                break;
            case 'H':
                vec = Orange_Down_Anti_Clock(vec);
                break;
            case 'I':
                vec = Orange_Front_Clock(vec);
                break;
            case 'J':
                vec = Orange_Front_Anti_Clock(vec);
                break;
            case 'K':
                vec = Orange_Back_Clock(vec);
                break;
            case 'L':
                vec = Orange_Back_Anti_Clock(vec);
                break;

            default:
                cout << "   Invalid Move!!, Enter again..." << endl;
                goto MoveO;
                break;
            }
        case 'G':
        MoveG:
            cout << " Enter Move: ";
            cin >> move;
            if (islower(move))
            {
                move = toupper(move);
            }
            switch (move)
            {
            case 'A':
                vec = Green_Right_Clock(vec);
                break;
            case 'B':
                vec = Green_Right_Anti_Clock(vec);
                break;
            case 'C':
                vec = Green_Left_Clock(vec);
                break;
            case 'D':
                vec = Green_Left_Anti_Clock(vec);
                break;
            case 'E':
                vec = Green_Up_Clock(vec);
                break;
            case 'F':
                vec = Green_Up_Anti_Clock(vec);
                break;
            case 'G':
                vec = Green_Down_Clock(vec);
                break;
            case 'H':
                vec = Green_Down_Anti_Clock(vec);
                break;
            case 'I':
                vec = Green_Front_Clock(vec);
                break;
            case 'J':
                vec = Green_Front_Anti_Clock(vec);
                break;
            case 'K':
                vec = Green_Back_Clock(vec);
                break;
            case 'L':
                vec = Green_Back_Anti_Clock(vec);
                break;

            default:
                cout << "   Invalid Move!!, Enter again..." << endl;
                goto MoveG;
                break;
            }
            break;

        default:
            cout << "   Invalid Side!!, Enter again..." << endl;
            goto Side;
            break;
        }

        cout << "  Applied the Move... Cube looks like..." << endl;
        PrintingCube(vec);
        cout << endl;

        /// Checking if Cube is solved.....
        char flag = 'T';
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (vec[i][j] != color[i])
                {
                    flag = 'F';
                    break;
                }
            }
            if (flag == 'F')
            {
                break;
            }
        }
        if (flag == 'T')
        {
            cout << "Hurray!!! You have Solved the Rubik's Cube..... :)" << endl;
            break;
        }
    }

    return vec;
}