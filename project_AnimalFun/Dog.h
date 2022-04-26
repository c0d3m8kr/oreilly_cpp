#ifndef DOG_H
#define DOG_H

#include "Animal.h" // to inherit Animal class  
#include <string>

using namespace std;

class Dog : public Animal // everything in public, stays public. Private is not accessible, and protected is protected.
{
    public:
        Dog(string name, double weight, string breed);
        ~Dog();
        string getBreed() const;
        void digHole() const;
        string digAnotherHold() const;
        string makeNoise() const;           // method-override <-- called this because its via inheritance
                                            // in functions, its called method-overloading.
        void chaseCat() const;
        string eat() const;
    private:
        string breed;
};

#endif