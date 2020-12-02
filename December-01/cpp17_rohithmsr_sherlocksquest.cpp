#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int statusCheck(int room_no)
{
    int sqr, len, ans;

    if (room_no % 3 == 0)
    {
        sqr = room_no * room_no;
        len = (int)(to_string(sqr).size() / 2);

        ans = (int)(sqr / (int)(pow(10, len) + 0.5)) + (sqr % (int)(pow(10, len) + 0.5));

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