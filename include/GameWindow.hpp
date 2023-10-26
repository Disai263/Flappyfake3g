#pragma once
#include <curses.h>
#include <unistd.h>
#include <Drawable.hpp>
#include <Updatable.hpp>
#include <Pipes.hpp>
#include <list>

class GameWindow
{
private:
    int x;
    int y;
    bool shouldClose;

public:
    GameWindow()
    {
        initscr();
        noecho();
        curs_set(FALSE);
        nocbreak();

        getmaxyx(stdscr, y, x);
        shouldClose = false;
    }

    void Update(std::list<Updatable*> updatables)
    {
        for (auto &&iterator : updatables)
        {
            iterator->Update();
        }
        usleep(41000); // Microseconds to sleep for drawing
    }

    void Draw(std::list<Drawable*> drawables)
    {
        clear();
        box(stdscr, '|', '-');
        for (auto &&drawable : drawables)
        {
            drawable->Draw();
        }
        refresh();
    }

    bool ShouldClose()
    {
        return this->shouldClose;
    }

    void Close()
    {
        this->shouldClose = true;
    }

    ~GameWindow()
    {
        endwin();
    }
};