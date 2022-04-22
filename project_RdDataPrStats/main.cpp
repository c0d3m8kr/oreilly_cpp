#include <iostream>
#include <string>
#include "File.h"
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream infile;

    int value = 0;
    int min = 0;
    int max = 0;
    int sum = 0;
    int count = 0;
    double average = 0;

    cout << fixed << showpoint;

    infile.open("scores.txt");

    while(!infile.eof())
    {
        infile >> value;    // read in the value

        // check for valid input
        if ((value >= 0) && (value <= 100))
        {
            // to read in initial value
            if (count == 0)
            {
                min = value;
                max = value;
            }

            if (value < min)
                min = value;
            if (value > max)
                max = value;
            sum += value;
            count++;
        }
        else
            cout << "Detected invalid input!" << endl;
    }

    average = (double)sum/(double)count;

    cout << "The minimum score is: " << min << endl;
    cout << "The maximum score is: " << max << endl;
    cout << "The average score is: " << setprecision(2) << average << endl;

    infile.close();

    return 0;
}