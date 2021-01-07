package com.company;

import java.util.LinkedList;
import java.util.Queue;

public class TemperatureScreen
{
    private Queue <String> checkUpOrder = new LinkedList<>();

    Queue<String> screen(Queue<String> A, Queue<String> B)
    {

        //A takes 2 minutes for 1 move
        //B takes 1 minute for 1 move
        if(A.isEmpty()&&B.isEmpty())
            return checkUpOrder;
        if(A.isEmpty())
        {
            checkUpOrder.add(B.poll());
            checkUpOrder.add(B.poll());
        }
        if(B.isEmpty())
            checkUpOrder.add(A.poll());
        else
        {
            checkUpOrder.add(B.poll());
            checkUpOrder.add(B.poll());
            checkUpOrder.add(A.poll());
        }
        return screen(A, B);
    }


}

