#pragma once
#include <Vector.hpp>
#include <Drawable.hpp>
#include <Updatable.hpp>

class ReversePipe : public Drawable, public Updatable
{
private:
    //Vector position;

public:
    ReversePipe() : Drawable("reversepipe")
    {
        this->position = Vector();
    }

    ReversePipe(int x, int y) : Drawable("reversepipe")
    {
        this->position.MoveX(x);
        this->position.MoveY(y);
    }
};