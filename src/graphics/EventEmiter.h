#ifndef MUI_GRAPHICS_EVENT_EMITER_H_
#define MUI_GRAPHICS_EVENT_EMITER_H_

#include "../Config.h"
#include "../common/Event.h"
#include <memory>
#include <functional>
#include <unordered_map>

NAMESPACE_BEGIN

class EventEmiter;

typedef std::function<void(Event*, EventEmiter*)> EventHandler;
typedef std::shared_ptr<EventHandler> EventListener;
typedef std::unordered_map<EventType, std::vector<EventListener>> ListenerContainer;

class EventEmiter {
public:
    EventEmiter(): event_listeners_() {

    }

    void AddEventListener(EventType event_type, EventListener listener);

    void RemoveEventListener(EventType event_type, EventListener listener);

    void ClearEventListener(EventType event_type);

    void Emit(EventType event_type, Event* event_arguments);

private:
    ListenerContainer event_listeners_;
};

NAMESPACE_END

#endif // MUI_GRAPHICS_EVENT_EMITER_H_