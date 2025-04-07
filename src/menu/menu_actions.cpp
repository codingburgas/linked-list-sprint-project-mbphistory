#include "../event/event.h"
#include <ncurses.h>
#include <string>
#include <iostream>


Event inputEvent() {
    Event ev;
    char buffer[100];

    echo();
    mvprintw(2, 2, "Enter date (MM/YYYY or YYYY): ");
    getstr(buffer);
    ev.date = std::string(buffer);

    mvprintw(3, 2, "Enter topic: ");
    getstr(buffer);
    ev.topic = std::string(buffer);

    mvprintw(4, 2, "Enter title: ");
    getstr(buffer);
    ev.title = std::string(buffer);

    mvprintw(5, 2, "Enter location: ");
    getstr(buffer);
    ev.location = std::string(buffer);

    mvprintw(6, 2, "Enter leader: ");
    getstr(buffer);
    ev.leader = std::string(buffer);

    mvprintw(7, 2, "Enter participants: ");
    getstr(buffer);
    ev.participants = std::string(buffer);

    mvprintw(8, 2, "Enter result: ");
    getstr(buffer);
    ev.result = std::string(buffer);
    noecho();

    ev.next = nullptr;
    return ev;
}
void displayEvents(Event* head) {
    clear();
    int row = 2;
    mvprintw(1, 2, "List of Events (brief):");
    Event* current = head;
    while (current) {
        printw("%s | %s | %s\n", current->date.c_str(), current->topic.c_str(), current->title.c_str());
        row++;
        current = current->next;
    }
    mvprintw(row+1, 2, "Press any key to return to the menu...");
    getch();
}
void reportAllEvents(Event* head) {
    clear();
    int row = 2;
    mvprintw(1, 2, "=== Detailed Report of All Events ===");
    Event* current = head;
    while (current) {
        mvprintw(row++, 2, "Date: %s", current->date.c_str());
        mvprintw(row++, 2, "Topic: %s", current->topic.c_str());
        mvprintw(row++, 2, "Title: %s", current->title.c_str());
        mvprintw(row++, 2, "Location: %s", current->location.c_str());
        mvprintw(row++, 2, "Leader: %s", current->leader.c_str());
        mvprintw(row++, 2, "Participants: %s", current->participants.c_str());
        mvprintw(row++, 2, "Result: %s", current->result.c_str());
        mvprintw(row++, 2, "-----------------------------------------");
        row++;
        current = current->next;
    }
    mvprintw(row + 1, 2, "Press any key to return to the menu...");
    getch();
}