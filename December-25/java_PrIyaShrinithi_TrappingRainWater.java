package com.company;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;

public class Trap
{
    int corner = 0;
    int max = 0;
    int findTrap(int [] height)
    {
        HashMap<Integer, Integer> unique = new HashMap<>();
        for(int h: height)
        {
            if(!unique.containsKey(h))
                unique.put(h, 1);
            else
                unique.put(h, unique.get(h)+1);
        }
        int min = Collections.min(unique.keySet());
        max = Collections.max(unique.keySet());
        return findTrap(height, 0, height.length-1, min, 0, unique);
    }
    private int findTrap(int[] height, int start, int end, int h, int capacity, HashMap<Integer, Integer> unique)
    {
        corner = Math.min(height[start], height[end]);
        if(start==end)
            return capacity;
        while(start<=end)
        {
            if(height[start]==h){
                start++;
                unique.put(h, unique.get(h)-1);
            }
            if(height[end]==h){
                end--;
                unique.put(h, unique.get(h)-1);
            }
            else
                break;
        }
        capacity+=unique.get(h);
        if(!unique.containsKey(h+1) && h+1<max){
            unique.put(h+1, 0);
        }
        unique.put(h+1, unique.get(h+1)+unique.get(h));
        changeHeight(height, h, unique, start, end);
       if(h+1==corner)
           return capacity;
        return findTrap(height, start, end, h+1, capacity, unique);
    }
    void changeHeight(int [] height, int h, HashMap<Integer, Integer> unique, int start, int end)
    {
        int count = 0;
        int left = start;
        int right = end;
        int mid = left+right/2;
        if(height[mid] == h && h+1<max){
            height[mid] = h+1;
            count++;
        }
        while(left<right)
        {
            if(count==unique.get(h))
            {
                unique.put(h, 0);
                break;
            }
            if(height[left]==h  && h+1<max){
                height[left] = h+1;
                count++;
            }
            if(height[right]==h  && h+1<max){
                height[right] = h+1;
                count++;
            }
            left++;
            right--;
        }
        unique.put(h, 0);
    }
}
