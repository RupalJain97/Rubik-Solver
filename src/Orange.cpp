/// Header Files
#include <bits/stdc++.h>
#include "headerFiles.h"

using namespace std;

/// Rotation of ORANGE Right Clockwise
vector<vector<char>> Orange_Right_Clock(vector<vector<char>> vec)
{
    char a = vec[0][0];
    char b = vec[0][1];
    char c = vec[0][2];

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

/// Rotation of ORANGE Right Anti-Clockwise
vector<vector<char>> Orange_Right_Anti_Clock(vector<vector<char>> vec)
{
    char a = vec[0][0];
    char b = vec[0][1];
    char c = vec[0][2];

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

/// Rotation of ORANGE Left Clockwise
vector<vector<char>> Orange_Left_Clock(vector<vector<char>> vec)
{
    char a = vec[4][0];
    char b = vec[4][3];
    char c = vec[4][6];

    vec[4][0] = vec[0][6];
    vec[4][3] = vec[0][7];
    vec[4][6] = vec[0][8];

    vec[0][6] = vec[2][8];
    vec[0][7] = vec[2][5];
    vec[0][8] = vec[2][2];

    vec[2][8] = vec[5][2];
    vec[2][5] = vec[5][1];
    vec[2][2] = vec[5][0];

    vec[5][2] = a;
    vec[5][1] = b;
    vec[5][0] = c;

    vec[1] = rotate_clock(vec[1]);

    return vec;
}

/// Rotation of ORANGE Left Anti-Clockwise
vector<vector<char>> Orange_Left_Anti_Clock(vector<vector<char>> vec)
{
    char a = vec[4][0];
    char b = vec[4][3];
    char c = vec[4][6];

    vec[4][0] = vec[5][2];
    vec[4][3] = vec[5][1];
    vec[4][6] = vec[5][0];

    vec[5][2] = vec[2][8];
    vec[5][1] = vec[2][5];
    vec[5][0] = vec[2][2];

    vec[2][8] = vec[0][6];
    vec[2][5] = vec[0][7];
    vec[2][2] = vec[0][8];

    vec[0][6] = a;
    vec[0][7] = b;
    vec[0][8] = c;

    vec[1] = rotate_anti_clock(vec[1]);

    return vec;
}

/// Rotation of ORANGE Up Clockwise
vector<vector<char>> Orange_Up_Clock(vector<vector<char>> vec)
{
    char a = vec[4][0];
    char b = vec[4][1];
    char c = vec[4][2];

    vec[4][0] = vec[3][0];
    vec[4][1] = vec[3][1];
    vec[4][2] = vec[3][2];

    vec[3][0] = vec[2][0];
    vec[3][1] = vec[2][1];
    vec[3][2] = vec[2][2];

    vec[2][0] = vec[1][0];
    vec[2][1] = vec[1][1];
    vec[2][2] = vec[1][2];

    vec[1][0] = a;
    vec[1][1] = b;
    vec[1][2] = c;

    vec[0] = rotate_clock(vec[0]);

    return vec;
}

// Rotation of ORANGE Up Anti-Clockwise
vector<vector<char>> Orange_Up_Anti_Clock(vector<vector<char>> vec)
{
    char a = vec[4][0];
    char b = vec[4][1];
    char c = vec[4][2];

    vec[4][0] = vec[1][0];
    vec[4][1] = vec[1][1];
    vec[4][2] = vec[1][2];

    vec[1][0] = vec[2][0];
    vec[1][1] = vec[2][1];
    vec[1][2] = vec[2][2];

    vec[2][0] = vec[3][0];
    vec[2][1] = vec[3][1];
    vec[2][2] = vec[3][2];

    vec[3][0] = a;
    vec[3][1] = b;
    vec[3][2] = c;

    vec[0] = rotate_anti_clock(vec[0]);

    return vec;
}

/// Rotation of ORANGE Down Clockwise
vector<vector<char>> Orange_Down_Clock(vector<vector<char>> vec)
{
    char a = vec[4][6];
    char b = vec[4][7];
    char c = vec[4][8];

    vec[4][6] = vec[1][6];
    vec[4][7] = vec[1][7];
    vec[4][8] = vec[1][8];

    vec[1][6] = vec[2][6];
    vec[1][7] = vec[2][7];
    vec[1][8] = vec[2][8];

    vec[2][6] = vec[3][6];
    vec[2][7] = vec[3][7];
    vec[2][8] = vec[3][8];

    vec[3][6] = a;
    vec[3][7] = b;
    vec[3][8] = c;

    vec[5] = rotate_clock(vec[5]);

    return vec;
}

/// Rotation of ORANGE Down Anti-Clockwise
vector<vector<char>> Orange_Down_Anti_Clock(vector<vector<char>> vec)
{
    char a = vec[4][6];
    char b = vec[4][7];
    char c = vec[4][8];

    vec[4][6] = vec[3][6];
    vec[4][7] = vec[3][7];
    vec[4][8] = vec[3][8];

    vec[3][6] = vec[2][6];
    vec[3][7] = vec[2][7];
    vec[3][8] = vec[2][8];

    vec[2][6] = vec[1][6];
    vec[2][7] = vec[1][7];
    vec[2][8] = vec[1][8];

    vec[1][6] = a;
    vec[1][7] = b;
    vec[1][8] = c;

    vec[5] = rotate_anti_clock(vec[5]);

    return vec;
}

///Rotation of ORANGE Front Clockwise
vector<vector<char>> Orange_Front_Clock(vector<vector<char>> vec)
{
    char a = vec[0][8];
    char b = vec[0][5];
    char c = vec[0][2];

    vec[0][8] = vec[1][8];
    vec[0][5] = vec[1][5];
    vec[0][2] = vec[1][2];

    vec[1][8] = vec[5][8];
    vec[1][5] = vec[5][5];
    vec[1][2] = vec[5][2];

    vec[5][8] = vec[3][0];
    vec[5][5] = vec[3][3];
    vec[5][2] = vec[3][6];

    vec[3][0] = a;
    vec[3][3] = b;
    vec[3][6] = c;

    vec[4] = rotate_clock(vec[4]);

    return vec;
}

/// Rotation of ORANGE Front Anti-Clockwise
vector<vector<char>> Orange_Front_Anti_Clock(vector<vector<char>> vec)
{
    char a = vec[0][8];
    char b = vec[0][5];
    char c = vec[0][2];

    vec[0][8] = vec[3][0];
    vec[0][5] = vec[3][3];
    vec[0][2] = vec[3][6];

    vec[3][0] = vec[5][8];
    vec[3][3] = vec[5][5];
    vec[3][6] = vec[5][2];

    vec[5][8] = vec[1][8];
    vec[5][5] = vec[1][5];
    vec[5][2] = vec[1][2];

    vec[1][8] = a;
    vec[1][5] = b;
    vec[1][2] = c;

    vec[4] = rotate_anti_clock(vec[4]);

    return vec;
}

/// Rotation of ORANGE Back Clockwise
vector<vector<char>> Orange_Back_Clock(vector<vector<char>> vec)
{
    char a = vec[0][6];
    char b = vec[0][3];
    char c = vec[0][0];

    vec[0][6] = vec[3][2];
    vec[0][3] = vec[3][5];
    vec[0][0] = vec[3][8];

    vec[3][2] = vec[5][6];
    vec[3][5] = vec[5][3];
    vec[3][8] = vec[5][0];

    vec[5][6] = vec[1][6];
    vec[5][3] = vec[1][3];
    vec[5][0] = vec[1][0];

    vec[1][6] = a;
    vec[1][3] = b;
    vec[1][0] = c;

    vec[2] = rotate_clock(vec[2]);

    return vec;
}

/// Rotation of ORANGE Back Anti-Clcockwise
vector<vector<char>> Orange_Back_Anti_Clock(vector<vector<char>> vec)
{
    char a = vec[0][6];
    char b = vec[0][3];
    char c = vec[0][0];

    vec[0][6] = vec[1][6];
    vec[0][3] = vec[1][3];
    vec[0][0] = vec[1][0];

    vec[1][6] = vec[5][6];
    vec[1][3] = vec[5][3];
    vec[1][0] = vec[5][0];

    vec[5][6] = vec[3][2];
    vec[5][3] = vec[3][5];
    vec[5][0] = vec[3][8];

    vec[3][2] = a;
    vec[3][5] = b;
    vec[3][8] = c;

    vec[2] = rotate_anti_clock(vec[2]);

    return vec;
}
