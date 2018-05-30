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
        // do nothing
    }

    Color BorderColor() const { return border_color_; }

    void SetBorderColor(Color value) { border_color_ = value; }

    Color BackgroundColor() const { return background_color_; }

    void SetBackgroundColor(Color value) { background_color_ = value; }

    Point Center() const { return center_; }

    void SetCenter(Point position) { center_ = position; }

    int X() const { return x_; }

    void SetX(int value) { x_ = value; }

    int Y() const { return y_; }

    void SetY(int value) { y_ = value; }

    virtual bool Contains(Point target) const override;

private:
    Point center_;
    int x_;
    int y_;
    Color border_color_;
    Color background_color_;
};

class EllipseF : public GraphicsF {
public:
    EllipseF(PointF center, double_t x, double_t y, ColorF border_color, ColorF background_color):
        GraphicsF(GraphicsType::Ellipse),
        center_(center),
        x_(x),
        y_(y),
        border_color_(border_color),
        background_color_(background_color) {
        // do nothing
    }

    ColorF BorderColor() const { return border_color_; }

    void SetBorderColor(ColorF value) { border_color_ = value; }

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
    ColorF border_color_;
    ColorF background_color_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_ELLIPSE_H_