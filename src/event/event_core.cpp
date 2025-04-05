#include "event.h"
#include <iostream>

namespace EventList {

    void init(Event*& head, const Event& newEvent) {
        head = new Event(newEvent);
        head->next = nullptr;
    }

    void addAtBeginning(Event*& head, const Event& newEvent) {
        Event* newNode = new Event(newEvent);
        newNode->next = head;
        head = newNode;
    }

    void addAtEnd(Event*& head, const Event& newEvent) {
        Event* newNode = new Event(newEvent);
        newNode->next = nullptr;
        if (!head) {
            head = newNode;
            return;
        }
        Event* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    static bool compareDates(const std::string& d1, const std::string& d2) {
        return d1 < d2;
    }

    void addSorted(Event*& head, const Event& newEvent) {
        Event* newNode = new Event(newEvent);

        if (!head || compareDates(newEvent.date, head->date)) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Event* current = head;
        while (current->next && compareDates(current->next->date, newEvent.date)) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    bool editEvent(Event* head, const std::string& date, const Event& updatedEvent) {
        Event* current = head;
        while (current) {
            if (current->date == date) {
                current->topic        = updatedEvent.topic;
                current->title        = updatedEvent.title;
                current->location     = updatedEvent.location;
                current->leader       = updatedEvent.leader;
                current->participants = updatedEvent.participants;
                current->result       = updatedEvent.result;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    Event* searchByDate(Event* head, const std::string& date) {
        Event* current = head;
        while (current) {
            if (current->date == date)
                return current;
            current = current->next;
        }
        return nullptr;
    }

    Event* searchByTopic(Event* head, const std::string& topic) {
        Event* current = head;
        while (current) {
            if (current->topic == topic)
                return current;
            current = current->next;
        }
        return nullptr;
    }

    bool deleteEvent(Event*& head, const std::string& date) {
        if (!head) return false;
        if (head->date == date) {
            Event* temp = head;
            head = head->next;
            delete temp;
            return true;
        }
        Event* current = head;
        while (current->next && current->next->date != date) {
            current = current->next;
        }
        if (current->next) {
            Event* temp = current->next;
            current->next = temp->next;
            delete temp;
            return true;
        }
        return false;
    }

    void freeList(Event*& head) {
        while (head) {
            Event* temp = head;
            head = head->next;
            delete temp;
        }
    }
}