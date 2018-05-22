#ifndef MUI_GRAPHICS_ELLIPSE_H_
#define MUI_GRAPHICS_ELLIPSE_H_

#include "./Base.h"
#incldue "../common/Point.h"

NAMESPACE_BEGIN

class Ellipse: public Base {
public:
    Ellipse(Point center, double_t x, double_t y):
        center_(center),
        x_(x),
        y_(y){

    }

    Point Center() const { return center_; }

    double_t X() const { return x_; }

    double_t Y() const { return y_;  }

private:
    Point center_;
    double_t x_;
    double_t y_;
};


NAMESPACE_END


#endif // MUI_GRAPHICS_ELLIPSE_H_