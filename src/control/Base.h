#ifndef MUI_CONTROL_BASE_H_
#define MUI_CONTROL_BASE_H_

#include "../Config.h"
#include "./EventEmiter.h"

NAMESPACE_BEGIN

enum class ControlType : int {
    Button,
    Checkbox,
    Input,
    ScrollBar,
    Select
};

class Base: public EventEmiter {
public:
    Base(ControlType type) : type_(type) {

    }

private:
    ControlType type_;
};

NAMESPACE_END

#endif // MUI_CONTROL_BASE_H