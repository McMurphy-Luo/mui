#ifndef MUI_GRAPHICS_BASE_H_
#define MUI_GRAPHICS_BASE_H_

#include "../Config.h"
#include "../common/Point.h"
#include "./EventEmiter.h"

NAMESPACE_BEGIN

enum class GraphicsType {
    Rectangle,
    Ellipse,
    Line
};

class Graphics : public EventEmiter {
public:
    Graphics(GraphicsType type) : EventEmiter() {
        // do nothing
    }

    GraphicsType Type() const { return type_; }

    virtual bool Contains(Point target) const = 0;

private:
    GraphicsType type_;
};

class GraphicsF : public EventEmiter {
public:
    GraphicsF(GraphicsType type) : EventEmiter() {
        // do nothing
    }

    GraphicsType Type() const { return type_; }

    virtual bool Contains(PointF target) const = 0;

private:
    GraphicsType type_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_BASE_H_