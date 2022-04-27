#include <iostream>
#include <string>
#include <vector>

using namespace std;

void spoiled(vector<long long> &dates, long long today)
{
    int count = 0;
    for (int i = 0; i < dates.size(); i++)
    {
        if (dates[i] < today)
        {
            count++;
        }
    }
    printf("\n%d\n", count);
}

int main()
{
    int n;
    cin >> n;

    long long a, b, c, d;

    vector<long long> dates;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        a = a + (b * 30) + (c * 12 * 30) + d;
        dates.push_back(a);
    }

    cin >> a >> b >> c;
    long long today = a + (b * 12) + (c * 12 * 30);
    spoiled(dates, today);
    return 0;
}

/*
3
10 1 2020 20
13 1 2020 13
20 12 2019 20
28 1 2020
*/