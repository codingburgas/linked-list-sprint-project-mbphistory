#include <ncurses.h>
#include "src/menu/menu.h"
#include "src/event/event_manager.h"

int main() {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    showMenu();
    endwin();
    return 0;
}
