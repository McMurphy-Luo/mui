#ifndef MUI_RENDER_RECTANGLE_H_
#define MUI_RENDER_RECTANGLE_H_

#include "../config.h"
#include "../graphics/Rectangle.h"

#ifdef MUI_WIN32
#include <Windows.h>
#include <d2d1_1.h>
#endif

NAMESPACE_BEGIN

#ifdef MUI_WIN32
std::shared_ptr<IRectangleRender> GetRectangleRender(ID2D1RenderTarget* render_target);
#endif

class IRectangleRender {
public:
    virtual void Render(Rectangle) = 0;
    virtual void Render(RectangleF) = 0;

protected:
    IRectangleRender() {
        // do nothing
    };
};

NAMESPACE_END

#endif // MUI_RENDER_RECTANGLE_H_