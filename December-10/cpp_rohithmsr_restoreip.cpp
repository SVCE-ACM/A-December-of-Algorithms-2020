/* 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Restore IP Addresses. // Same problem found in Leetcode

Memory Usage: 7.1 MB, less than 58.42% of C++ online submissions for Restore IP Addresses.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    // This function checks if valid integer or not
    bool validInt(string s)
    {
        int a = stoi(s);

        if (a<0 | a> 255)
        {
            return false;
        }
        if (to_string(a).size() != s.size())
        {
            return false;
        }
        return true;
    }

    // This functions finds the possible IP addresses and adds to output vector
    void Util(vector<string> *output, string s, int pos, string ans, int dot)
    {
        string temp = "";

        // Impossible condition
        if (s.size() < 4 | s.size() > 12)
        {
            return;
        }

        //More than 3 dots, we may get the answer
        if (dot == 4)
        {
            // ignore the last dot added to the string
            ans = ans.substr(0, ans.size() - 1);

            // checks if answer is a valid ip address or not
            if (ans.size() == s.size() + 3)
            {
                output->push_back(ans);
            }
            return;
        }

        // Backtracking
        for (int i = 1; i < 4; i++)
        {
            // Checks doesnt exceed the char limit
            if ((pos + i) <= s.size())
            {
                if (validInt(s.substr(pos, i)))
                {
                    temp = s.substr(pos, i);
                    temp += '.';
                    Util(output, s, pos + i, ans + temp, dot + 1);
                }
            }
        }
        return;
    }

    vector<string> restoreIpAddresses(string s)
    {
        vector<string> output;
        Util(&output, s, 0, "", 0);
        return output;
    }
};

int main()
{
    Solution s;
    string corrupted_log;

    cin >> corrupted_log;
    vector<string> output = s.restoreIpAddresses(corrupted_log);

    corrupted_log = "";
    for (auto i = output.begin(); i != output.end(); ++i)
    {
        corrupted_log = corrupted_log + '\"' + *i + "\",";
    }
    corrupted_log = corrupted_log.substr(0, corrupted_log.size() - 1);

    // output the result
    cout << corrupted_log;
}