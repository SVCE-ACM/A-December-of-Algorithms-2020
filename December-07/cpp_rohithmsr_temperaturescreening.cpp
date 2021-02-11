#include <iostream>
#include <queue>
#include <string>

using namespace std;

void getInput(queue<string> &counter)
{
    string persons;
    string person = "";
    getline(cin, persons);

    for (int i = 0; i < persons.size(); i++)
    {
        if (persons[i] == ' ')
        {
            counter.push(person);
            person = "";
            continue;
        }
        person += persons[i];
    }
    counter.push(person);
    return;
}

void getQueue(queue<string> &TempQueue, queue<string> &counterA, queue<string> &counterB)
{
    getInput(counterA);
    getInput(counterB);

    //A takes 2 minutes for 1 move
    //B takes 1 minute for 1 move
    while (1)
    {
        if (counterA.empty() && counterB.empty())
        {
            break;
        }
        if (counterA.empty())
        {
            TempQueue.push(counterB.front());
            counterB.pop();
            if (!counterB.empty())
            {
                TempQueue.push(counterB.front());
                counterB.pop();
            }
        }
        if (counterB.empty())
        {
            TempQueue.push(counterA.front());
            counterA.pop();
        }
        else
        {
            TempQueue.push(counterB.front());
            counterB.pop();
            if (!counterB.empty())
            {
                TempQueue.push(counterB.front());
                counterB.pop();
            }
            TempQueue.push(counterA.front());
            counterA.pop();
        }
    }
}

int main()
{
    queue<string> counterA;
    queue<string> counterB;
    queue<string> TempQueue;

    getQueue(TempQueue, counterA, counterB);

    while (!TempQueue.empty())
    {
        cout << TempQueue.front() << ' ';
        TempQueue.pop();
    }
}