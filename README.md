# Rubik Solver

#### A Simple and Easy Way to Solve the Rubik's Cube.

   ![Rubik Cube Image](/images/cube.jpg)

## Introduction

A Rubik’s cube is a 3D combination puzzle that has 6 faces, each face usually has 9 stickers in a 3x3 layout and the objective of the puzzle is to achieve the solved state where each face must be returned to having a unique color. Here I have applied the algorithm that will solve the Rubik's Cube. It is simple and easy way to learn how to solve the Rubik's Cube very quickly. In my program, there are 2 ways to solve the cube i.e. you have to choose that who will solve... you or computer. 

## Algorithm

### Skeleton of the Rubik's Cube

```
                  ------------
                  | W0 W1 W2 |
                  | W3 W4 W5 |
                  | W6 W7 W8 |
                  ------------
    ------------  ------------  ------------  ------------
    | R0 R1 R2 |  | B0 B1 B2 |  | O0 O1 O2 |  | G0 G1 G2 |
    | R3 R4 R5 |  | B3 B4 B5 |  | O3 O4 O5 |  | G3 G4 G5 |
    | R6 R7 R8 |  | B6 B7 B8 |  | O6 O7 O8 |  | G6 G7 G8 | 
    ------------  ------------  ------------  ------------
                  ------------
                  | Y0 Y1 Y2 | 
                  | Y3 Y4 Y5 | 
                  | Y6 Y7 Y8 | 
                  ------------

```
*Fig. 1*: Skeleton of the cube. Color Codes: *W = White*, *R = Red*, *B = Blue*, *O = Orange*, *G = Green*, *Y = Yellow*.

We are using *pivot face* as the face of the cube to use as a reference for the sequence of moves that will be applied. You should keep this face always in front while applying any move.
 
### Basic Moves

Here are all the available moves that can be applied to the cube. Consider the *Blue* face as pivot.
 
1.  *Blue_Right_Clockwise*
2.  *Blue_Right_Anti_Clockwise*
3.  *Blue_Left_Clockwise*
4.  *Blue_Left_Anti_Clockwise*
5.  *Blue_Up_Clockwise*
6.  *Blue_Up_Anti_Clockwise*
7.  *Blue_Down_Clockwise*
8.  *Blue_Down_Anti_Clockwise*
9.  *Blue_Front_Clockwise*
10. *Blue_Front_Anti_Clockwise*
11. *Blue_Back_Clockwise*
12. *Blue_Back_Anti_Clockwise*

Each move also has one of the following two operations depending on the rotation which need to be applied to the corresponding face:

1. *90-degree rotation_Clockwise*
2. *90-degree rotation_Anti-Clockwise*

### Snapshots of the Game

Here is the glimpse of how the computer will solve Rubik's cube.

![Board Image](/images/1.jpg)

*Fig. 1*: *Welcome to Rubik World*.

![Board Image](/images/2.jpg)

*Fig. 2*: *Put in moves to scramble the cube*.

![Board Image](/images/3.jpg)

*Fig. 3*: *Scrambled cube for computer to solve*.

![Board Image](/images/4.jpg)

*Fig. 4*: *Cube is getting solved stage by stage*.

![Board Image](/images/5.jpg)

*Fig. 5*: *Final stage of the solving cube*.

![Board Image](/images/6.jpg)

*Fig. 6*: *Solved Cube*.


### Algorithm

Note that clockwise and counter-clockwise turns are viewed with respect to the center of the face.

The solution algorithm consists of 7 stages in general:

1. Solve *Upper layer edge pieces* thus *making a WHITE Cross* as shown below.

      ![Rubik Cube Stage 1 Image](/images/Stage1.jpg)

2. Solve *Upper layer corner pieces* and *completing WHITE Layer* as shown below.

   ![Rubik Cube Stage 2 Image](/images/Stage2.jpg)

3. Solve *Middle layer edge peices* i.e. *placing Red, Blue, Orange and Green edges in their correct position* as shown below.

    ![Rubik Cube Stage 3 Image](/images/Stage3.jpg)

4. Make *a YELLOW Cross in Bottom Layer* as shown below.

   ![Rubik Cube Stage 4 Image](/images/Stage4.jpg)

5. Solve *YELLOW corner peices in Bottom Layer* thus *completing Yellow layer* as shown below.

   ![Rubik Cube Stage 5 Image](/images/Stage5.jpg)

6. Solve *Bottom layer corner pieces* as shown below.

   ![Rubik Cube Stage 6 Image](/images/Stage6.jpg)

7. Solve *Bottom layer edge pieces* to solve the Rubik's Cube as shown below.

   ![Rubik Cube Stage 7 Image](/images/Stage7.jpg)

## Execution

Follow these steps to copy this repository to your local directory and execute:

```
git clone https://github.com/RupalJain97/Rubik-Cube.git
cd Rubik-Cube/
cd bin/
./Rubik-Cube.exe
```
