#ifndef MUI_COMMON_SIZE_H_
#define MUI_COMMON_SIZE_H_

#include "../Config.h"
#include <cmath>
#include <cstdint>

NAMESPACE_BEGIN

class SizeF {
public:
    SizeF(double_t width, double_t height):
        width_(width),
        height_(height){
    }

    double_t Width() const { return width_; }

    double_t Height() const { return height_; }

private:
    double_t width_;
    double_t height_;
};

class Size {
public:
    Size(std::int_fast32_t width, std::int_fast32_t height) :

    {

    }


private:

};

NAMESPACE_END

#endif // MUI_COMMON_SIZE_H_