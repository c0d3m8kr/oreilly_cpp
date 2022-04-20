#ifndef GRADE_H
#define GRADE_H

#include <stdexcept>

using namespace std;

class letterGrade
{
    public:
        // base init
        letterGrade();

        // setter
        void setGrade(int &grade);

        // getter
        int getPercentGrade() const;
        char getLetterGrade();

    private:
        int grade;
};

class letterGradeException : public out_of_range
{
    public:
        letterGradeException(const string &error) : out_of_range(error){}

    private:
};

#endif