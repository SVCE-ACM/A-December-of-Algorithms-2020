#include <iostream>
#include <vector>

using namespace std;

int getGridInput(vector<vector<int>> *grid)
{

    int flag = 1;
    char c;
    vector<int> row;

    int lands = 0;

    cin >> c;

    // get input until there are 2 consecutive ']'
    // (ex;- ]]) which dentes end of input
    while (flag != 0)
    {
        cin >> c;
        if (c == '[')
        {
            flag++;
        }
        else if (c == '*')
        {
            lands++;
            row.push_back(lands);
        }
        else if (c == '_')
        {
            row.push_back(0);
        }
        else if (c == ']')
        {
            grid->push_back(row);
            row.clear();
            flag--;
        }
    }
    // we pop back the last empty list added becoz of last ']'
    grid->pop_back();

    // total no of lands
    return lands;
}

void getAdjacentMatrix(int *adjMat, vector<vector<int>> *grid, int lands)
{
    int rows = grid->size();
    int columns = grid->at(0).size();
    int no1, no2;

    // if any land is below it, add that to adjacencyMatrix
    // so loop only till second last row
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (grid->at(i).at(j) > 0 & grid->at(i + 1).at(j) > 0)
            {
                no1 = grid->at(i).at(j);
                no2 = grid->at(i + 1).at(j);
                *(adjMat + no1 * lands + (no2 - 1)) = 1;
            }
        }
    }

    // if any land to the right side of it, add that to adjacency matrix
    // so loop only till second last column
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns - 1; j++)
        {
            if (grid->at(i).at(j) > 0 & grid->at(i).at(j + 1) > 0)
            {
                no1 = grid->at(i).at(j);
                no2 = grid->at(i).at(j + 1);
                *(adjMat + no1 * lands + (no2 - 1)) = 1;
            }
        }
    }
}

void getIncidentList(int *incidentList, vector<vector<int>> *grid, int lands)
{
    int rows = grid->size();
    int columns = grid->at(0).size();
    int no;

    // if any land is below it, the lower land has incident edge
    // so add make 1 at the index of the lower land in the incident List.
    for (int i = 0; i < rows - 1; i++) // loop only till second last row
    {
        for (int j = 0; j < columns; j++)
        {
            if (grid->at(i).at(j) > 0 & grid->at(i + 1).at(j) > 0)
            {
                no = grid->at(i + 1).at(j);
                *(incidentList + no - 1) = 1;
            }
        }
    }

    // if any land to the right side of it, add that to adjacency matrix

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns - 1; j++) //loop only till second last column
        {
            if (grid->at(i).at(j) > 0 & grid->at(i).at(j + 1) > 0)
            {
                no = grid->at(i).at(j + 1);
                *(incidentList + no - 1) = 1;
            }
        }
    }
}

int noOfIsle(vector<vector<int>> *grid, int lands)
{
    int flag = 0;
    int island = 0;

    // Method 1 : Just checking whether it has atleast one incident edge
    // which means you have land attached to it(incident edge)
    // O(N x M) time complexity where N = no of rows & columns in the input

    int *incidentList = new int[lands];
    island = 0;

    getIncidentList(incidentList, grid, lands);

    for (int i = 0; i < lands; i++)
    {
        if (*(incidentList + i) == 0)
        {
            island++;
        }
    }

    return island;

        // Method 2: Using Adjacency Matrix Directly to check incident edge
    // O(no_of_lands ^ 2) time complexity

    // i have commented method 1, and used method 2 since it is has
    // time complexity as O(N x M) N = no of rows & columns in the input

    /*
    // Get the adjacent matrix
    int *adjMat = new int[lands * lands];
    getAdjacentMatrix(adjMat, grid, lands);

    // the sum of the values in each column gives
    // whether u have incident edges
    // if the sum is zero, then u don't have incident edge
    for (int k = 0; k < lands; k++)
    {
        for (int i = 0; i < lands; i++)
        {
            // check whether any value in column is equal to 1
            if (*(adjMat + i * lands + k) == 1)
            {
                flag = 1;
                continue;
            }
        }
        // means no column with value equal to 1
        // so no incident edge
        if (flag == 0)
        {
            island++;
        }
        flag = 0;
    }

    return island;
    */
}

int main()
{
    vector<vector<int>> grid;
    int lands;

    // get input and return the total number of lands
    lands = getGridInput(&grid);

    // find the number of islands
    cout << noOfIsle(&grid, lands) << " island(s)";
}