package com.company;

import java.util.ArrayList;
import java.util.List;

public class RestoreIPAddress
{
    int r = 0;
    List <String> uncorrupted_log = new ArrayList<>();
    int corrupted_length = 0;
    List<String> restore(String corrupted_log)
    {
        if(corrupted_log.length()<4||corrupted_log.length()>12)
            return uncorrupted_log;
        corrupted_length = corrupted_log.length();
        backtrack("", corrupted_log, 0);
        return uncorrupted_log;
    }

    void backtrack(String partOfLog, String restOf_corrupted_log, int end)
    {
        r++;
        if(end==4||restOf_corrupted_log.length()==0) {
            String log = partOfLog.substring(0, partOfLog.length() - 1);
            if(validity(log))
                uncorrupted_log.add(log);
            System.out.println(r);
            return;
        }
        else
        {
            for(int i = 1;i<=(restOf_corrupted_log.charAt(0)=='0'?1:3) && i<=restOf_corrupted_log.length();i++)
            {
                String path = restOf_corrupted_log.substring(0, i);
                if(Integer.parseInt(path)> -1 && Integer.parseInt(path)<256)
                    backtrack(partOfLog+path+".", restOf_corrupted_log.substring(i), end + 1);
            }
        }
    }

    boolean validity(String log)
    {
        return log.split("[.]").length == 4 && corrupted_length+3==log.length();
    }
}