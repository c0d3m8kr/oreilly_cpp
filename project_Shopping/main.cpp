#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include "Shopping.h"

using namespace std;

void readShoppingList(ifstream& infile, ItemFrequencies& newData);

int main()
{
    ItemFrequencies ShoppingItemFrequencies;
    ifstream infile;
    string item;

    //string first = "Hello";
    //string second = "Hello Is it me your looking for?";
    //cout << "first.compare(second) is: " << first.compare(second) << endl;

    infile.open("shopping.txt");

    if (!infile)
    {
        cout << "Error opening file...exiting." << endl;
        return 1;
    }

    while (!infile.eof())
    {
        infile >> item;
        ShoppingItemFrequencies.addItem(item);
    }

    ShoppingItemFrequencies.printAll();

    infile.close();

    return 0;
}