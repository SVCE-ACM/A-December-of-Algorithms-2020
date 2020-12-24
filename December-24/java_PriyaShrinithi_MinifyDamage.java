package com.company;

public class Minify
{
    private int damage = 0;
    int findMin(int [] enemies,int k)
    {
        breakEnemies(enemies, k, enemies.length/k);
        return damage;
    }
    void analyseEnemies(int [][] enemies)
    {
        int i = 0;
        int j = 1;
        while(i<enemies.length)
        {
            if(!(canDamage(enemies, i, 0, i, 1) && canDamage(enemies, j, 0, j, 1)) && enemies[i][0]!=enemies[j][0])
                    swap(i, 0, j, 1, enemies);
            if(Math.abs(enemies[i][0]-enemies[i][1])!=Math.abs(enemies[j][0]-enemies[j][1]))
            {
                if(canDamage(enemies, i, 0, j, 1) && canDamage(enemies, i, 0, j, 0) && Math.abs(enemies[i][0]-enemies[j][0])<Math.abs(enemies[i][0]-enemies[i][1]))
                    swap(i, 0, j, 1, enemies);
                if(canDamage(enemies, i, 1, j, 0) && canDamage(enemies, i, 1, j, 1) && Math.abs(enemies[i][0]-enemies[j][1])<Math.abs(enemies[i][0]-enemies[i][1]))
                        swap(i, 1, j, 0, enemies);
            }
            if(canDamage(enemies, i, 0, i, 1) && canDamage(enemies, j, 0, j, 1))
                damage+=Math.abs(enemies[i][0]-enemies[i][1])+Math.abs(enemies[j][0]-enemies[j][1]);
            else{
                damage = -1;
                break;
            }
            i+=2;
            j+=2;
            if(j>=enemies.length && enemies.length%2!=0)
                j = i;
        }
    }

    void swap(int i0, int i1, int j0, int j1, int [][] e)
    {
        int temp = e[i0][i1];
        e[i0][i1] = e[j0][j1];
        e[j0][j1] = temp;
    }

    void breakEnemies(int [] enemies, int k, int parts)
    {
        int [][]inter = new int [k][parts];
        int i = 0;
        int part_index = 0;
        int k_index  = 0;
        while(i<enemies.length)
        {
            inter[k_index][part_index] = enemies[i];
            i++;
            part_index++;
            if(part_index==parts)
            {
                k_index++;
                part_index = 0;
            }
        }
       analyseEnemies(inter);
    }
    boolean canDamage(int [][] enemies, int i0, int i1, int j0, int j1)
    {
        return enemies[i0][i1] - enemies[j0][j1] != 0;
    }
}
