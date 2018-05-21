#ifndef MUI_COMMON_SIZE_H_
#define MUI_COMMON_SIZE_H_

#include "../Config.h"
#include <cmath>

NAMESPACE_BEGIN

class Size {
public:
    Size(double_t width, double_t height);
    double_t width() { return width_; }
    double_t height() { return height_; }

private:
    double_t width_;
    double_t height_;
};

NAMESPACE_END

#endif // MUI_COMMON_SIZE_H_