#ifndef MUI_CONTROL_BUTTON_
#define MUI_CONTROL_BUTTON_

#include "../Config.h"
#include "./Base.h"
#include "../common/Color.h"
#include "../common/Utf8String.h"

NAMESPACE_BEGIN

class Button : public Base {
public:
    Button(double_t width, double_t height) :
        text_(),
        width_(width),
        height_(height),
        border_color_(ColorF::transparent()),
        background_color_(ColorF::transparent()){
    }

    void SetText(Utf8String value) { text_ = value; }

    Utf8String Text() const { return text_; }

    double_t Width() const { return width_; }

    double_t Height() const { return height_; }

    void SetWidth(double_t value) { width_ = value; }

    void SetHeight(double_t value) { height_ = value; }

private:
    Utf8String text_;
    double_t width_;
    double_t height_;
    ColorF border_color_;
    ColorF background_color_;
};

NAMESPACE_END


#endif