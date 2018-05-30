#include "./EventEmiter.h"
#include <algorithm>

using std::vector;
using std::find;
using std::remove;
using std::shared_ptr;
using std::pair;

NAMESPACE_BEGIN

void EventEmiter::AddEventListener(EventType event_type, EventListener listener) {
    ListenerContainer::iterator find_result = event_listeners_.find(event_type);
    if (find_result == event_listeners_.end()) {
        pair<ListenerContainer::iterator, bool> insert_result = event_listeners_.emplace(event_type, vector<EventListener>());
        find_result = insert_result.first;
    }
    vector<EventListener>::iterator listener_may_be_already_exists = find((*find_result).second.begin(), (*find_result).second.end(), listener);
    if (listener_may_be_already_exists != (*find_result).second.end()) {
        return;
    }
    (*find_result).second.push_back(listener);
}

void EventEmiter::RemoveEventListener(EventType event_type, EventListener listener) {
    ListenerContainer::iterator find_result = event_listeners_.find(event_type);
    if (find_result == event_listeners_.end()) {
        return;
    }
    (*find_result).second.erase(remove((*find_result).second.begin(), (*find_result).second.end(), listener), (*find_result).second.end());
}

void EventEmiter::ClearEventListener(EventType event_type) {
    event_listeners_.erase(event_type);
}

void EventEmiter::Emit(EventType event_type, Event* event_arguments) {
    ListenerContainer::iterator listeners_iterator = event_listeners_.find(event_type);
    if (listeners_iterator == event_listeners_.end()) {
        return;
    }
    for (const EventListener& item : (*listeners_iterator).second) {
        item->operator()(event_arguments, this);
    }
}

NAMESPACE_END