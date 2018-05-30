#ifndef MUI_GRAPHICS_BASE_H_
#define MUI_GRAPHICS_BASE_H_

#include "../Config.h"
#include "../common/Point.h"

NAMESPACE_BEGIN

enum class GraphicsType {
    Rectangle,
    Ellipse,
    Line
};

class Graphics {
public:
    Graphics(GraphicsType type) {
        // do nothing
    }

    GraphicsType Type() const { return type_; }

    virtual bool Contains(Point target) const = 0;

private:
    GraphicsType type_;
};

class GraphicsF{
public:
    GraphicsF(GraphicsType type) {
        // do nothing
    }

    GraphicsType Type() const { return type_; }

    virtual bool Contains(PointF target) const = 0;

private:
    GraphicsType type_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_BASE_H_