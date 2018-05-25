#ifndef MUI_COMMON_POINT_H_
#define MUI_COMMON_POINT_H_

#include "../Config.h"
#include "./Global.h"
#include <cmath>

NAMESPACE_BEGIN

class PointF {
public:
    PointF(double_t x, double_t y) :
        x_(x),
        y_(y) {
        // do nothing
    }

    PointF() :
        x_(0),
        y_(0) {
        // do nothing
    }

    double_t X() const { return x_; }

    double_t Y() const { return y_; }

    void SetX(double_t value) { x_ = value; }

    void SetY(double_t value) { y_ = value; }

    void Offset(double_t x, double_t y) { x_ += x; y_ += y; }

    double_t Distance(const PointF& another) {
        return std::sqrt(std::pow(another.X() - X(), 2) + std::pow(another.Y() - Y(), 2));
    }

    PointF Middle(const PointF& another) {
        return PointF((X() + another.X()) / 2, (Y() + another.Y()) / 2);
    }

private:
    double_t x_;
    double_t y_;
};

class Point {
public:
    Point(int x, int y) :
        x_(x),
        y_(y) {
        // do nothing
    }

    int X() const { return x_; }

    int Y() const { return y_; }

    void SetX(int value) { x_ = value; }

    void SetY(int value) { y_ = value; }

    void Offset(int x, int y) { x_ += x; y_ += y; }

    int Distance(const Point& another) {
        return static_cast<int>(std::round(
            std::sqrt(
                std::pow(another.X() - X(), 2) + std::pow(another.Y() - Y(), 2)
            )
        ));
    }
       
private:
    int x_;
    int y_;
};


NAMESPACE_END

#endif