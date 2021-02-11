#include <iostream>
#include <list>

using namespace std;

// checks if the point is inside the borad
bool isInside(int c, int d, int a, int b)
{
    if (c >= 1 & c <= a & d >= 1 & d <= b)
    {
        return true;
    }
    return false;
}

//calculates the minimum steps
int minsteps(int c, int d, int e, int f, int a, int b)
{
    // next steps moved by knight
    int steps_x[8] = {1, 1, 2, 2, -1, -1, -2, -2};
    int steps_y[8] = {2, -2, 1, -1, 2, -2, 1, -1};

    //respective grid number(each grid starts with 1 till a*b)
    // grid number of (1,1) is 1,(1,2) is 2 for a = 1 and b = 2
    int grid_number = (d - 1) * b + c;
    int target = (f - 1) * b + e;

    if (!isInside(c, d, a, b) | !isInside(e, f, a, b))
    {
        return -1;
    }

    int grid_c, grid_d, layer = 0, aa, bb, cc;

    list<int> queue;

    //boolean array storing whether the point has been visited or not
    bool *visited;
    visited = (bool *)malloc(((a * b) + 1) * sizeof(int));
    for (int i = 0; i <= a * b; i++)
    {
        visited[i] = false;
    }

    //set visit of first position as true and add to the queue
    visited[grid_number] = true;
    queue.push_back(c);
    queue.push_back(d);
    queue.push_back(layer); // layer of the bfs

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
                grid_number = (grid_d - 1) * b + grid_c;

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
    return -2;
}

// Driver Code
int main()
{
    int a, b, c, d, e, f, steps;
    cout << "Dimension of Board : ";
    cin >> a >> b;
    cout << "Position of Knight : ";
    cin >> c >> d;
    cout << "Target Position :  ";
    cin >> e >> f;

    steps = minsteps(c, d, e, f, a, b);

    if (steps == -1)
    {
        cout << "Minimum Steps : Target or Position Out of the bounds" << endl;
    }
    else if (steps == -2)
    {
        cout << "Minimum Steps : Impossible" << endl;
    }
    else
    {
        cout << "Minimum Steps : " << steps << endl;
    }
    return 0;
}