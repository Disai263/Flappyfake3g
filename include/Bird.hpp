#pragma once
#include <Vector.hpp>
#include <Drawable.hpp>
#include <Updatable.hpp>

class Bird : public Drawable, public Updatable
{
private:
    //Vector position;

public:
    Bird() : Drawable("bird")
    {
        this->position = Vector();
    }

    Bird(int x, int y) : Drawable("bird")
    {
        //this->position.MoveX(x);
        //this->position.MoveY(y);
    }

    void Update()
    {
        this->position.MoveX(1);
        //this->position.ChangeDirectionX();
    }

    void Fly()
    {
        this->position.MoveX(1);
    }

    void ChangeDirectionInX()
    {
        this->position.ChangeDirectionX();
    }

    void ChangeDirectionInY()
    {
        this->position.ChangeDirectionY();
    }

    Vector GetPosition()
    {
        return this->position;
    }

    ~Bird()
    {
    }
};