#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(int i, int j, vector<vector<char>> &grid, bool secret, vector<vector<bool>> &visited)
{
    int row = grid.size();
    int col = grid[0].size();

    if (i >= row | j >= col | i < 0 | j < 0)
    {
        return false;
    }

    if (visited[i][j])
    {
        return false;
    }

    if (secret)
    {
        if (grid[i][j] == 'p')
        {
            return true;
        }
        if (grid[i][j] == 'x')
        {
            return false;
        }
    }
    else
    {
        if (grid[i][j] == 'p')
        {
            return false;
        }
        if (grid[i][j] == 'x')
        {
            return false;
        }
    }

    return true;
}

void timeNeeded(int i, int j, int minutes, vector<vector<bool>> &visited, vector<vector<int>> &output, vector<vector<char>> &grid, bool secret)
{
    int row = grid.size();
    int col = grid[0].size();

    // Initial point
    if (i == -1 || i == row || j == -1 || j == col || visited[i][j])
    {
        return;
    }

    // is End?
    if ((i == row - 1) & (j == col - 1))
    {
        // Output has the minumum time to reach the path, since a point can be reached in many ways
        output[i][j] = min(minutes, output[i][j]);
        return;
    }

    visited[i][j] = true;

    if (isValid(i + 1, j, grid, secret, visited))
    {
        output[i][j] = min(minutes, output[i][j]);
        timeNeeded(i + 1, j, minutes + 1, visited, output, grid, secret);
    }

    if (isValid(i, j + 1, grid, secret, visited))
    {
        output[i][j] = min(minutes, output[i][j]);
        timeNeeded(i, j + 1, minutes + 1, visited, output, grid, secret);
    }

    if (isValid(i, j - 1, grid, secret, visited))
    {
        output[i][j] = min(minutes, output[i][j]);
        timeNeeded(i, j - 1, minutes + 1, visited, output, grid, secret);
    }

    if (isValid(i - 1, j, grid, secret, visited))
    {
        output[i][j] = min(minutes, output[i][j]);
        timeNeeded(i - 1, j, minutes + 1, visited, output, grid, secret);
    }

    visited[i][j] = false;
}

// Calculates time for each and find the winner
bool winner(vector<vector<char>> &grid)
{
    int row = grid.size();
    int col = grid[0].size();
    int Koushik, Mahesh;
    vector<int> roww(col, row * col);

    // Minutes to reach each point for both cases
    vector<vector<int>> output(row, roww);
    vector<vector<int>> output1(row, roww);
    // Vector containing visted or not
    vector<vector<bool>> visited;
    vector<vector<bool>> visited1;
    for (int i = 0; i < row; i++)
    {
        vector<bool> a;
        for (int j = 0; j < col; j++)
        {
            a.push_back(false);
        }
        visited.push_back(a);
        visited1.push_back(a);
        a.clear();
    }

    timeNeeded(0, 0, 0, visited, output, grid, true);
    Koushik = output[row - 1][col - 1];

    timeNeeded(0, 0, 0, visited1, output1, grid, false);
    Mahesh = output1[row - 1][col - 1] - 3;

    if (Koushik < Mahesh)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> grid;
    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        char c;
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            row.push_back(c);
        }
        grid.push_back(row);
        row.clear();
    }
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        grid[a][b] = 'p';
    }

    if (winner(grid))
    {
        cout << "Koushik" << endl;
    }
    else
    {
        cout << "Mahesh" << endl;
    }
}
/*
5 5 2
. x . . .
. x . x .
. . . x .
x . . x .
. . . x .
3 0
4 3
--
4 4 1
. . . x
x x . . 
. x . x
x x . .
1 1
*/

// vector<vector<char>> grid;
// grid = {{'.', '.', '.', 'x'}, {'x', 'x', '.', '.'}, {'.', 'x', '.', 'x'}, {'x', 'x', '.', '.'}};
// grid[1][1] = 'p';
// vector<vector<char>> grid;
// grid = {{'.', 'x', '.', '.', '.'}, {'.', 'x', '.', 'x', '.'}, {'.', '.', '.', 'x', '.'}, {'x', '.', '.', 'x', '.'}, {'.', '.', '.', 'x', '.'}};

// grid[3][0] = 'p';
// grid[4][3] = 'p';