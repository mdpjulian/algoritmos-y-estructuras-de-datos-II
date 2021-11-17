
#include "drone.h"



// DRONE
Drone::Drone(Paquete p, IDroneMovimiento* m = nullptr ):  _mov(m), _paquete(p){
    Camara* camara = new Camara();
    _camara = camara;    
}
Drone::~Drone(){
    delete this->_mov;
}
int Drone::despegar()
{
    std::cout << "dron despegando..\n";
    setAccion(new Elevar);
    std::cout << "..%..%..%..%..%..%..%..\n";
    std::cout << "..%..%..%..%..%..%..%..\n";
    _camara->sacarFoto();
    std::cout << "..%..%..%..%..%..%..%..\n";
    std::cout << "..%..%..%..%..%..%..%..\n";
    notificar();
    return 0;
}
void Drone::aterrizar()
{
    std::cout << "dron aterrizando..\n";
    setAccion(new Bajar);
    doAccion();
    std::cout << "..%..%..%..%..%..%..%..\n";
    std::cout << "..%..%..%..%..%..%..%..\n";
    descargarPaquete();
    std::cout << "..%..%..%..%..%..%..%..\n";
    std::cout << "..%..%..%..%..%..%..%..\n";
    
    
}
void Drone::notificar()
{
    std::cout << "Se entrego el paquete #" << _paquete.getId() << " .\n";
}
void Drone::descargarPaquete()
{
    std::cout << "Descargando paquete....\n";
}
void Drone::setAccion(IDroneMovimiento* m){
    delete this->_mov;
        this->_mov = m;
}
void Drone::doAccion()const{
    std::string result = this->_mov->accion();
    std::cout << result;
    
}


//CAMARA

Camara::Camara(){};
Camara::~Camara(){};
void Camara::sacarFoto()
{
    std::cout << "sacando foto de la recepcion..." << std::endl;
}

//PAQUETE

Paquete::Paquete(int iden): _id(iden){};
Paquete::~Paquete(){};
int Paquete::getId(){
    return _id;
}; 
