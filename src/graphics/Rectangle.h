#ifndef MUI_GRAPHICS_RECTANGLE_H_
#define MUI_GRAPHICS_RECTANGLE_H_

#include "../Config.h"
#include <cmath>
#include "../common/Size.h"

NAMESPACE_BEGIN

class Rectangle {

public:
    Rectangle(double_t left, double_t top, double_t right, double_t bottom):
        left_(left),
        top_(top),
        right_(right),
        bottom_(bottom)
    {
        
    }

    Rectangle() : Rectangle(0, 0, 0, 0) {
        // do nothing
    }

    double_t area() { return std::abs((right - left) * (bottom - top)); }

private:
    double_t left_;
    double_t top_;
    double_t right_;
    double_t bottom_;

};

NAMESPACE_END

#endif // MUI_GRAPHICS_RECTANGLE_H_