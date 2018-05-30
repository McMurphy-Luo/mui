#ifndef MUI_GRAPHICS_RECTANGLE_H_
#define MUI_GRAPHICS_RECTANGLE_H_

#include "../Config.h"
#include <cmath>
#include "../common/Color.h"
#include "../common/Size.h"
#include "./Base.h"

NAMESPACE_BEGIN

class Rectangle : public Graphics {
public:
    Rectangle(int left, int top, int right, int bottom) {

    }
};

class RectangleF: public GraphicsF {
public:
    RectangleF(double_t left, double_t top, double_t right, double_t bottom, ColorF border_color, ColorF bg_color) :
        left_(left),
        top_(top),
        right_(right),
        bottom_(bottom),
        border_color_()
    {

    }

    RectangleF() : RectangleF(0, 0, 0, 0) {
        // do nothing
    }

    ColorF BorderColor() { return border_color_; }

    void SetBorderColor(ColorF value) { border_color_ = value; }

    ColorF BackgroundColor() { return background_color_; }

    void SetBackgroundColor(ColorF value) { background_color_ = value; }

    double_t Area() { return std::abs((right - left) * (bottom - top)); }

private:
    double_t left_;
    double_t top_;
    double_t right_;
    double_t bottom_;
    ColorF border_color_;
    ColorF background_color_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_RECTANGLE_H_