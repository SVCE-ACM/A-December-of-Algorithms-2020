package com.company;

import java.util.LinkedList;
import java.util.List;
/*
 * It was a dark and stormy night where an Oldman and his grandson were playing chess.
 * The Oldman gave his grandson a problem, to check his knowledge and skills in chess.
 * He stated that, It was a square chessboard of A x B size, the position of Knight (C, D) and position of a target (E, F) is given.
 * Now the Grandson needs to find out the minimum steps a Knight will take to reach the target position.
 * Sample Input/Output
 * Dimension of Board : 6 6
 * Position of Knight : 1 1
 * Target Position :  4 5

 * Minimum Steps : 3
 * Explanation
 * From the starting position of the Knight (1,1). The Knight can move to either (3,2) or (2,3). We choose (3,2).
 * From (3,2) the Knight can move to (5,1), (1,3), (2,4), (4,4), (5,3), (1,1). We choose (5,3).
 * From (5,3) the Knight moves to (4,5).
 * The Minimum steps required is 3.
*/
public class KnightMinimumMoves
{
    int step = 0;
    int minMoves(int edge, int sx, int sy, int tx, int ty)
    {
        if(sx<edge && sy<edge)
        {
            System.out.println(sx+" "+sy);
            if (sx == tx && sy == ty)
                step++;
            step = 1 + Math.min(minMoves(edge, sx + 2, sy + 1, tx, ty), minMoves(edge, sx + 1, sy + 2, tx, ty));
        }

        return step;
    }
}
