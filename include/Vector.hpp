#pragma once

class Vector
{
private:
    int x;
    int y;
    int direction_x;
    int direction_y;

public:
    // Default constructor
    Vector()
    {
        this->x = 0;
        this->y = 0;
        this->direction_x = 1;
        this->direction_y = 1;
    }

    // Parameterized constructor
    Vector(int x, int y)
    {
        this->x = x;
        this->y = y;
        this->direction_x = 1;
        this->direction_y = 1;
    }

    // Function to change direction along the x-axis
    void ChangeDirectionX()
    {
        this->direction_x *= -1;
    }

    // Function to change direction along the y-axis
    void ChangeDirectionY()
    {
        this->direction_y *= -1;
    }

    // Function to displace along the x-axis
    void MoveX(unsigned int x)
    {
        this->x += x * this->direction_x;
    }

    void MoveY(unsigned int y)
    {
        this->y += y * this->direction_y;
    }

    // Function to read the x-coordinate
    int GetX()
    {
        return this->x;
    }

    int GetY()
    {
        return this->y;
    }
    
    // Destructor
    ~Vector()
    {
        // Destructor implementation if needed
    }
};