#ifndef SHOPPING_H
#define SHOPPING_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ItemFrequencies
{
    public:
        void addItem(string name);
        void printAll() const;

    private:
        vector<string> names;
        vector<int> frequencies;
        int getNameIndex(string item) const;
};

#endif