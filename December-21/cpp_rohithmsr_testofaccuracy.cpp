/*
The logic for the code is inspired from a CODECHEF PROBLEM - A BOW and ARROW
that uses rotational line sweep algorithm to detect the number of targets
This problem is slightly similar to that

// Refer Editorial Section for the problem for better understanding
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solve(int n, int *X1, int *X2, int *Y)
{
    // not needed for angle calculation since it is origin
    // double x = 0.0;
    // double y = 0.0;    // origin(0,0)
    //double eps = 1e-8; // for precision

    int currentTarget = 0, hitTargets = 0;

    vector<pair<double, int>> v;
    for (int i = 0; i < n; i++)
    {
        // atan2(y/x) slope of the point from the origin (0,0)
        // since we rotationally sweep from 0 to 90 deg,
        // add +1 when right endpoint is touched
        // add -1 when left endpoint is touched
        v.push_back(make_pair(atan2(Y[i], X1[i]), -1));
        v.push_back(make_pair(atan2(Y[i], X2[i]), 1));
    }
    // sort the vector based on slope in ascending order
    sort(v.begin(), v.end());

    // finds the maximum targets that can be hit
    for (int i = 0; i < v.size(); i++)
    {
        currentTarget = currentTarget + v[i].second;
        if (currentTarget > hitTargets)
        {
            hitTargets = currentTarget;
        }
    }
    return hitTargets;
}

int main()
{
    int X1[100], X2[100], Y[100], L[100];
    int n;
    cout << "Enter no. of. targets : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> X1[i] >> Y[i] >> L[i];
        X2[i] = X1[i] + L[i];
    }

    // int n = 5;
    // int X1[] = {30, 10, 20, 40, 20};
    // int X2[] = {40, 30, 50, 50, 30};
    // int Y[] = {40, 20, 50, 20, 30};

    cout << "Targets shot in a single bullet: " << solve(n, X1, X2, Y);
    cout << "\n";

    return 0;
}