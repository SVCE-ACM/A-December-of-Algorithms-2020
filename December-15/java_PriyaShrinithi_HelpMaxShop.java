package com.company;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;

public class HelpMaxShop
{
    int arrange(String garments)
    {
        int [] countMap = new int[garments.length()+1];
        int count = 0;
        int i = 0;
        while(i<garments.length()-1)
        {
            if((garments.charAt(i)=='s'&&garments.charAt(i+1)=='t') || garments.charAt(i)=='t'&&garments.charAt(i+1)=='s') {
                count+=1;
                i+=2;
            }
            else {
                count = 0;
                i++;
            }
            countMap[i] = count;
        }

        Arrays.sort(countMap);
        return countMap[countMap.length-1]*2;
    }
}
