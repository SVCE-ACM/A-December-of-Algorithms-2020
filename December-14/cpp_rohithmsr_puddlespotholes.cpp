#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void showPath(vector<vector<int>> &output)
{
    for (auto i : output)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
    return;
}

bool isValid(int i, int j, vector<vector<int>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();

    if (i >= row | j >= col | i < 0 | j < 0)
    {
        return false;
    }
    if (grid[i][j] == 0)
    {
        return false;
    }
    return true;
}

bool optimalPath(vector<vector<int>> &grid, vector<vector<int>> &output, int i, int j)
{
    int row = grid.size();
    int col = grid[0].size();

    // is End?
    if ((i == row - 1) & (j == col - 1))
    {
        output[i][j] = 1;
        return true;
    }

    // is Valid Point
    if (isValid(i, j, grid))
    {
        output[i][j] = 1;
        if (optimalPath(grid, output, i + 1, j))
        {
            return true;
        }
        if (optimalPath(grid, output, i, j + 1))
        {
            return true;
        }
        output[i][j] = 0;
        return false;
    }

    return false;
}

void findThePath(vector<vector<int>> &grid, vector<vector<int>> &output)
{
    if (!optimalPath(grid, output, 0, 0))
    {
        cout << "There is no path" << endl;
        ;
        return;
    }
    showPath(output);
    return;
}

int main()
{
    vector<vector<int>> grid = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {0, 1, 0, 0},
                                {1, 1, 1, 1}};
    vector<vector<int>> output = {{0, 0, 0, 0},
                                  {0, 0, 0, 0},
                                  {0, 0, 0, 0},
                                  {0, 0, 0, 0}};

    findThePath(grid, output);
}
