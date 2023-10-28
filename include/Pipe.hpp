#pragma once
#include <Vector.hpp>
#include <Drawable.hpp>
#include <Updatable.hpp>

class Pipe : public Drawable, public Updatable
{
private:
    //Vector position;

public:
    Pipe() : Drawable("pipe")
    {
        this->position = Vector();
    }

    Pipe(int x, int y) : Drawable("pipe")
    {
        this->position.MoveX(x);
        this->position.MoveY(y);
    }

    //void Update()
    //{
        //this->position.MoveX(1);
        //this->position.ChangeDirectionX();
    //}

   // void Fly()
   // {
        //this->position.MoveX(1);
    //}

   // Vector GetPosition()
   // {
        //return this->position;
   // }

    ~Pipe()
    {
    }
};