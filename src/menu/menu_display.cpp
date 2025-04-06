#include "menu.h"
#include <ncurses.h>

void showMenu(Event*& head) {
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    // Minimalistic placeholders
    clear();
    mvprintw(1, 2, "MBPHistory - (Menu Placeholder)");
    mvprintw(3, 2, "Press any key to exit...");
    getch();

    endwin();
}