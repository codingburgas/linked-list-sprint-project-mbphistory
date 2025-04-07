#include "menu.h"
#include "../event/event_manager.h"
#include <ncurses.h>
#include <string>

extern Event inputEvent();
extern void displayEvents(Event* head);
extern void reportAllEvents(Event* head);

void showMenu() {
    EventManager manager;
    int choice;

    while (true) {
        clear();
        mvprintw(1, 2, "MBPHistory");
        mvprintw(3, 4, "1. Add event (sorted)");
        mvprintw(4, 4, "2. Add event at beginning");
        mvprintw(5, 4, "3. Add event at end");
        mvprintw(6, 4, "4. Edit event (by date)");
        mvprintw(7, 4, "5. Delete event (by date)");
        mvprintw(8, 4, "6. Report: Brief list of events");
        mvprintw(9, 4, "7. Report: Detailed view of events");
        mvprintw(10, 4, "8. Load data from file (.txt)");
        mvprintw(11, 4, "9. Save data to file (.txt)");
        mvprintw(12, 4, "10. Exit");
        mvprintw(14, 2, "Select an option: ");
        echo();
        scanw("%d", &choice);
        noecho();

        char buffer[100];
        std::string date;
        Event ev;

        switch (choice) {
            case 1:
                clear();
                mvprintw(1, 2, "Adding event (sorted)...");
                ev = inputEvent();
                manager.addSorted(ev);
                break;
            case 2:
                clear();
                mvprintw(1, 2, "Adding event at beginning...");
                ev = inputEvent();
                manager.addAtBeginning(ev);
                break;
            case 3:
                clear();
                mvprintw(1, 2, "Adding event at end...");
                ev = inputEvent();
                manager.addAtEnd(ev);
                break;
            case 4:
                clear();
                mvprintw(1, 2, "Editing event. Enter date: ");
                echo();
                getstr(buffer);
                noecho();
                date = std::string(buffer);
                ev = inputEvent();
                if (manager.editEvent(date, ev)) {
                    mvprintw(10, 2, "Event edited successfully.");
                } else {
                    mvprintw(10, 2, "Event not found.");
                }
                getch();
                break;
            case 5:
                clear();
                mvprintw(1, 2, "Deleting event. Enter date: ");
                echo();
                getstr(buffer);
                noecho();
                date = std::string(buffer);
                if (manager.deleteEvent(date)) {
                    mvprintw(10, 2, "Event deleted successfully.");
                } else {
                    mvprintw(10, 2, "Event not found.");
                }
                getch();
                break;
            case 6:
                displayEvents(manager.getHead());
                break;
            case 7:
                reportAllEvents(manager.getHead());
                break;
            case 8:
                clear();
                mvprintw(1, 2, "Loading data. Enter filename (.txt): ");
                echo();
                getstr(buffer);
                noecho();
                manager.loadFromFile(std::string(buffer));
                mvprintw(3, 2, "Data loaded. Press any key to return to the menu...");
                getch();
                break;
            case 9:
                clear();
                mvprintw(1, 2, "Saving data. Enter filename (.txt): ");
                echo();
                getstr(buffer);
                noecho();
                manager.saveToFile(std::string(buffer));
                mvprintw(3, 2, "Data saved. Press any key to return to the menu...");
                getch();
                break;
            case 10:
                return;
            default:
                mvprintw(16, 2, "Invalid option!");
                getch();
                break;
        }
    }
}
