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
        height_(height) {
        // do nothing
    }

    double_t Width() const { return width_; }

    double_t Height() const { return height_; }

private:
    double_t width_;
    double_t height_;
};

class Size {
public:
    Size(int width, int height) :
        width_(width),
        height_(height) {
        // do nothing
    }

    int width() const { return width_; }

    int height() const { return height_; }

private:
    int width_;
    int height_;
};

NAMESPACE_END

#endif // MUI_COMMON_SIZE_H_