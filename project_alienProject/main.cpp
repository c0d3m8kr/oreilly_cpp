#include <iostream>
#include <string>
#include <vector>
#include "Alien.h"
#include <memory>

using namespace std;

int main()
{
    // unique_ptr<Dog> myDogPtr = make_unique<Dog>(parameters_here);
    // this is for one pointer called myDogPtr...that will hold
    // one Dog
    // vector<Rectangle*> myVectRect;
    // Rectangle* temp;
    // temp = new Rectangle(length, width);
    // A vector of unique_ptrs to Alien objects:
    vector<unique_ptr<Alien>> vectUniqueAliens;
    /*
    vectUniqueAliens.push_back(make_unique<Alien>(124, 34, 'M'));
    cout << vectUniqueAliens.at(0)->getWeight() << endl;
    cout << vectUniqueAliens.at(0)->getHeight() << endl;
    cout << vectUniqueAliens.at(0)->getGender() << endl;
    cout << vectUniqueAliens.at(0)->getPrestige() << endl;
    vectUniqueAliens.clear();
    */

    int weight;
    int height;
    char sex;
    int choice = 1;
    int menuChoice;
    int alienChoice1, alienChoice2;

    while(choice)
    {
        cout << "Populate Mars" << endl;
        cout << "Please enter choice:" << endl;
        cout << '\t' << "[1] Create Alien" <<endl;
        cout << '\t' << "[2] Breed" << endl;
        cout << '\t' << "[3] View Aliens on Planet" << endl;
        cout << '\t' << "[4] Exit" << endl;
        cin >> menuChoice;
        cin.ignore();
        if (menuChoice == 4)
            choice = 0;
        else
        {
            switch(menuChoice)
            {
                case 1:
                    cout << endl << "Please enter weight: ";
                    cin >> weight;
                    cin.ignore();
                    cout << "Please enter height: ";
                    cin >> height;
                    cin.ignore();
                    cout << "Please enter gender: ";
                    cin >> sex;
                    cin.ignore();
                    vectUniqueAliens.push_back(make_unique<Alien>(weight, height, sex));
                    break;
                case 2:
                    for (int i = 0; i < vectUniqueAliens.size(); i++)
                    {
                        cout << "index[" << i << "]:" << " W[";
                        cout << vectUniqueAliens.at(i)->getWeight() << "], H[";
                        cout << vectUniqueAliens.at(i)->getHeight() << "], G[";
                        cout << vectUniqueAliens.at(i)->getGender() << "]." << endl;
                    }
                    cout << "Please choose two aliens to compare:" << endl;
                    cout << "Alien 1: ";
                    cin >> alienChoice1;
                    cin.ignore();
                    cout << "Alien 2: ";
                    cin >> alienChoice2;
                    cin.ignore();

                    cout << endl << boolalpha 
                        << (vectUniqueAliens.at(alienChoice1) != vectUniqueAliens.at(alienChoice2))
                        << endl;

                    break;
                case 3:
                    for (int i = 0; i < vectUniqueAliens.size(); i++)
                    {
                        cout << "index[" << i << "]:" << " W[";
                        cout << vectUniqueAliens.at(i)->getWeight() << "], H[";
                        cout << vectUniqueAliens.at(i)->getHeight() << "], G[";
                        cout << vectUniqueAliens.at(i)->getGender() << "]." << endl;
                    }
                    break;
                default:
                    cout << "Please enter a choice to continue." << endl;
                    break;
            }
        }
        cout << endl;
    }

    

    vectUniqueAliens.clear();       // clear memory;
    return 0;
}