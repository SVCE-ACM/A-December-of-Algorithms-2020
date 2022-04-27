#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int getReward(string s)
{
    // String Vector with # in between
    vector<char> T;
    T.push_back('#');
    for (int i = 0; i < s.size(); i++)
    {
        T.push_back(s[i]);
        T.push_back('#');
    }
    // Position array
    int n = T.size();
    vector<int> P;
    for (int i = 0; i < n; i++)
    {
        P.push_back(0);
    }

    int C = 0; // index of center of main palindrome
    int R = 0; // index of right bound of main palindrome

    // Find the LPS(Longest Palindromic String)
    for (int i = 1; i < n - 1; i++)
    {
        int mirror = (C * 2) - i;
        // if i within main palindrome, update P[i] accordingly
        if (i < R)
        {
            P[i] = min(R - i, P[mirror]);
        }

        //Expand Palindrome if possible
        while (T[i + 1 + P[i]] == T[i - 1 - P[i]])
        {
            P[i]++;
        }

        //Update indices of Center and Right accordingly
        if (i + P[i] > R)
        {
            C = i;
            R = i + P[i];
        }
    }

    int center = 0, length = 0, reward = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (P[i] >= length)
        {
            temp = 0;
            for (int j = i - P[i]; j < i + P[i]; j++)
            {
                if (T[j] == 'D')
                {
                    temp += 500;
                }
                else if (T[j] == 'R')
                {
                    temp += 250;
                }
                else if (T[j] == 'E')
                {
                    temp += 100;
                }
            }
            temp = temp * P[i];
            if (temp > reward)
            {
                center = i;
                length = P[i];
                reward = temp;
            }
        }
    }

    int start = (center - length) / 2;
    int end = (center + length) / 2;
    for (int i = start; i < end; i++)
        printf("%c", s[i]);
    printf("\n");
    for (int i = center - length; i < center + length; i++)
        printf("%c", T[i]);
    printf("\n");

    return reward;
}

int main()
{
    // string s;
    // getline(cin, s);
    // cout << getReward(s) << endl;

    string s = "RDEREDRRRD";
    cout << getReward(s) << endl;
}