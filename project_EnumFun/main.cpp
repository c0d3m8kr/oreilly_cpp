#include <iostream>
#include <string>

using namespace std;

int main()
{
    enum Direction {UP, DOWN, LEFT, RIGHT, STANDING};

    Direction myDirection;

    myDirection = STANDING;

    switch (myDirection)
    {
    case UP:
        cout << "UP" << endl;
        break;
    case DOWN:
        cout << "DOWN" << endl;
        break;
    case LEFT:
        cout << "LEFT" << endl;
        break;
    case RIGHT:
        cout << "RIGHT" << endl;
        break;
    case STANDING:
        cout << "I'm STANDING!" << endl;
        break;
    default:
        cout << "It's EMPTY!" << endl;
        break;
    }

    return 0;
}