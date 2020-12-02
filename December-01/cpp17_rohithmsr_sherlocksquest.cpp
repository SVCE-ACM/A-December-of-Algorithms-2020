#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int room_no, sqr, len, ans;

    cout << "Room: ";
    cin >> room_no;
    cout << "Status: ";

    if (room_no % 3 == 0)
    {
        sqr = room_no * room_no;
        len = (int)(to_string(sqr).size() / 2);

        ans = (int)(sqr / (int)(pow(10, len) + 0.5)) + (sqr % (int)(pow(10, len) + 0.5));

        if (ans == room_no)
        {
            cout << "Safe" << endl;
        }
        else
        {
            cout << "Not Safe" << endl;
        }
    }
    else
    {
        cout << "Not Safe" << endl;
    }

    return 0;
}