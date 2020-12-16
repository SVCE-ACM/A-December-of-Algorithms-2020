package com.company;

import java.util.HashMap;

public class ROTCipher{
    HashMap<Character, Integer> alphaIndex = new HashMap<>();
    HashMap<Integer, Character> indexAlpha = new HashMap<>();
    int Z_index;
    int A_index;
    int z_index;
    int a_index;
    ROTCipher() {
        char c = 'a';
        for (int i = 0; i < 52; i++) {
            alphaIndex.put(c, i);
            indexAlpha.put(i, c);
            c++;
            if (c - 'z' ==1)
                c = 'A';
        }
    }

    String encrypt(String unencryptedMessage, String key) {
        StringBuilder message = new StringBuilder().append(unencryptedMessage);
        for (char k : key.toCharArray()) {
            if(k=='L')
                message = shift(message, -1);
            else if(k=='H')
                message = shift(message, +1);
            else if(k=='R')
                message = rotate(message);
            else
                continue;
            System.out.println(k+" "+message);
       }
        return message.toString();
}

    StringBuilder rotate(StringBuilder message) {
        message.toString();
        return new StringBuilder().append(message.substring(message.length()-1)+message.substring(0, message.length()-1));
    }

    StringBuilder shift(StringBuilder message, int val)
    {
        char [] rotMessage = new char[message.length()];
        int left = 0;
        int right = message.length()-1;
        int in_left = left;
        int in_right= right;
        while(left<right)
        {
            in_left = compare(alphaIndex.get(message.charAt(left)), val);
            in_right = compare(alphaIndex.get(message.charAt(right)), val);
            rotMessage [left] = indexAlpha.get(in_left);
            rotMessage[right] = indexAlpha.get(in_right);
            left++;
            right--;
        }
        if(left == right)
        {
            in_left = compare(alphaIndex.get(message.charAt(left)), val);
            rotMessage[left] = indexAlpha.get(in_left);
        }
        return new StringBuilder().append(rotMessage);
    }

    int compare(int index, int val)
    {
        if(val == 1) {
            Z_index = 51;
            A_index = 26;
            z_index = 25;
            a_index = 0;
        }
        else {
            A_index = 51;
            Z_index = 26;
            a_index = 25;
            z_index = 0;
        }

        if(index == Z_index)
            index = A_index;
        else if(index == z_index)
            index = a_index;
        else
            index = index+val;
        return index;
    }
}
