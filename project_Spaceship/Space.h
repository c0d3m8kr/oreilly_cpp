#ifndef SPACE_H
#define SPACE_H

#include <stdexcept>
#include <string>

using namespace std;

class WarpDriveOverheating : public overflow_error
{
    public:
        WarpDriveOverheating() : overflow_error("Warp drive has exceeded safe temperature tolerance."){}

    private:
};

#endif