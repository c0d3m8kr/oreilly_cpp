#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <iostream>
#include <map>

using namespace std;

class Dictionary
{
    public:
        Dictionary();
        ~Dictionary();
        void addDefinition(string word, string definition);
        string getDefinition(string word) const;
        void printAll() const;

    private:
        map<string, string> dictionary;
};

#endif