#include <iostream>
#include <stdexcept>
#include "Space.h"

using namespace std;

void warpTest(int temperature);

int main()
{
    try
    {
        warpTest(0);
        warpTest(40);
        warpTest(70);
        warpTest(79);
        warpTest(80);
        warpTest(90);
    }
    catch(const WarpDriveOverheating & err)
    {
        cout << err.what() << '\n';
    }
    
    return 0;
}

void warpTest(int temperature)
{
    if (temperature <= 80)
    {
        cout << "Warp drive is stable at " << temperature << endl;
    }
    else
    {
        cout << "Warp unstable at " << temperature << endl;
        throw WarpDriveOverheating();   
    }
}