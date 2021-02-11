#include <iostream>
#include <string>

using namespace std;

string rotcipher(string msg, string key)
{
    string emsg = "";
    int no = 0;
    int rot = 0;

    // Get no of additions and rotations
    for (int i = 0; i < key.size(); i++)
    {
        if (key[i] == 'L')
        {
            no--;
        }
        else if (key[i] == 'H')
        {
            no++;
        }
        else
        {
            rot++;
        }
    }

    //get string
    for (int i = rot + 1; i < msg.size(); i++)
    {
        emsg += msg[i];
    }

    for (int i = 0; i < rot + 1; i++)
    {
        emsg += msg[i];
    }

    // additions to each char
    for (int i = 0; i < msg.size(); i++)
    {
        emsg[i] += no;
    }

    return emsg;

    return emsg;
}

// Driver Code
int main()
{
    string msg, key, emsg;

    cout << "Message : ";
    cin >> msg;
    cout << "Key : ";
    cin >> key;

    emsg = rotcipher(msg, key);

    cout << "Encrypted Message : " << emsg;
}