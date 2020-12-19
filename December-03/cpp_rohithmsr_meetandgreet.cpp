#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Convert Input string to Vector
vector<string> createList(string str)
{
    int quote = 0;
    string timestr = "";
    // add start time to vector
    vector<string> v = {"0900"};

    for (int i = 0; i < str.size(); i++)
    {
        if (str.at(i) == '\"')
        {
            if (quote % 2 == 1)
            {
                v.push_back(timestr);
                timestr = "";
            }
            quote++;
        }
        else if (quote % 2 == 1)
        {
            timestr = timestr + str.at(i);
        }
        else
        {
            continue;
        }
    }
    // add ending time to vector
    v.push_back("1700");

    // for (auto i = v.begin(); i != v.end(); ++i)
    //     cout << '|' << *i << '|' << " ";
    //fr debugging..lol

    return v;
}

void getIntervals(string str)
{
    int start, end, flag = 0;

    // ["0930","1100"],["1200","1330"],["1530","1630"]
    vector<string> v = createList(str);

    for (int i = 0; i < v.size(); i = i + 2)
    {
        start = stoi(v.at(i));
        end = stoi(v.at(i + 1));

        if (end - start >= 100)
        {
            if (flag == 1)
            {
                cout << ',';
            }
            cout << "[\"" << v[i] << "\",\"" << v[i + 1] << "\"]";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Can't have meeting today" << endl;
    }
    else
    {
        printf("\n");
    }
    return;
}

// Driver Code
int main()
{
    string str; // ["0930", "1100"],["1200","1330"],["1530","1630"]
    cin >> str;

    getIntervals(str);

    return 0;
}