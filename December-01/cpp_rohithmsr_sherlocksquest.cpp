#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int statusCheck(int room_no)
{
    int sqr, len, k, ans, first_part, second_part;

    if (room_no % 3 == 0)
    {
        sqr = room_no * room_no;
        k = (int)(to_string(room_no).size()); // no of digits of room_no
        len = (int)(to_string(sqr).size());   // no of digits of (room_no)^2

        //before converting to int, add 0.5 for precision
        //since it stores pow(5,2) as 24.99999,
        //so add 0.5 and convert to int to get 25
        second_part = (sqr % (int)(pow(10, k) + 0.5));
        first_part = (sqr - second_part) / (int)(pow(10, k) + 0.5);

        ans = first_part + second_part;

        if (ans == room_no)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int room_no;

    cout << "Room: ";
    cin >> room_no;
    cout << "Status: ";

    if (statusCheck(room_no))
    {
        cout << "Safe" << endl;
    }
    else
    {
        cout << "Not Safe" << endl;
    }

    return 0;
}