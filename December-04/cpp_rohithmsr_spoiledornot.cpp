#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addDate(int days, int *day, int *month, int *year)
{
    *year += days / 360;
    *month += (days % 360) / 30;
    *day += ((days % 360) % 30);

    if (*day > 30)
    {
        *day -= 30;
        *month += 1;
    }
    if (*month > 12)
    {
        *month -= 12;
        *year += 1;
    }
}

void getDate(string today, int *td, int *tm, int *ty)
{
    int flag = 0;
    string s = "";
    *td = *tm = *ty = 0;
    for (int i = 0; i < today.size(); i++)
    {
        if (today.at(i) == ',')
        {
            if (flag == 0)
            {
                *td = stoi(s);
            }
            else if (flag == 1)
            {
                *tm += stoi(s);
            }
            flag++;
        }
        else if (today.at(i) == ' ')
        {
            s = "";
            continue;
        }
        else
        {
            s += today.at(i);
            *ty = stoi(s);
        }
    }
}

int spoiled(vector<string> *dates, vector<int> *days, string today)
{
    int td = 0, tm = 0, ty = 0;
    int day = 0, month = 0, year = 0;
    int count = 0;

    getDate(today, &td, &tm, &ty);

    for (int i = 0; i < days->size(); i++)
    {
        getDate(dates->at(i), &day, &month, &year);
        addDate(days->at(i), &day, &month, &year);

        if (year < ty)
        {
            count++;
            continue;
        }
        else if (month < tm & year == ty)
        {
            count++;
            continue;
        }
        else if (day < td & year == ty & month == tm)
        {
            count++;
            continue;
        }
    }
    return count;
}

int main()
{
    int n, day;
    char c;
    string date, today = "";

    vector<int> days;
    vector<string> dates;

    cout << "Number of Ice Creams : ";
    scanf("%d", &n);
    //n = 3;

    cout << "Manufacture Dates : ";
    getchar(); // clear buffer when getting string after getting int above
    getline(cin, date, '\n');
    //date = "[10, 01, 2020],[13, 01, 2020],[20, 12, 2019]";
    for (int i = 0; i < date.size(); i++)
    {
        if (date.at(i) == '[')
        {
            today = "";
        }
        else if (date.at(i) == ']')
        {
            dates.push_back(today);
            continue;
        }
        else
        {
            today += date.at(i);
        }
    }

    cout << "Best Before Dates : ";
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &day);
        days.push_back(day);
    }

    getchar();
    cout << "Given Date : ";
    getchar(); // clear buffer
    getline(cin, today, '\n');

    cout << "No. of. icecreams spoiled: ";

    cout << spoiled(&dates, &days, today.substr(0, 12)) << endl;
    return 0;
}