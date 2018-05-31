#ifndef MUI_RENDER_BUTTON_
#define MUI_RENDER_BUTTON_

#include "../Config.h"
#include <memory>
#include "../control/Button.h"

#ifdef MUI_WIN32

#include <Windows.h>
#include <d2d1.h>
#include <atlbase.h>

#endif // MUI_WIN32

NAMESPACE_BEGIN

class IButtonRender;

#ifdef MUI_WIN32

std::shared_ptr<IButtonRender> GetButtonRender(CComPtr<ID2D1RenderTarget> render_target);

#endif // MUI_WIN32

class IButtonRender {
public:
    void Render(const Button& target);

protected:
    IButtonRender();
};

NAMESPACE_END

#endif // MUI_RENDER_BUTTON_