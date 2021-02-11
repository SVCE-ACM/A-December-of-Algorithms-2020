#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool isValidArray(int *arr, int k)
{
    map<int, int> count;

    for (int i = 0; i < k * 2; i++)
    {
        count[arr[i]] += 1;
    }

    for (int i = 0; i < k * 2; i++)
    {
        if (count[arr[i]] > k)
        {
            return false;
        }
    }
    return true;
}

int minDiffSum(int k, int *arr)
{
    //sort the array(most important step)
    sort(arr, arr + k * 2);
    int i = (k * 2) - 1; // end index
    int j = i - 1;

    // check if such sum can be formed
    if (!isValidArray(arr, k))
    {
        return -1;
    }

    vector<int> stack;    // stores the index of the pairs
    map<int, int> chosen; // checks whether element is chosen or not
    for (int i = 0; i < k * 2; i++)
    {
        chosen[i] = 0;
    }

    while (1)
    {
        // all pairs are obtained
        if (stack.size() == k * 2)
        {
            break;
        }

        // if j reaches beyond starting index, then remove the last pair from
        // stack and update the chosen value as not chosen and decrement j by 1
        if (j < 0)
        {
            j = stack.back();
            chosen[j] = 0;
            j = j - 1;
            stack.pop_back();
            i = stack.back();
            chosen[i] = 0;
            stack.pop_back();
        }
        else
        {
            // if already number is chosen by another
            if (chosen[i] == 1)
            {
                i--;
            }
            // no 2 equal elements are selected as a pair
            else if (arr[i] - arr[j] != 0)
            {
                // if no one selected that element
                if (chosen[j] == 0)
                {
                    // check is there any element before element at j(except starting of array i.e index 0, so that
                    // previous element can be selected in the next step
                    // the first element which occurs first is chosen for
                    // optimising the work
                    if (j != 0 & (arr[j - 1] == arr[j]) & chosen[j - 1] == 0)
                    {
                        j--;
                    }
                    else
                    {
                        // push pair to stack and update the map
                        stack.push_back(i);
                        stack.push_back(j);
                        chosen[i] = 1;
                        chosen[j] = 1;

                        // select the next pair pointers
                        if (i == j + 1)
                        {
                            i = j - 1;
                            j = i - 1;
                        }
                        else
                        {
                            i = i - 1;
                            j = i - 1;
                        }
                    }
                }
                else
                {
                    j--;
                }
            }
            else
            {
                j--;
            }
        }
    }

    // minsum stores the answer
    int minsum = 0;
    for (int i = 0; i < stack.size(); i = i + 2)
    {
        minsum += (arr[stack[i]] - arr[stack[i + 1]]);
    }
    return minsum;
}

int main()
{
    int k;
    cin >> k;

    int *A = new int[k * 2];

    for (int i = 0; i < k * 2; i++)
    {
        cin >> A[i];
    }

    cout << minDiffSum(k, A) << endl;
}