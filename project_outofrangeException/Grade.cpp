#include <iostream>
#include <string>
#include "Grade.h"

using namespace std;

letterGrade::letterGrade()
{
    this->grade = 0;
}

void letterGrade::setGrade(int &grade)
{
    this->grade = grade;
}

int letterGrade::getPercentGrade() const
{
    return grade;
}

char letterGrade::getLetterGrade()
{
    if((grade >= 0) && (grade <= 59))
        return 'F';
    else if((grade >= 60) && (grade <= 69))
        return 'D';
    else if((grade >= 70) && (grade <= 79))
        return 'C';
    else if((grade >= 80) && (grade <= 89))
        return 'B';
    else if((grade >= 90) && (grade <= 100))
        return 'A';
    else
        throw letterGradeException("Your percent must be within 0 and 100 inclusive");
}