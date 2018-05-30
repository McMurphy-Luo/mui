#ifndef MUI_GRAPHICS_ELLIPSE_H_
#define MUI_GRAPHICS_ELLIPSE_H_

#include "../Config.h"
#include "./Base.h"
#include "../common/Point.h"
#include "../common/Color.h"

NAMESPACE_BEGIN

class Ellipse : public Graphics {
public:
    Ellipse(Point center, int x, int y, Color border_color, Color background_color) :
        Graphics(GraphicsType::Ellipse),
        center_(center),
        x_(x),
        y_(y) {
    }

    Color BorderColor() const {}

    void SetBorderColor(Color value) {}

    Color BackgroundColor() const {}

    void SetBackgroundColor() const {}

    Point Center() const { return center_; }

    int X() const { return x_; }

    int Y() const { return y_; }

    virtual bool Contains(Point target) const override;

private:
    Point center_;
    int x_;
    int y_;

};

class EllipseF : public GraphicsF {
public:
    EllipseF(PointF center, double_t x, double_t y):
        GraphicsF(GraphicsType::Ellipse),
        center_(center),
        x_(x),
        y_(y){

    }

    ColorF BorderColor() const {}

    void SetBorderColor() {}

    ColorF BackgroundColor() const {}

    void SetBackgroundColor() {}

    PointF Center() {}

    double_t X();

    double_t Y();

    virtual bool Contains(PointF target) const override;

private:
    PointF center_;
    double_t x_;
    double_t y_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_ELLIPSE_H_