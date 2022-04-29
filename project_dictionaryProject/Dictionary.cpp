#include <iostream>
#include <string>
#include "Dictionary.h"
#include <map>

using namespace std;

Dictionary::Dictionary(){}
Dictionary::~Dictionary()
{
    cout << "Dictionary class: Destructor called." << endl;
}

void Dictionary::addDefinition(string word, string definition)
{
    string checkWordinDictionary;

    checkWordinDictionary = getDefinition(word);
    //cout << checkWordinDictionary << endl;
    if (checkWordinDictionary.compare("NOT FOUND") == 0)
    {   
        // then word is not in dictionary, add it!
        cout << "Word is not in dictionary." << endl;
        cout << "Adding word and defintion to the map." << endl;
        dictionary[word] = definition;      // add it to the dictionary map
    }
    else
    {
        // assume word matches, just need to update definition
        cout << "Word is in dictionary." << endl;
        cout << "Updating definition." << endl;
        auto temp = dictionary.find(word);
        temp->second = definition;
    }
}

string Dictionary::getDefinition(string word) const
{
    auto temp = dictionary.find(word);

    if (temp == dictionary.end())
    {
        return "NOT FOUND";
    }
    else
    {
        //cout << "word found!" << endl;
        return temp->second;
    }

}

void Dictionary::printAll() const
{
    for (auto index : dictionary)
    {
        cout << index.first << ": " << index.second << endl;
    }
}