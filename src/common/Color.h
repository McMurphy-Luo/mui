#ifndef MUI_COMMON_COLOR_H_
#define MUI_COMMON_COLOR_H_

#include "../Config.h"
#include <cmath>
#include "./Utf8String.h"

NAMESPACE_BEGIN

bool ParseColorFromString(const Utf8String& target, Color& output);

class Color {
public:
    Color(std::int8_t red, std::int8_t green, std::int_fast8_t blue, std::int8_t alpha);

};

class ColorF {
public:
    Color(double_t red, double_t green, double_t blue, double_t alpha)
        red_(red),
        green_(green),
        blue_(blue),
        alpha_(alpha){
        // do nothing
    }

    Color(double_t red, double_t green, double_t blue):
        Color(red, green, blue, 1){
        // do nothing
    }

    void SetRed();

    void SetGreen();


private:
    double_t red_;
    double_t green_;
    double_t blue_;
    double_t alpha_;
};

NAMESPACE_END

#endif // MUI_COMMON_COLOR_H_