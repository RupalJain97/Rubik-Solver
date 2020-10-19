#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

/// Reversing the String to Solve the Cube.....
vector<vector<char>> SolvingByUser(vector<vector<char>> vec)
{
    cout << "Note: Type 'stop' to stop solving...";
    string str;
    while (str != "stop")
    {
        cout << "Enter Move: ";
        cin >> str;
        char ch = str[0];
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

        cout << "Applied Move... Cube looks like..." << endl;
        PrintingCube(vec);
        cout << endl;
    }

    return vec;
}