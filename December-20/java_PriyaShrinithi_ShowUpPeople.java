package com.company;

import java.util.List;

public class ShowUp
{
    char [] records = new char[]{'P', 'L', 'A'};
    int count =0;
    int r=0;
    int attendanceRecord(int n)
    {
        return attendanceRecord(n, "", 0);
    }
    int attendanceRecord(int n, String attendance, int absence)
    {

        if(attendance.contains("LLL")||(attendance.contains("A") && absence>=2))
            return 0;
        if(n==0)
            return 1;
        return attendanceRecord(n-1, attendance+records[0], absence) + attendanceRecord(n-1, attendance+records[1], absence) + attendanceRecord(n-1, attendance+records[2], absence+1);

    }
}
