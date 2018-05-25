#ifndef MUI_COMMON_COLOR_H_
#define MUI_COMMON_COLOR_H_

#include "../Config.h"
#include <cmath>
#include "./Utf8String.h"

NAMESPACE_BEGIN

class Color;

bool ParseColorFromString(const Utf8String& target, Color& output);

class Color {
public:
    Color(std::int8_t red, std::int8_t green, std::int8_t blue, std::int8_t alpha):
        red_(red),
        green_(green),
        blue_(blue),
        alpha_(alpha){
        // do nothing
    }

    Color(std::int8_t red, std::int8_t green, std::int8_t blue):
        Color(red, green, blue, 1)
        {
        // do nothing
    }

    Color(): Color(0, 0, 0) {

    }

private:
    std::int8_t red_;
    std::int8_t green_;
    std::int8_t blue_;
    std::int8_t alpha_;
};

class ColorF {
public:
    ColorF(double_t red, double_t green, double_t blue, double_t alpha):
        red_(red),
        green_(green),
        blue_(blue),
        alpha_(alpha){
        // do nothing
    }

    ColorF(double_t red, double_t green, double_t blue):
        ColorF(red, green, blue, 1){
        // do nothing
    }

    ColorF(): ColorF(0, 0, 0, 1) {

    }

    double_t Red() { return red_; }

    double_t Green() { return green_; }

    double_t Blue() { return blue_; }

    double_t Alpha() { return alpha_; }

    void SetRed(double_t value) { red_ = value; }

    void SetGreen(double_t value) { green_ = value; }

    void SetBlue(double_t value) { blue_ = value; }

    void SetAlpha(double_t value) { alpha_ = value; }

private:
    double_t red_;
    double_t green_;
    double_t blue_;
    double_t alpha_;
};

NAMESPACE_END

#endif // MUI_COMMON_COLOR_H_