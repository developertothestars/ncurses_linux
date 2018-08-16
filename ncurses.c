/* ncurses based program */
/* in Ubuntu, sudo apt-get install libncurses5-dev to pull in library */
/* $ gcc -o ncurses ncurses.c -l ncurses */
/* 20180715 */

#include <curses.h>
#include <unistd.h>  /* for sleep() */
int main(void)
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    mvaddch(LINES / 2, COLS / 2, '*');
    refresh();

    sleep(5);
    endwin();
    return 0;
}
