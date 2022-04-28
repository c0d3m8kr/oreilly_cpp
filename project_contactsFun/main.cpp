#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, string> contacts;

    contacts["John Baugh"] = "313-555-5555";
    contacts["Slitherin John"] = "545-333-1212";
    contacts["Huffle Puff John"] = "888-999-1010";

    for (pair<string, string> element : contacts)
    {
        cout << element.first << " = " << element.second << endl;
    }

    for (auto element : contacts)
    {
        cout << element.first << " = " << element.second << endl;
    }

    return 0;
}