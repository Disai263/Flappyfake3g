#pragma once
#include <Vector.hpp>
#include <Drawable.hpp>
#include <Updatable.hpp>

class AngryCow : public Drawable, public Updatable
{
private:
    //Vector position;

public:
    AngryCow() : Drawable("angrycow")
    {
        this->position = Vector();
    }

    AngryCow(int x, int y) : Drawable("angrycow")
    {
        this->position.MoveX(x);
        //this->position.MoveY(y);
    }

    void Update()
    {
        this->position.MoveX(-1);
        //this->position.ChangeDirectionX();
    }

    void Fly()
    {
        this->position.MoveX(-1);
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

    ~AngryCow()
    {
    }
};