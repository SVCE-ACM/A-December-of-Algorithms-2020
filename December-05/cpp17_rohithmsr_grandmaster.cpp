#include <iostream>
#include <list>

using namespace std;

bool isInside(int c, int d, int a, int b)
{
    if (c >= 1 & c <= a & d >= 1 & d <= b)
    {
        return true;
    }
    return false;
}

int minsteps(int c, int d, int e, int f, int a, int b)
{
    int steps_x[8] = {1, 1, 2, 2, -1, -1, -2, -2};
    int steps_y[8] = {2, -2, 1, -1, 2, -2, 1, -1};

    int grid_number = (d - 1) * b + c;
    int target = (f - 1) * b + e;
    int grid_c, grid_d, layer = 0, aa, bb, cc;

    list<int> queue;

    bool visited[80] = {false};
    for (int i = 0; i <= a * b; i++)
    {
        visited[i] = false;
    }

    visited[grid_number] = true;
    queue.push_back(c);
    queue.push_back(d);
    queue.push_back(layer);

    while (!queue.empty())
    {
        aa = queue.front();
        queue.pop_front();
        bb = queue.front();
        queue.pop_front();
        cc = queue.front();
        queue.pop_front();

        if (visited[target] == true)
        {
            return layer;
        }
        for (int i = 0; i < 8; i++)
        {
            grid_c = aa + steps_x[i];
            grid_d = bb + steps_y[i];
            layer = cc + 1;

            if (visited[target] == true)
            {
                return layer;
            }

            if (isInside(grid_c, grid_d, a, b))
            {
                grid_number = (grid_c - 1) * b + grid_d;

                if (!visited[grid_number])
                {
                    visited[grid_number] = true;
                    queue.push_back(grid_c);
                    queue.push_back(grid_d);
                    queue.push_back(layer);
                }
            }
        }
    }
}

int main()
{
    int a = 6, b = 6, c = 1, d = 1, e = 3, f = 2, steps;
    // int a, b, c, d, e, f, steps;
    // cout << "Dimension of Board : ";
    // cin >> a >> b;
    // cout << "Position of Knight : ";
    // cin >> c >> d;
    // cout << "Target Position :  ";
    // cin >> e >> f;

    steps = minsteps(c, d, e, f, a, b);

    cout << "Minimum Steps : " << steps;
    return 0;
}