package com.company;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;

public class ClosestServers
{
    int k ;
    List <Integer> cities;
    List <Integer> centerCities;
    ClosestServers()
    {
        k = 2;
        centerCities = new ArrayList<>();
        cities = new ArrayList <>();
    }
    List <Integer> findCities(int [][] graph)
    {
        int radius = 1;
        int [] dummy = new int [(graph.length*graph.length)+1];
        int ij = 0;
        for(int i = 0;i<graph.length;i++)
        {
            for(int j = 0;j<graph.length;j++)
            {
                dummy[ij] = graph[i][j];
                ij++;

            }
        }
        Arrays.sort(dummy);
        radius = dummy[dummy.length/2];
        return kCenter(radius, graph);
    }
    List <Integer> getCities(int n)
    {
        List<Integer> cityList = new ArrayList<>();
        for(int i = 0;i<n;i++)
        {
            cityList.add(i);
        }
        return cityList;
    }

    void removeAllCitiesAt2rRadius(List<Integer> cities, int radius, int [][] graph, int city)
    {
        for(int i = 0;i<graph.length;i++){
            if(i<cities.size() && graph[city][i]<=2*radius)
                cities.remove(cities.get(i));
        }
        int i = 0;
        while(!cities.isEmpty())
        {
            centerCities.add(cities.remove(i));
            i++;
        }
    }
    List <Integer> kCenter(int radius, int [][] graph)
    {
        List <Integer> cities = getCities(graph.length);
        int i = 0;
        while(!cities.isEmpty())
        {
            int city = cities.remove(i);
            centerCities.add(city);
            removeAllCitiesAt2rRadius(cities, radius, graph, city);
            i++;
        }
        if(centerCities.size()<=k)
            return centerCities;
        return kCenter(radius+1, graph);
    }
}
