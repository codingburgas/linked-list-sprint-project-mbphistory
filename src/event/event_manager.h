#ifndef EVENT_MANAGER_H
#define EVENT_MANAGER_H

#include <string>
#include "event.h"

class EventManager {
public:
    EventManager();
    ~EventManager();

    void init(const Event& newEvent);
    void addAtBeginning(const Event& newEvent);
    void addAtEnd(const Event& newEvent);
    void addSorted(const Event& newEvent);
    bool editEvent(const std::string& date, const Event& updatedEvent);
    Event* searchByDate(const std::string& date);
    Event* searchByTopic(const std::string& topic);
    Event* getHead() const { return head; }
    bool deleteEvent(const std::string& date);
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename) const;
    void freeList();

private:
    Event* head;
    bool compareDates(const std::string& d1, const std::string& d2) const;
};

#endif // EVENT_MANAGER_H
