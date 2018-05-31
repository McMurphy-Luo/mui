#ifndef MUI_CONTROL_BUTTON_
#define MUI_CONTROL_BUTTON_

#include "../Config.h"
#include "./Base.h"
#include "../common/Color.h"
#include "../common/Utf8String.h"

NAMESPACE_BEGIN

class Button : public Base {
public:
    Button(
        double_t left,
        double_t top,
        double_t right,
        double_t bottom,
        ColorF border_color,
        ColorF background_color):
        text_(),
        left_(left),
        top_(top),
        right_(right),
        bottom_(bottom)
        border_color_(ColorF::Transparent()),
        background_color_(ColorF::Transparent()) {
    }

    void SetMinHeight() {}

    void SetMaxHeight() {}

    void SetMinWidth() {}

    void SetMaxWidth() {}

    void SetText(Utf8String value) { text_ = value; }

    Utf8String Text() const { return text_; }

    double_t Left();

    double_t SetLeft();

    double_t Top();

    double_t SetTop();

    double_t Right();

    double_t SetRight();

    double_t Bottom();

    double_t SetBottom();

    double_t Width() const { return width_; }

    double_t Height() const { return height_; }

    ColorF BorderColor();

    void SetBorderColor();

    ColorF BackgroundColor();

    void SetBackgroundColor();

    double_t BorderWidth();

    void SetBorderWidth();

private:
    double_t left_;
    double_t top_;
    double_t right_;
    double_t bottom_;
    Utf8String text_;
    ColorF border_color_;
    ColorF background_color_;
};

NAMESPACE_END


#endif