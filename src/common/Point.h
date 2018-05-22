#ifndef MUI_COMMON_POINT_H_
#define MUI_COMMON_POINT_H_

#include "../Config.h"
#include "./Global.h"
#include <cmath>

NAMESPACE_BEGIN

class Point {
public:
    Point(double_t x, double_t y) :
        x_(x),
        y_(y) {
        // do nothing
    }

    Point() :
        x_(0),
        y_(0) {
        // do nothing
    }

    double_t X() const { return x_; }

    double_t Y() const { return y_; }

    void SetX(double_t value) { x_ = value; }

    void SetY(double_t value) { y_ = value; }

    void Offset(double_t x, double_t y) { x_ += x; y_ += y; }

    double_t Distance(const Point& another) {
        return std::sqrt(std::pow(another.X() - X(), 2) + std::pow(another.Y() - Y(), 2));
    }

    Point Middle(const Point& another) {
        return Point((X() + another.X()) / 2, (Y() + another.Y()) / 2);
    }

private:
    double_t x_;
    double_t y_;
};


NAMESPACE_END

#endif