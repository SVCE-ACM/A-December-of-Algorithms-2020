// Uses Dynamic Programming for calculating the edit distance
// For this problem , only one char is changed and can be compared using a
// simple for loop also

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// Utility for getting inputs to vectors
void getStrings(string strings, vector<string> &output)
{
    string s;
    strings = strings.substr(0, strings.size() - 1);
    stringstream ss(strings);

    while (getline(ss, s, ','))
    {
        output.push_back(s.substr(1, s.size()));
    }
    return;
}

int findEditDistance(string str1, string str2)
{
    int m = str1.size();
    int n = str2.size();

    int **DP = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        DP[i] = new int[n + 1];
    }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // first string is empty(add all chars)
            if (i == 0)
            {
                DP[i][j] = j;
            }
            // second string is empty(reove all chars)
            else if (j == 0)
            {
                DP[i][j] = i;
            }
            // if last char are same, go with all the previous
            // chars of both strings(we, in this func, start from right to left end)
            else if (str1[i] == str2[j])
            {
                DP[i][j] = DP[i - 1][j - 1];
            }
            // add the minimum of 3 operations(insert, remove, replace)
            // insert m,n-1 remove m-1,n replace m-1,n-1
            else
            {
                DP[i][j] = 1 + min(min(DP[i][j - 1], DP[i - 1][j]), DP[i - 1][j - 1]);
            }
        }
    }

    return DP[m][n];
}

// returns the correct word;
string findCorrectWord(vector<string> &dictionary, string misspelt)
{

    int minedit = 100000;
    int editDist = 0;
    string corrected = "";

    for (int i = 0; i < dictionary.size(); i++)
    {
        editDist = findEditDistance(misspelt, dictionary[i]);
        minedit = min(minedit, editDist);
        if (minedit == editDist)
        {
            corrected = dictionary[i];
        }
    }

    return corrected;
}

// Driver Code
int main()
{
    string strings, misspelt;
    vector<string> output;

    // get inputs
    getline(cin, strings);
    cin >> misspelt;
    // convert input string to vectors
    getStrings(strings, output);

    // output
    cout << findCorrectWord(output, misspelt) << endl;
}
