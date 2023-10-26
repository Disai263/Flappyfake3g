#pragma once
#include <curses.h>
#include <iostream>
#include <string>
#include <fstream>
#include <Vector.hpp>
using namespace std;

class Drawable
{
private:
    bool is_open;
    fstream archivo;
    string directorio;

protected:
    Vector position;

public:
    Drawable(int x, int y, string resource)
    {
        this->directorio = "./data/" + resource + ".txt";
        this->is_open = false;
        this->archivo.open(this->directorio, ios::in);
        this->position = Vector(x, y);
    }

    Drawable(string resource) : Drawable(0, 0, resource)
    {
        Drawable(0, 0, resource);
    }

    void Draw()
    {
        if (archivo.is_open())
        {
            std::string line;
            move(
                this->position.GetY(), 
                this->position.GetX()
                );
            while (std::getline(archivo, line))
            {
                int y = getcury(stdscr);
                mvaddstr
                (
                    y + 1, 
                    this->position.GetX(), 
                    line.c_str()
                    );
            }
            archivo.clear();
            archivo.seekg(0);
        }
    }

    ~Drawable()
    {
        archivo.close();
    }
};