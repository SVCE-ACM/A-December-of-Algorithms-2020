package com.company;

public class Spoiled
{
    int spoiledOrNot(int icecreamNumbers, int[][] manufacturingDates, int [] bestBeforeDays, int [] Date)
    {
        if(manufacturingDates.length!=bestBeforeDays.length)
            System.exit(-1);

        int spoiledIcecreamNumbers = 0;

        int [][] spoiled = new int[manufacturingDates.length][manufacturingDates[0].length];
        int i = 0;
        for(int[] date: manufacturingDates)
        {
            date[0] = date[0]+bestBeforeDays[i];
            if(date[0]>30){
                date[0] -=30;
                date[1]++;
            }
            if(date[1]>12){
                date[1]-=12;
                date[2]++;
            }
            i++;
            if(date[2]<=Date[2]&&date[1]<=Date[1]&&date[0]<Date[0])
                spoiledIcecreamNumbers++;
        }

        return spoiledIcecreamNumbers;
    }
}
