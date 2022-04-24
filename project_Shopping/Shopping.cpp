#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <cstring>
#include "Shopping.h"

using namespace std;

/*
private::variables:
vector<string> names;
vector<int> frequencies;
*/

void ItemFrequencies::addItem(string name)
{
    int itemPosition = getNameIndex(name);

    if (itemPosition == -1)     // item doesn't exist yet and we add to vector!
    {
        names.push_back(name);
        frequencies.push_back(1);
    }
    else    // item exists and increment the frequency!
    {
        frequencies.at(itemPosition)++;
    }
}

void ItemFrequencies::printAll() const
{
    for (int i = 0; i < names.size(); i++)
    {
        cout << names.at(i) << ": " << frequencies.at(i) << endl;
    }
}

int ItemFrequencies::getNameIndex(string item) const
{
    int position = -1;          // effectively, -1 means not found!
    int index = 0;

    for (string searchName : names)
    {
        if (item.compare(searchName) == 0)   // means found!
            position = index;
        index++;
    }

    return position;
}