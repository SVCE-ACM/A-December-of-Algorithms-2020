package com.company;
import java.lang.*;
public class Quest
{
    public boolean isRoomSafe(int door_number)
    {
        int door_squared = 0;
        int left = 0;
        int right = 0;

        if(door_number%3!=0)
            return false;
        door_squared = (int) Math.pow(door_number, 2);
        int count = Integer.toString(door_squared).length();

        left = (int) (door_squared / Math.pow(10, count / 2));
        right = (int) (door_squared - left*Math.pow(10, count/2));

        if(left+right!=door_number)
            return false;
        return true;
    }
}
