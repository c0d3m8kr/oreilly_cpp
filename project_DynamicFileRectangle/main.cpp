#include <iostream>
#include <string>
#include "Rectangle.h"
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

void dataInput(ifstream& infile, vector <Rectangle*>& rectVect);
void dataOutput(ofstream& outfile, vector <Rectangle*>& rectVect);
void dataClear(vector <Rectangle*>& rectVect);

int main()
{
    ifstream infile;
    ofstream outfile;
    int tempNum;
    int numSet = 0;

    vector <Rectangle*> myRectVect;     // instantiate a myRectVect pointer vector of object Rectangle

    /*
    myRectVect.push_back(new Rectangle(3, 5));

    cout << myRectVect.at(0) << endl;
    cout << myRectVect.front() << endl;
    cout << myRectVect.front()->getLength() << endl;

    delete myRectVect.at(0);
    */

    infile.open("rectangles.txt");
    // check file open:
    if (!infile)
    {
        cout << "Could not open file for reading!" << endl;
        return 1;
    }
    cout << "infile open passed." << endl;

    outfile.open("outputData.txt");
    // check file open:
    if (!outfile)
    {
        cout << "Could not open file for writing!" << endl;
        return 1;
    }
    cout << "outfile open passed." << endl;

    dataInput(infile, myRectVect);
    cout << "dataInput function call completed." << endl;

    dataOutput(outfile, myRectVect);
    cout << "dataOutput function call completed." << endl;

    dataClear(myRectVect);

    /*
    while(!infile.eof())
    {
        //getline(infile, tempLine);
        infile >> tempNum;
        cout << tempNum;
        if (numSet < 1)
        {
            cout << " ";
            numSet++;
        }
        else
        {
            cout << endl;
            numSet = 0;
        }
    }
    */

    // close file streams and vector:
    infile.close();
    outfile.close();

    return 0;
}

void dataInput(ifstream& infile, vector <Rectangle*>& rectVect)
{
    int length = 0;
    int width = 0;
    Rectangle* temp;

    while (!infile.eof())
    {
        infile >> length;
        infile >> width;

        rectVect.push_back(new Rectangle(length, width));       // create new Rectangle object and return pointer to push_bac
    }
}

void dataOutput(ofstream& outfile, vector <Rectangle*>& rectVect)
{
    outfile << fixed << showpoint;
    cout << fixed << showpoint;

    for (Rectangle* rect : rectVect)
    {
        //outfile << rect->calcPerimeter() << "\t" << rect->calcArea() << endl;
        outfile << setw(3) << setprecision(1) << rect->getLength() << setw(3) << setprecision(1) << rect->getWidth()
                << setw(6) << setprecision(1) << rect->calcArea() << setw(6) << setprecision(1) << rect->calcPerimeter() << endl;

        cout << setw(3) << setprecision(1) << rect->getLength() << setw(3) << setprecision(1) << rect->getWidth()
                << setw(6) << setprecision(1) << rect->calcArea() << setw(6) << setprecision(1) << rect->calcPerimeter() << endl;
    }
}

void dataClear(vector <Rectangle*>& rectVect)
{
    for (Rectangle* rect : rectVect)
    {
        delete rect;
    }
    
    // clear vector:
    rectVect.clear();
}