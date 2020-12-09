#include <iostream>

using namespace std;

void printSolution(int *board, int M, int N)
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i * N + j]);
        printf("\n");
    }
}

// checks whether seats[row][col] is a safe place to sit
bool isSocialDistanced(int *seats, int M, int N, int row, int col)
{
    int i, j;

    for (int i = 0; i < M; i++)
    {
        if (*(seats + i * N + col) == 1)
        {
            return false;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (*(seats + row * N + i) == 1)
        {
            return false;
        }
    }

    return true;
}

bool solveByBacktracking(int *seats, int M, int N, int col, int S)
{

    if (col >= S)
        return true;

    // Consider this column and try placing
    // a person in all rows one by one
    for (int i = 0; i < M; i++)
    {
        //Check if a person can be placed on seats[i][col]
        if (isSocialDistanced(seats, M, N, i, col))
        {
            // Place the person in seats[i][col] only if the seat is usable
            // if not go to next row
            if (seats[i * N + col] == -1)
            {
                continue;
            }
            seats[i * N + col] = 1;

            // recur to place rest of the people
            if (solveByBacktracking(seats, M, N, col + 1, S))
                return true;

            // If placing person in seats[i][col]
            // doesn't lead to a solution, then
            // remove the person from seats[i][col]
            seats[i * N + col] = 0; // Backtracking
        }
    }

    // If S persons cannot be placed, return false
    return false;
}

void makeSeats(int *seats, int M, int N, string s)
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (s[i * N + j] == 'U') // Usable
            {
                *(seats + i * N + j) = 0;
            }
            else // Non-Usable
            {
                *(seats + i * N + j) = -1;
            }
        }
    }
}

int getUsableSeats(int M, int N, string s)
{
    int *seats = new int[M * N];

    // maximum number of seats possible will be minimum(rows, columns)
    // since there can be only person per row and column
    int S = M < N ? M : N;

    // creates the seats and store in seats array
    makeSeats(seats, M, N, s);

    // Worst Case - Time Complexity O(S x S!)
    // since S seats till 1 seat are tried
    while (S > 0)
    {
        if (solveByBacktracking(seats, M, N, 0, S) == false)
        {
            makeSeats(seats, M, N, s); // recreate the original seats array
            S -= 1;                    // since S seats cannot be filled, decrement by 1
        }
        else // if possible, S will be the maximum seats(tickets) to be sold
        {
            break;
        }
    }

    // prints any one possible seating arrangement
    printSolution(seats, M, N);

    return S;
}

int main()
{
    int cases, n, m, seats;
    string s = "";
    char ans;

    cin >> cases;
    for (int t = 0; t < cases; t++)
    {
        cin >> n >> m;
        for (int i = 0; i < n * m; i++)
        {
            cin >> ans;
            s += ans;
        }
        seats = getUsableSeats(n, m, s);
        s = "";
        cout << seats << endl;
    }

    return 0;
}
