#ifndef EVENT_H
#define EVENT_H
#include <string>

struct Event {
    std::string date;
    std::string topic;
    std::string title;
    std::string location;
    std::string leader;
    std::string participants;
    std::string result;
    Event* next; // pointer to next node in the linked list
};

namespace EventList {
    void init(Event*& head, const Event& newEvent);
    void addAtBeginning(Event*& head, const Event& newEvent);
    void addAtEnd(Event*& head, const Event& newEvent);
}
#endif //EVENT_H
