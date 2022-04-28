#include <iostream>
#include <string>
#include <stack>

using namespace std;

void storeReverse(string origString, stack<char>& reverseStack);
bool isPalindrome(string origString);
void printResult(string origString);

int main()
{
    string word;
    cout << "Please enter a word: ";
    cin >> word;

    printResult(word);

    return 0;
}

void storeReverse(string origString, stack<char>& reverseStack)
{
    for (char c : origString)
    {
        reverseStack.push(c);
    }
}

bool isPalindrome(string origString)
{
    stack<char> reverseStack;
    storeReverse(origString, reverseStack);

    bool result = true;

    if (origString.length() == reverseStack.size())
    {
        for (char c : origString)
        {
            if (c != reverseStack.top())
            {
                result = false;
                break;
            }
            reverseStack.pop();
        }
    }
    else
    {
        result = false;
    }

    return result;
}

void printResult(string origString)
{
    if (isPalindrome(origString))
        cout << origString << " is a palindrome." << endl;
    else
        cout << origString << " is not a palindrome." << endl;
}