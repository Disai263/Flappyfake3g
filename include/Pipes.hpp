#pragma once
#include <Drawable.hpp> // Asegúrate de que el encabezado se incluye correctamente


class Pipes
{
private:
    Drawable topObstacle;
    Drawable bottomObstacle;
    int gapHeight;
    int xPos;

public:
    Pipes(int x, int gapSize, int screenHeight)
        : topObstacle(x, 0, "pipe"), bottomObstacle(x, screenHeight - gapSize + 1, "pipe")
    {
        xPos = x;
        gapHeight = gapSize;
    }

    void Draw()
    {
        topObstacle.Draw();
        bottomObstacle.Draw();
    }

    // Esta función debe ser llamada en cada ciclo de actualización para mantener los obstáculos en su lugar
    void Update()
    {
        // Los obstáculos son estáticos, por lo que no necesitan actualización continua
    }
};