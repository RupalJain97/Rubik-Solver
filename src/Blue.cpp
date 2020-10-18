/// Header files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

/// Rotation of BLUE Right Clockwise
vector<vector<char>> Blue_Right_Clock(vector<vector<char>> vec)
{
    int a = vec[0][2];
    int b = vec[0][5];
    int c = vec[0][8];

    vec[0][2] = vec[1][2];
    vec[0][5] = vec[1][5];
    vec[0][8] = vec[1][8];

    vec[1][2] = vec[5][2];
    vec[1][5] = vec[5][5];
    vec[1][8] = vec[5][8];

    vec[5][2] = vec[3][6];
    vec[5][5] = vec[3][3];
    vec[5][8] = vec[3][0];

    vec[3][6] = a;
    vec[3][3] = b;
    vec[3][0] = c;

    vec[4] = rotate_clock(vec[4]);

    return vec;
}

/// Rotation of BLUE Right Anti-Clockwise
vector<vector<char>> Blue_Right_Anti_Clock(vector<vector<char>> vec)
{
    int a = vec[0][2];
    int b = vec[0][5];
    int c = vec[0][8];

    vec[0][2] = vec[3][6];
    vec[0][5] = vec[3][3];
    vec[0][8] = vec[3][0];

    vec[3][6] = vec[5][2];
    vec[3][3] = vec[5][5];
    vec[3][0] = vec[5][8];

    vec[5][2] = vec[1][2];
    vec[5][5] = vec[1][5];
    vec[5][8] = vec[1][8];

    vec[1][2] = a;
    vec[1][5] = b;
    vec[1][8] = c;

    vec[4] = rotate_anti_clock(vec[4]);

    return vec;
}

/// Rotation of BLUE Left Clockwise
vector<vector<char>> Blue_Left_Clock(vector<vector<char>> vec)
{
    int a = vec[0][0];
    int b = vec[0][3];
    int c = vec[0][6];

    vec[0][0] = vec[3][8];
    vec[0][3] = vec[3][5];
    vec[0][6] = vec[3][2];

    vec[3][8] = vec[5][0];
    vec[3][5] = vec[5][3];
    vec[3][2] = vec[5][6];

    vec[5][0] = vec[1][0];
    vec[5][3] = vec[1][3];
    vec[5][6] = vec[1][6];

    vec[1][0] = a;
    vec[1][3] = b;
    vec[1][6] = c;

    vec[2] = rotate_clock(vec[2]);

    return vec;
}

/// Rotation of BLUE Left Anti-Clockwise
vector<vector<char>> Blue_Left_Anti_Clock(vector<vector<char>> vec)
{
    int a = vec[0][0];
    int b = vec[0][3];
    int c = vec[0][6];

    vec[0][0] = vec[1][0];
    vec[0][3] = vec[1][3];
    vec[0][6] = vec[1][6];

    vec[1][0] = vec[5][0];
    vec[1][3] = vec[5][3];
    vec[1][6] = vec[5][6];

    vec[5][0] = vec[3][8];
    vec[5][3] = vec[3][5];
    vec[5][6] = vec[3][2];

    vec[3][8] = a;
    vec[3][5] = b;
    vec[3][2] = c;

    vec[2] = rotate_anti_clock(vec[2]);

    return vec;
}

/// Rotation of BLUE Up Clockwise
vector<vector<char>> Blue_Up_Clock(vector<vector<char>> vec)
{
    int a = vec[1][0];
    int b = vec[1][1];
    int c = vec[1][2];

    vec[1][0] = vec[4][0];
    vec[1][1] = vec[4][1];
    vec[1][2] = vec[4][2];

    vec[4][0] = vec[3][0];
    vec[4][1] = vec[3][1];
    vec[4][2] = vec[3][2];

    vec[3][0] = vec[2][0];
    vec[3][1] = vec[2][1];
    vec[3][2] = vec[2][2];

    vec[2][0] = a;
    vec[2][1] = b;
    vec[2][2] = c;

    vec[0] = rotate_clock(vec[0]);

    return vec;
}

// Rotation of BLUE U Anti-Clockwise
vector<vector<char>> Blue_Up_Anti_Clock(vector<vector<char>> vec)
{
    int a = vec[1][0];
    int b = vec[1][1];
    int c = vec[1][2];

    vec[1][0] = vec[2][0];
    vec[1][1] = vec[2][1];
    vec[1][2] = vec[2][2];

    vec[2][0] = vec[3][0];
    vec[2][1] = vec[3][1];
    vec[2][2] = vec[3][2];

    vec[3][0] = vec[4][0];
    vec[3][1] = vec[4][1];
    vec[3][2] = vec[4][2];

    vec[4][0] = a;
    vec[4][1] = b;
    vec[4][2] = c;

    vec[0] = rotate_anti_clock(vec[0]);

    return vec;
}

/// Rotation of BLUE Down Anti-Clockwise
vector<vector<char>> Blue_Down_Clock(vector<vector<char>> vec)
{
    int a = vec[1][6];
    int b = vec[1][7];
    int c = vec[1][8];

    vec[1][6] = vec[2][6];
    vec[1][7] = vec[2][7];
    vec[1][8] = vec[2][8];

    vec[2][6] = vec[3][6];
    vec[2][7] = vec[3][7];
    vec[2][8] = vec[3][8];

    vec[3][6] = vec[4][6];
    vec[3][7] = vec[4][7];
    vec[3][8] = vec[4][8];

    vec[4][6] = a;
    vec[4][7] = b;
    vec[4][8] = c;

    vec[5] = rotate_clock(vec[5]);

    return vec;
}

/// Rotation of BLUE Down Anti-Clockwise
vector<vector<char>> Blue_Down_Anti_Clock(vector<vector<char>> vec)
{
    int a = vec[1][6];
    int b = vec[1][7];
    int c = vec[1][8];

    vec[1][6] = vec[4][6];
    vec[1][7] = vec[4][7];
    vec[1][8] = vec[4][8];

    vec[4][6] = vec[3][6];
    vec[4][7] = vec[3][7];
    vec[4][8] = vec[3][8];

    vec[3][6] = vec[2][6];
    vec[3][7] = vec[2][7];
    vec[3][8] = vec[2][8];

    vec[2][6] = a;
    vec[2][7] = b;
    vec[2][8] = c;

    vec[5] = rotate_anti_clock(vec[5]);

    return vec;
}

///Rotation of BLUE Front Clockwise
vector<vector<char>> Blue_Front_Clock(vector<vector<char>> vec)
{
    int a = vec[0][6];
    int b = vec[0][7];
    int c = vec[0][8];

    vec[0][6] = vec[2][8];
    vec[0][7] = vec[2][5];
    vec[0][8] = vec[2][2];

    vec[2][8] = vec[5][2];
    vec[2][5] = vec[5][1];
    vec[2][2] = vec[5][0];

    vec[5][2] = vec[4][0];
    vec[5][1] = vec[4][3];
    vec[5][0] = vec[4][6];

    vec[4][0] = a;
    vec[4][3] = b;
    vec[4][6] = c;

    vec[1] = rotate_clock(vec[1]);

    return vec;
}

/// Rotation of BLUE Front Anti-Clockwise
vector<vector<char>> Blue_Front_Anti_Clock(vector<vector<char>> vec)
{
    int a = vec[0][6];
    int b = vec[0][7];
    int c = vec[0][8];

    vec[0][6] = vec[4][0];
    vec[0][7] = vec[4][3];
    vec[0][8] = vec[4][6];

    vec[4][0] = vec[5][2];
    vec[4][3] = vec[5][1];
    vec[4][6] = vec[5][0];

    vec[5][2] = vec[2][8];
    vec[5][1] = vec[2][5];
    vec[5][0] = vec[2][2];

    vec[2][8] = a;
    vec[2][5] = b;
    vec[2][2] = c;

    vec[1] = rotate_anti_clock(vec[1]);

    return vec;
}

/// Rotation of BLUE Back Clockwise
vector<vector<char>> Blue_Back_Clock(vector<vector<char>> vec)
{
    int a = vec[0][0];
    int b = vec[0][1];
    int c = vec[0][2];

    vec[0][0] = vec[4][2];
    vec[0][1] = vec[4][5];
    vec[0][2] = vec[4][8];

    vec[4][2] = vec[5][8];
    vec[4][5] = vec[5][7];
    vec[4][8] = vec[5][6];

    vec[5][8] = vec[2][6];
    vec[5][7] = vec[2][3];
    vec[5][6] = vec[2][0];

    vec[2][6] = a;
    vec[2][3] = b;
    vec[2][0] = c;

    vec[3] = rotate_clock(vec[3]);

    return vec;
}

/// Rotation of BLUE Back Anti-Clcockwise
vector<vector<char>> Blue_Back_Anti_Clock(vector<vector<char>> vec)
{
    int a = vec[0][0];
    int b = vec[0][1];
    int c = vec[0][2];

    vec[0][0] = vec[2][6];
    vec[0][1] = vec[2][3];
    vec[0][2] = vec[2][0];

    vec[2][6] = vec[5][8];
    vec[2][3] = vec[5][7];
    vec[2][0] = vec[5][6];

    vec[5][8] = vec[4][2];
    vec[5][7] = vec[4][5];
    vec[5][6] = vec[4][8];

    vec[4][2] = a;
    vec[4][5] = b;
    vec[4][8] = c;

    vec[3] = rotate_anti_clock(vec[3]);

    return vec;
}
