#include <GameWindow.hpp>
#include <Bird.hpp>
#include <list>
#include <iostream>
#include <Projectile.hpp>
#include <Pipes.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Bird* bird1 = new Bird();
    Bird* bird2 = new Bird(30, 0);
    Bird* bird3 = new Bird(50, 10);
    Pipes* pipes1 = new Pipes(50, 4, 15); // Ajusta los valores según tu juego
    Pipes* pipes2 = new Pipes(80, 5, 15);

    GameWindow* gameWindow = new GameWindow();
    nodelay(stdscr, TRUE);  // Avoid blocking on getch()

    list<Drawable*> drawables;
    drawables.push_back(bird1);
    //drawables.push_back(pipes1); // Agrega los obstáculos a los drawables
    //drawables.push_back(pipes2);

    list<Updatable*> updatables;
    updatables.push_back(bird1);
    //updatables.push_back(pipes1); // Agrega los obstáculos a los updatables
    //updatables.push_back(pipes2); 
while (!gameWindow->ShouldClose())
{
    int key = getch();
    if (key != ERR)  // A key was pressed
    {
        if (key == 'd' || key == 'D') {
            bird1->ChangeDirectionInX();
        }
        else if (key == 'a' or key == 'A') {
            bird1->ChangeDirectionInX();
        }
        else if (key == 'w' or key == 'W') {
            bird1->ChangeDirectionInY();
        }
        else if (key == ' ') {
            Projectile* p = new Projectile(bird1->GetPosition());
            drawables.push_back(p);
            updatables.push_back(p);
        }
    }
    
    bird1->Update();  // Agrega esta línea para actualizar la posición del pájaro

    gameWindow->Draw(drawables);
    gameWindow->Update(updatables);
}
}