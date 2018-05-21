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

    double_t x() { return x_; }

    double_t y() { return y_; }

    void setX(double_t value) { x_ = value; }

    void setY(double_t value) { y_ = value; }

    void offset(double_t x, double_t y) { x_ += x; y_ += y; }

    double_t Distance(const Point& another) {
        return std::sqrt(std::pow(another.x() - x(), 2) + std::pow(another.y() - y(), 2))
    }

    Point Middle(const Point& another) {
        return Point((x() + another.x()) / 2, (y() + another.y()) / 2);
    }

private:
    double_t x_;
    double_t y_;
};


NAMESPACE_END

#endif