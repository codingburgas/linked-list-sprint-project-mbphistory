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
    Event* next;
};

#endif //EVENT_H
