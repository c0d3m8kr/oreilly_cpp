#include <iostream>
#include <map>
#include <string>
#include "Dictionary.h"

using namespace std;

int main()
{
    int repeat = 1;
    int answer;
    string word;
    string definition;
    Dictionary myDict;

    cout << "Welcome to Woof's Dictionary!" << endl;
    while(repeat)
    {
        cout << endl;
        cout << "Please choose: " << endl;
        cout << '\t' << "[1] Add" << endl;
        cout << '\t' << "[2] Get" << endl;
        cout << '\t' << "[3] Print" << endl;
        cout << '\t' << "[4] Exit" << endl;
        cin >> answer;
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        switch(answer)
        {
            case 1:
                cout << "Please enter word: ";
                getline(cin, word);
                cout << "Definition: ";
                getline(cin, definition);
                myDict.addDefinition(word, definition);
                break;
            case 2:
                cout << "Please enter word: ";
                cin >> word;
                cout << "Definition: " << myDict.getDefinition(word) << endl;
                break;
            case 3:
                myDict.printAll();
                break;
            case 4:
                cout << "Exiting..." << endl;
                repeat = 0;
                break;
            default:
                cout << "You need to pick something. Try again!" << endl;
                break;
        }
    }

    return 0;
}