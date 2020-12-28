#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int farthest(vector<int> dist)
{
    int far = 0;
    int max_distance = 0;
    for (int i = 0; i < dist.size(); i++)
    {
        if (max_distance < dist[i])
        {
            max_distance = dist[i];
            far = i;
        }
    }
    return far;
}

void closestCenters(vector<vector<int>> distances, int k)
{
    int n = distances.size();
    int center = 0; // first index
    vector<int> centers;

    for (int i = 0; i < k; i++)
    {
        centers.push_back(center);
        center = farthest(distances[center]);
    }

    for (int i = 0; i < centers.size(); i++)
    {
        cout << centers[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int k = 2;
    vector<vector<int>> distances = {{0, 4, 8, 5}, {4, 0, 10, 7}, {8, 10, 0, 9}, {5, 7, 9, 0}};

    closestCenters(distances, k);

    return 0;
}