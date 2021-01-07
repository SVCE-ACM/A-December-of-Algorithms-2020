package com.company;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class Convo
{
    int j = 0;
    HashMap map = new HashMap<String, String>()
    {{
        put("2", "abc");
        put("3", "def");
        put("4", "ghi");
        put("5", "jkl");
        put("6", "mno");
        put("7", "pqrs");
        put("8", "tuv");
        put("9", "wxyz");
    }};

    List combinations = new ArrayList<String>();
    List <String> makeCombination(String number)
    {
        if(number.length()<=2)
            backtrack("", number);
        return combinations;
    }

    private void backtrack(String letter, String digit) {
        if (digit.length()==0)
            combinations.add(letter);
        else {
            String combinat = (String) map.get(digit.substring(0, 1));
            for (int i = 0; i < combinat.length(); i++)
            {
                backtrack(letter+combinat.substring(i, i + 1), digit.substring(1, digit.length()));
            }
        }
    }
}
