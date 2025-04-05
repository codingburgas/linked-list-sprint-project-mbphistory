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

namespace EventList {
    void init(Event*& head, const Event& newEvent);
    void addAtBeginning(Event*& head, const Event& newEvent);
    void addAtEnd(Event*& head, const Event& newEvent);
    void addSorted(Event*& head, const Event& newEvent);
    bool editEvent(Event* head, const std::string& date, const Event& updatedEvent);
    Event* searchByDate(Event* head, const std::string& date);
    Event* searchByTopic(Event* head, const std::string& topic);
    bool deleteEvent(Event*& head, const std::string& date);
    void freeList(Event*& head);
    // void loadFromFile();
    // void saveToFile();
}
#endif //EVENT_H
