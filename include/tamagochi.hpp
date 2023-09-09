#include <iostream>
#include <string>

class Mascota {
    int vida;
    std::string nombre;
    public:
    Mascota(){
        this->vida=100;
        this->nombre = nombre;
    }
    ~Mascota(){}
    void EstablecerNombre(std::string nombre){ 
        this->nombre=nombre;
    }
    void DecirNombre(){
        std::cout<<"Mi nombre es"<<this->nombre<<std::endl;

    }

};

