#ifndef DRONE_H
#define DRONE_H

class Paquete
{
    private: 
    int _id;
public:
    Paquete(int iden);
    virtual ~Paquete();
    int getId();   
};



class Camara
{
public:
    Camara();
    virtual ~Camara();
    void sacarFoto();
};
class IDroneMovimiento
{
public:
    virtual ~IDroneMovimiento(){};
    virtual std::string accion() const = 0;
};

class Drone {
    private:
        Paquete _paquete;
        Camara* _camara;
        IDroneMovimiento* _mov;
    public:
        Drone(Paquete p, IDroneMovimiento* m );
        virtual ~Drone();
        
        int despegar();
        int aterrizar();
        int notificar();
        int descargarPaquete();
        void setAccion(IDroneMovimiento* m);
        void doAccion()const;
            
        
};




// MOVIMIENTOS POSIBLES
class MoverIzquierda : public IDroneMovimiento
{
    public:
    MoverIzquierda(){};
    ~MoverIzquierda(){};
    std::string accion() const override {      
        return "moviendo a la izquierda..\n";
}
};

class MoverDerecha : public IDroneMovimiento
{
    public:
    MoverDerecha(){};
    ~MoverDerecha(){};
    std::string accion() const override {      
        return "moviendo a la derecha..\n";
}
};

class Elevar : public IDroneMovimiento
{
    public:
    Elevar(){};
    ~Elevar(){};
   std::string accion() const override {      
        return "elevando..\n";
}
};

class Bajar : public IDroneMovimiento
{
    public:
    Bajar(){};
    ~Bajar(){};
    std::string accion() const override {      
        return "bajando..\n";
}
};

class Acelerar : public IDroneMovimiento
{
    public:
    Acelerar(){};
    ~Acelerar(){};
    std::string accion() const override {      
        return "acelerando dron..\n";
}
};

class Frenar : public IDroneMovimiento
{
    public:
    Frenar(){};
    ~Frenar(){};
    std::string accion() const override {      
        return "frenando dron..\n";
}
};


#endif // DRONE_H