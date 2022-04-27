#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int wonBattles(int *A, int *B, int n)
{
    // sort both the arrays
    sort(A, A + n);
    sort(B, B + n);
    int count = 0;
    int i = 0;
    int j = 0;
    map<int, int> battle;

    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            if (A[i] > B[j])
            {
                j++;
            }
            else
            {
                break;
            }
        }
        j--;
        while (j >= 0)
        {
            if (A[i] > B[j])
            {
                if (battle.count(j) == 0)
                {
                    count++;
                    battle[j] = 1;
                    printf("%d-%d\n", A[i], B[j]);
                    break;
                }
            }
            j--;
        }
        i++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int *A = new int[n];
    int *B = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    cout << wonBattles(A, B, n) << endl;
}