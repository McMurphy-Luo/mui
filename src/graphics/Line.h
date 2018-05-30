#ifndef MUI_GRAPHICS_LINE_H_
#define MUI_GRAPHICS_LINE_H_

#include "../Config.h"
#include "./Base.h"
#include "../common/Point.h"

NAMESPACE_BEGIN

class Line : public Graphics {
public:
    Line(Point p1, Point p2):
        Graphics(GraphicsType::Line),
        p1_(p1),
        p2_(p2){
    }

    Line(): Line(Point(0, 0), Point(0, 0)) {

    }

    Point P1() const { return p1_; }

    Point P2() const { return p2_; }

    void SetP1(Point value) { p1_ = value; }

    void SetP2(Point value) { p2_ = value; }

    virtual bool Contains(Point target) const override;

private:
    Point p1_;
    Point p2_;
};

class LineF : public GraphicsF {
public:
    LineF(PointF p1, PointF p2) :
        GraphicsF(GraphicsType::Line),
        p1_(p1),
        p2_(p2) {

    }

    LineF() : LineF(PointF(0, 0), PointF(0, 0)) {

    }

    PointF P1() const { return p1_; }

    PointF P2() const { return p2_; }

    void SetP1(PointF value) { p1_ = value; }

    void SetP2(PointF value) { p2_ = value; }

    virtual bool Contains(PointF target) const override;

private:
    PointF p1_;
    PointF p2_;
};

NAMESPACE_END


#endif // MUI_GRAPHICS_LINE_H_