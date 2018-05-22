#ifndef MUI_GRAPHICS_BASE_H_
#define MUI_GRAPHICS_BASE_H_

#include "../Config.h"
#include <functional>
#include <memory>
#include <unordered_map>
#include "../common/Event.h"
#include "../common/Point.h"

NAMESPACE_BEGIN

enum class GraphType {
    Rectangle,
    Ellipse,
    Polygon,
    Line
};

typedef std::function<void(Event* event, Base* target)> EventHandler;
typedef std::shared_ptr<EventHandler> EventListener;
typedef std::unordered_map<EventType, std::vector<EventListener>> ListenerContainer;

class Base {
public:
    explicit Base(GraphType type): type_(type), event_listeners_() {

    }

    GraphType Type() const { return type_; }

    virtual bool Contains(const Point& position) const = 0;

    void AddEventListener(EventType event_type, EventListener listener);

    void RemoveEventListener(EventType event_type, EventListener listener);

    void ClearEventListener(EventType event_type);

    void Emit(EventType event_type, Event* event_arguments);

private:
    GraphType type_;
    ListenerContainer event_listeners_;
};

NAMESPACE_END



#endif // MUI_GRAPHICS_BASE_H_