#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int findMaxItems(string str)
{
    vector<int> prefixsum;
    int sum = 0, maxitems = 0;
    map<int, int> sums;

    // set s as +1 and t as -1 and find the prefix sums till end
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 's')
        {
            sum += 1;
        }
        else
        {
            sum -= 1;
        }
        prefixsum.push_back(sum);
    }

    //sums[sum] = index of prefix sum
    sums[0] = -1;
    for (int i = 0; i < prefixsum.size(); i++)
    {
        if (sums.count(prefixsum[i]) == 0)
        {
            sums[prefixsum[i]] = i;
        }
        else
        {
            maxitems = max(maxitems, i - sums[prefixsum[i]]);
        }
    }

    return maxitems;
}

int main()
{
    string s;
    getline(cin, s);
    int a = findMaxItems(s);
    cout << a << endl;
}