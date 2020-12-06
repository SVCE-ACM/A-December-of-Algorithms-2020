#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void getCombo(string str, int number, vector<string> *ans, vector<string> *dial)
{
    int size = to_string(number).size();

    if (number == 0) // this condition is achieved when size of the one of the element is equal to number of digits of number given as input by the user
    {
        ans->push_back(str);
    }
    else
    {
        int first_digit = (int)(number / ((int)(pow(10, size - 1) + 0.5)));
        //find the first digit of the number

        for (int i = 0; i < dial->at(first_digit).size(); i++)
        {
            int no = (int)(number % ((int)(pow(10, size - 1) + 0.5)));
            //finds the remaining digits

            string strr = str + dial->at(first_digit).substr(i, 1);
            getCombo(strr, no, ans, dial);
        }
    }
}

// Returns the combinations using getCombo function
vector<string> getList(int digits)
{

    vector<string> dial{"_", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans; // contains the combinations

    getCombo("", digits, &ans, &dial); // empty string should be given as the first argument

    return ans;
}

void print(vector<string> v)
{
    cout << '[';
    for (int i = 0; i < v.size(); i++)
    {
        cout << '"' << v.at(i) << '"' << ",";
    }
    cout << '\b' << ']';
}

int main()
{
    int digits;
    cin >> digits;
    print(getList(digits));
}