#include "./Base.h"
#include <algorithm>

using std::vector;
using std::find;
using std::shared_ptr;
using std::pair;

NAMESPACE_BEGIN

void Base::AddEventListener(EventType event_type, shared_ptr<EventListener> listener) {
    ListenerContainer::iterator find_result = event_listeners_.find(event_type);
    if (find_result == event_listeners_.end()) {
        pair<ListenerContainer::iterator, bool> insert_result = event_listeners_.emplace(event_type, vector<shared_ptr<EventListener>>());
        find_result = insert_result.first;
    }
    vector<shared_ptr<EventListener>>::iterator listener_may_be_already_exists = find((*find_result).second.begin(), (*find_result).second.end(), listener);
    if (listener_may_be_already_exists != (*find_result).second.end()) {
        return;
    }
    (*find_result).second.push_back(listener);
}

void Base::RemoveEventListener(EventType event_type, std::shared_ptr<EventListener> listener) {

}

void Base::ClearEventListener(EventType event_type) {

}


NAMESPACE_END