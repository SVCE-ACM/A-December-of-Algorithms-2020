package com.company;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Pokemon
{
    List <Integer> match = new ArrayList<>();
    int matches = 0;
    int trainer(int pokemon, int [] A, int [] B)
    {
        compare(A, B);
        matchBreak(match, 0, 1);
        return matches;
    }

    void compare(int [] A, int[] B)
    {
        int j = 0;
        for(int i=0;i<A.length;i++)
        {
            if(A[i]>B[i])
                matches++;
            else
            {
                match.add(j, B[i]);
                match.add(j++, A[i]);
                j++;
            }
        }
    }

    void matchBreak(List<Integer> match, int left, int right)
    {
        if(match==null||right>=match.size()||left>=match.size())
            return;
        if(match.get(left)>match.get(right)) {
            matches++;
            match.remove(right);
            match.remove(left);
            matchBreak(match, 0, 1);
        }
        else
            matchBreak(match, left, right + 2);

    }
}
