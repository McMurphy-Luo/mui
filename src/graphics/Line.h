#ifndef MUI_GRAPHICS_LINE_H_
#define MUI_GRAPHICS_LINE_H_

#include "./Base.h"
#include "../common/Point.h"

NAMESPACE_BEGIN

class Line : public Base {
public:
    Line(Point p1, Point p2):
        Base(GraphType::Line),
        p1_(p1),
        p2_(p2){
    }

    Line(): Line(Point(0, 0), Point(0, 0)) {

    }

    virtual bool Contains()
    

private:
    Point p1_;
    Point p2_;
};

NAMESPACE_END


#endif // MUI_GRAPHICS_LINE_H_