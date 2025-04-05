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
}
