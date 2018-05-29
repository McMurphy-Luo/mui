#include "../Config.h"
#include "./Rectangle.h"
#include <memory>

#ifdef MUI_WIN32
#include "./direct2d/Rectangle.h"
#endif

using std::shared_ptr;
using std::make_shared;

NAMESPACE_BEGIN

#ifdef MUI_WIN32
shared_ptr<IRectangleRender> GetRectangleRender(ID2D1RenderTarget* render_target) {
    return make_shared<D2DRectangleRender>(render_target);
}
#endif

NAMESPACE_END