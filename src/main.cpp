#include <iostream>
#include <tamagochi.hpp>

int main(int argc, char const *argv[])
{
    std::cout<<"Juego Mascota"<<std::endl;
    Mascota m1, m2, m3;
    m1.EstablecerNombre("firulise");
    m2.EstablecerNombre("pepe");
    m3.EstablecerNombre("pacoberto");

    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();
       
    return 0;
}

//ctrl a para seleccionar. ctrl k y ctrl f para acomdar, ctrl ñ para aprir terminal
// ls lista los archivos
// lsb_release -d  nombre de el sistema operativo
//cd . cambia directorio esta carpeta
//cd .. cambia a la carpeta de de arriba
//cd / te envia a la raiz
//cd carpeta  te lleva a esa carpeta

// cd  te lleva a home
// g++ nombre (compila archivo)cd src
// rmdir remover directorio
//rm archivo para borrar archivo
// rm /nombre de carpeta -rf borrar folder de archivo
//man manual todo el manual de comando
// help 
// git nombre agregarchivo
// git push subir a la nube 
// git pull add añade cambios
// git pull bajar de la nube
// git commit comentar 
//git commit -m ¨mensaje¨ guardar cambios local
//ls -l lista de detalles
//ls -la lista de detalles incluyendo ocultos