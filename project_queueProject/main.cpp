#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue<string> nameQueue;
    string myNames[] = {"John", "Sally", "Bob", "Sam", "Ali", "Karen"};

    for (string name : myNames)
    {
        cout << name << endl;
        nameQueue.push(name);
    }

    while(!nameQueue.empty())
    {
        cout << nameQueue.front() << endl;
        nameQueue.pop();
    }

    return 0;
}