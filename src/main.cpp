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
    // cout << " \t\t\t Welcome to Rubik's Cube!!! " << endl;
    // cout << " Enter your Name: ";
    // cin >> name;
    // name[0] = toupper(name[0]);
    // system("CLS");
    // cout << "\n\n\t Welcome " << name << " to Rubik's World.....";
    // cout << endl;
    // cout << endl;

    /// Initializing Color for each side...
    char color[6] = {'W', 'B', 'R', 'G', 'O', 'Y'};
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

    delay(1000);

    /// Testing Moves
    // vec = Orange_Right_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Right_Anti_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Left_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Left_Anti_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Up_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Up_Anti_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Down_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Down_Anti_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Front_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Front_Anti_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Back_Clock(vec);
    // PrintingCube(vec);
    // vec = Orange_Back_Anti_Clock(vec);
    // PrintingCube(vec);

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

        PrintingCube(vec);
        cout << endl;
        cout << "Colour Coding:  W = White, R = Red, B = Blue, O = Orange, G = Green, Y = Yellow";

        /// Taking Input to Scramble the Cube.....
        cout << "\n\n You have to Scramble the Cube, type {A B C D E..... or ABCDE....} from the moves given below: ";
        cout << "\n  A: Right Clockwise ";
        cout << "\n  B: Right Anti Clockwise ";
        cout << "\n  C: Left Clockwise ";
        cout << "\n  D: Left Anti Clockwise ";
        cout << "\n  E: Up Clockwise ";
        cout << "\n  F: Up Anti Clockwise ";
        cout << "\n  G: Down Clockwise ";
        cout << "\n  H: Down Anti Clockwise ";
        cout << "\n  I: Front Clockwise ";
        cout << "\n  J: Front Anti Clockwise ";
        cout << "\n  K: Back Clockwise ";
        cout << "\n  L: Back Anti Clockwise ";
        cout << "\n Now Enter Sequence to Scramble the Cube: ";
        string str = "RINCOTJEJSKCGNIWMJ";
        // string str = "AFKJTOGKASXBCVHRNIJEMSKOMICFUVBFHNJIXWJNVBFHNCDJMXSKMCNVFNCJD";
        // string str = "ROWDJVGBHNGVJFCDXWJCNVBGVFDWODCEJHUVJXOKWJVHBFCXCJNVFHNCJDMKXXMCJNEVBFENWXIOZKMQOXSJDCEUHRYGYRUWXIJSOKZPLALSKWDJFHURYGYRUCEIXWOKYURHJFDVYCHGBNTRGFUIJEWISUJKWQSAOXIZLKYUHJFBVUHJFNCIUJKSNXCMNFHURNBFHIDSUDFYGHTRBNSIUYTFVGHBJGNGYUXIOFGKNBGDFGBHRJEIXSUHCYGVFGRJNEKWXJHUGVFBNXKJHVBHNJXKDJEFHRGBVNJFHRGBKFJRHTBNVJFCKMDKFJGH";
        // string str = "DCNXMCHRVUEJWXKQKXCJNVHBGHVREJCWXNGBRVEJXWJNHWHFCJDXCJNGBVEHWXKOCJNHBGVHCXXKCEFVJNREIJCOWKXQXWMJNREWZQKXNCBVFXWYHRJBFVCUHJNMWQSAOKLWDSYUXHJBNRFDVIOJKTMGFVUYHJNREFDCXGHBWNSAOIKLWQSAXZOKLEDCYHJBNRFVYHBNFVRJFNMVCJKDCXMIOSAKLZOWQSKLAUIEJDNSMXUHJWSNAMXUHJRNFOKLEDSYHWBQNSAIUJRFDIJRFONCBHCYDXWSZQOMKXJNIEHUFRZAPMQKSXHEBURBTYHURFNEDIXWJSGVYXWIJGCXGHVNJDKKCGBHJIWXKENRHVGREJIWXKOECRVHJIWXKOEJHRFJMWECNRVGBRVHNECJWXEGBREJWXKOQPLQWXERVHVUNCJEIMXOWWBGYRVHUEJIWSOXTGHRNUECJIDBGTHRVECJIDWKRVHUFECJIDWGTRUHIJECDWOHRNUECJIDWKOGTHNVRUFJIECWXOKOCWOEJIDNHRUBGTYSWTUHNVIEWKSDMXOWQALYTHFVBRHFJNCEJDKSMXIEOWKSALYUHFJDBNRHJFNMYHFJDWJSGVFHCEJDKXGHFJCDKXGHFJK";
        // string str;
        // cin >> str;

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
        cout << " Scrambled Cube is....." << endl
             << endl;
        PrintingCube(vec);
        cout << endl;

        cout << " Solving Rubik's Cube..... " << endl;
        // delay(1000);

        /// Solving by Reverse
        vec = SolvingByAlgorithm(vec);
        cout << "\n Solved Rubik's cube is ";
        cout << endl;
        PrintingCube(vec);

        /// Solving Cube.....
        // cout << "Choose how to solve the Cube.... Type 'C' for Computer to Solve and 'U' to solve youself.... "
        // char choice;
        // cin >> choice;
        // if (choice == 'c' || choice == 'C')
        // {
        //     SolvingByAlgorithm(vec);
        // }
        // else if (choice == 'u' || choice == 'U')
        // {
        //     SolvingByUser(vec);
        // }

        /// Finally prints Solved cube...
        //cout<<"\n Solved Rubik's cube is ";
        // PrintingCube(vec);

        cout << "\n Want to solve again (y/n): ";
        cin >> ans;
        vec.clear();
    }

    /// Exit
    return 0;
}
