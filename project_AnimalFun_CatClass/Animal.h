#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal
{
    public:
        Animal(string name, double weight);
        virtual ~Animal();                              // virtual destructor required for deleting derived constructor
        string getName() const;
        void setName(string name);
        double getWeight() const;
        void setWeight(double weight);
        virtual string makeNoise() const = 0;           // adding pure virtual, = 0, converts to abstract class

    private:
        string name;
        double weight;
};

#endif