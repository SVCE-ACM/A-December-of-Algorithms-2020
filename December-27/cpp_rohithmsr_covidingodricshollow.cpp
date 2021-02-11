#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isLockdownNeeded(vector<int> &X, vector<int> &Y, vector<char> &R)
{
    // jus extrapolate the points to X and Y axis
    // and find point is in the range
    int min_x = INT32_MAX, max_x = INT32_MIN;
    int min_y = INT32_MAX, max_y = INT32_MIN;
    for (int i = 0; i < R.size(); i++)
    {
        if (R[i] == 'Y')
        {
            if (X[i] < min_x)
            {
                min_x = X[i];
            }
            if (X[i] > max_x)
            {
                max_x = X[i];
            }
            if (Y[i] < min_y)
            {
                min_y = X[i];
            }
            if (Y[i] > max_y)
            {
                max_y = X[i];
            }
        }
    }

    for (int i = 0; i < R.size(); i++)
    {
        if (R[i] == 'N')
        {
            if (min_x <= X[i] & X[i] <= max_x)
            {
                return true;
            }
            if (min_y <= Y[i] & Y[i] <= max_y)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> X(n, 0);
    vector<int> Y(n, 0);
    char c;
    vector<char> R(n, 'a');

    for (int i = 0; i < n; i++)
    {
        cin >> X[i] >> Y[i] >> R[i];
    }

    if (isLockdownNeeded(X, Y, R))
    {
        cout << "Lockdown Required" << endl;
    }
    else
    {
        cout << "No Lockdown Required" << endl;
    }
    return 0;
}