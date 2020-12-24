package com.company;

public class KnightAndThePrincess
{
    int healthPoints(int [][] fort)
    {
        int hp = 0;
        int rows  = fort.length;
        int columns = fort[0].length;
        int i = 0;
        int j = 0;
        while(i<rows && j<columns)
        {
            if(j<columns-1) {
                hp += fort[i][j];
                j++;
            }
            else {
                hp+=fort[i][j];
                i++;
            }
        }
        hp = Math.abs(hp)+1;
        return hp;
    }
}
