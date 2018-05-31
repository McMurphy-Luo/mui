#include "./Button.h"

#ifdef MUI_WIN32

std::shared_ptr<IButtonRender> GetButtonRender(CComPtr<ID2D1RenderTarget> render_target);

#endif