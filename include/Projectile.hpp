#pragma once
#include <Drawable.hpp>
#include <Vector.hpp>
#include <Updatable.hpp>

class Projectile : public Drawable, public Updatable
{
private:
   int lifespan;

public:
    Projectile(Vector position) : Drawable(position.GetX(), position.GetY(), "egg")
    {
        this->lifespan = 1;
    }

    ~Projectile() {}

    void Update()
    {
        this->position.MoveX(4);
    }
};