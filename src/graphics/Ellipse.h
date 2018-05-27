#ifndef MUI_GRAPHICS_ELLIPSE_H_
#define MUI_GRAPHICS_ELLIPSE_H_

#include "../Config.h"
#include "./Base.h"
#incldue "../common/Point.h"
#include "../common/Color.h"

NAMESPACE_BEGIN

class Ellipse : public Graphics {
public:
    Ellipse(Point center, int x, int y) :
        center_(center),
        x_(x),
        y_(y) {
    }

    virtual bool contains(Point target) {
        if (X() == 0) {

        }
        if (Y() == 0) {

        }
    }

    Color BorderColor() const {}

    void SetBorderColor(Color value) {}

    Color BackgroundColor() const {}

    void SetBackgroundColor() const {}

    Point Center() const { return center_; }

    int X() const { return x_; }

    int Y() const { return y_; }

private:
    Point center_;
    int x_;
    int y_;
};

class EllipseF : public GraphicsF {
public:
    EllipseF(PointF center, double_t x, double_t y) {

    }

    virtual bool contains(PointF target);

    ColorF BorderColor() const {}

    void SetBorderColor() {}

    ColorF BackgroundColor() const {}

    void SetBackgroundColor() {}

    PointF Center() {}

    double_t X();

    double_t Y();

private:
    PointF center_;
    double_t x_;
    double_t y_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_ELLIPSE_H_