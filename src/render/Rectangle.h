#ifndef MUI_RENDER_DIRECT2D_RECTANGLE_H_
#define MUI_RENDER_DIRECT2D_RECTANGLE_H_

#include "../config.h"
#include "../graphics/Rectangle.h"
#ifdef MUI_WIN32
#include <d2d1_1.h>
#endif

NAMESPACE_BEGIN

#ifdef MUI_WIN32
IRectangleRender* GetRectangleRender(ID2D1RenderTarget* render_target);
#endif

class IRectangleRender {
private:
    explicit IRectangleRender(const Rectangle& target);

public:
    virtual Render() = 0;
};

NAMESPACE_END



#endlf // MUI_RENDER_DIRECT2D_RECTANGLE_H_