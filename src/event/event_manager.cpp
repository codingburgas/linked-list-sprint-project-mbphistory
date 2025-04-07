#include "../event/event_manager.h"
#include <iostream>
#include <fstream>
#include <sstream>

EventManager::EventManager() : head(nullptr) {}

EventManager::~EventManager() {
    freeList();
}

void EventManager::init(const Event& newEvent) {
    freeList();
    head = new Event(newEvent);
    head->next = nullptr;
}

void EventManager::addAtBeginning(const Event& newEvent) {
    Event* newNode = new Event(newEvent);
    newNode->next = head;
    head = newNode;
}

void EventManager::addAtEnd(const Event& newEvent) {
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

bool EventManager::compareDates(const std::string& d1, const std::string& d2) const {
    return d1 < d2;
}

void EventManager::addSorted(const Event& newEvent) {
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

bool EventManager::editEvent(const std::string& date, const Event& updatedEvent) {
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

Event* EventManager::searchByDate(const std::string& date) {
    Event* current = head;
    while (current) {
        if (current->date == date)
            return current;
        current = current->next;
    }
    return nullptr;
}

Event* EventManager::searchByTopic(const std::string& topic) {
    Event* current = head;
    while (current) {
        if (current->topic == topic)
            return current;
        current = current->next;
    }
    return nullptr;
}

bool EventManager::deleteEvent(const std::string& date) {
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

void EventManager::freeList() {
    while (head) {
        Event* temp = head;
        head = head->next;
        delete temp;
    }
}

void EventManager::loadFromFile(const std::string& filename) {
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Cannot open file for loading: " << filename << std::endl;
        return;
    }
    freeList();
    head = nullptr;
    std::string line;
    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        Event ev;
        std::getline(iss, ev.date, '|');
        std::getline(iss, ev.topic, '|');
        std::getline(iss, ev.title, '|');
        std::getline(iss, ev.location, '|');
        std::getline(iss, ev.leader, '|');
        std::getline(iss, ev.participants, '|');
        std::getline(iss, ev.result, '|');
        ev.next = nullptr;
        addAtEnd(ev);
    }
    infile.close();
}

void EventManager::saveToFile(const std::string& filename) const {
    std::ofstream outfile(filename);
    if (!outfile) {
        std::cerr << "Cannot open file for saving: " << filename << std::endl;
        return;
    }
    Event* current = head;
    while (current) {
        outfile << current->date << "|"
                << current->topic << "|"
                << current->title << "|"
                << current->location << "|"
                << current->leader << "|"
                << current->participants << "|"
                << current->result << "\n";
        current = current->next;
    }
    outfile.close();
}
