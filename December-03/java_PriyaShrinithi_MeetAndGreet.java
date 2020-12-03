package com.company;

import java.util.LinkedList;
import java.util.List;

public class MeetAndGreet
{
    List<List<String>> allotTime(List <List<String>> schedule)
    {
        List<List<String>> intervals  = new LinkedList<>();
        List <String> interval;
        int start_meet = 0;
        int end_meet = 0;

        int start = 900;
        int end = 1700;

        if(schedule==null)
        {
            interval = new LinkedList<>();
            interval.add(Integer.toString(start));
            interval.add(Integer.toString(end));
            intervals.add(interval);
        }
        else
        {
            for(List<String> s: schedule)
            {
                 System.out.println(s);
                 start_meet = Integer.parseInt(s.get(0));
                 end_meet = Integer.parseInt(s.get(1));

                if(start_meet - start >= 100)
                {
                    interval = new LinkedList<>();
                    interval.add(Integer.toString(start));
                    interval.add(Integer.toString(start_meet));
                    intervals.add(interval);
                }
                start = end_meet;
            }
            if(end - end_meet >=100)
            {
                interval = new LinkedList<>();
                interval.add(Integer.toString(end_meet));
                interval.add(Integer.toString(end));
                intervals.add(interval);

            }
        }
        return intervals;
    }
}
