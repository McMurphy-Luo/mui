#include "./Color.h"

NAMESPACE_BEGIN

bool ParseColorFromString(const Utf8String& target, Color& output) {
    if (target.size() != 4 && target.size() != 5 && target.size() != 7 && target.size() != 9) {
        return false;
    }
    if (target.at(0) != '#') {
        return false;
    }
    double red = 0;
    double green = 0;
    double blue = 0;
    double alpha = 0;
    return true;
}


NAMESPACE_END