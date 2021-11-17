#include <iostream>
#include "drone.h" 
#include "drone.cpp" // borrar al entregar


int main()
{
    Paquete pack(523);

    Drone* dron = new Drone(pack, new Elevar);
    dron->doAccion();

    // STRATEGY PATTERN
    dron->setAccion(new MoverDerecha);
    dron->doAccion();

    dron->setAccion(new Acelerar);
    dron->doAccion();

    dron->setAccion(new Frenar);
    dron->doAccion();

    
    dron->aterrizar();

    dron->despegar();
    
    
   

    getchar();
    

    return 0;
}