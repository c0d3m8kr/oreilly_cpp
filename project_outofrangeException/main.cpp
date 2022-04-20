#include <iostream>
#include "Grade.h"
#include <stdexcept>

using namespace std;

int main()
{
    letterGrade myGrade;
    int value;

    cout << "Please enter percentage value: ";
    cin >> value;

    myGrade.setGrade(value);

    try
    {
        cout << myGrade.getLetterGrade() << endl;
    }
    catch(const letterGradeException & err)
    {
        cout << err.what() << '\n';
    }
    

    return 0;
}