#ifndef MUI_CONTROL_BUTTON_
#define MUI_CONTROL_BUTTON_

#include "../Config.h"
#include "./Base.h"
#include "../common/Utf8String.h"

NAMESPACE_BEGIN

class Button : public Base {
public:
    Button();

private:
    Utf8String text_;
};

NAMESPACE_END


#endif