#ifndef CAT_H
#define CAT_H
#include "Animal.h"
#include <string>

using namespace std;

class Cat : public Animal
{
    public:
        Cat(string name, double weight);    // Derived Cat Constructor
        ~Cat();                             // Derived Cat Destructor
        void chaseMouse() const;
        string makeNoise() const;
        string eat() const;
    private:
};

#endif