#ifndef MUI_GRAPHICS_ELLIPSE_H_
#define MUI_GRAPHICS_ELLIPSE_H_

#include "./Base.h"
#incldue "../common/Point.h"

NAMESPACE_BEGIN

class EllipseF : public GraphF {
    virtual bool contains(PointF target);
};

class Ellipse: public Graph {
public:
    Ellipse(Point center, int x, int y):
        center_(center),
        x_(x),
        y_(y){
    }

    virtual bool contains(Point target) {
        if (X() == 0) {

        }
        if (Y() == 0) {

        }
        
    }


    Point Center() const { return center_; }

    int X() const { return x_; }

    int Y() const { return y_;  }

private:
    Point center_;
    int x_;
    int y_;
};


NAMESPACE_END


#endif // MUI_GRAPHICS_ELLIPSE_H_