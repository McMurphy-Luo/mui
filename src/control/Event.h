#ifndef MUI_COMMON_EVENT_H_
#define MUI_COMMON_EVENT_H_

#include "../Config.h"
#include "./Global.h"

NAMESPACE_BEGIN

enum class EventType : int {
    None = 0,
    Any,
    MousePress,
    MouseRelease,
    MouseMove,
    KeyDown,
    KeyUp
};

enum class MouseButton : int {
    None = 0,
    Any = 1,
    LeftButton,
    MidButton,
    RightButton
};

class Event {
public:
    Event(EventType type, int key_code) : type_(type), key_code_(key_code) {
        // do nothing
    }

    EventType Type() const { return type_; }

    int KeyCode() const { return key_code_; }

private:
    EventType type_;
    int key_code_;
};

class MouseEvent: public Event {
public:
    MouseEvent(EventType type, int key_code, MouseButton button) : Event(type, key_code), button_(button) {
        // do nothing
    }

    MouseButton Button() { return button_; }

private:
    MouseButton button_;
};

NAMESPACE_END

#endif // MUI_COMMON_EVENT_H_