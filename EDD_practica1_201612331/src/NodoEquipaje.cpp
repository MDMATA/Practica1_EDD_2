#include "NodoEquipaje.h"

NodoEquipaje::NodoEquipaje()
{
    this->anterior = nullptr;
    this->siguiente = nullptr;

    this->id = -1;
    this->informacion = "";
    this->nombre = "";
    this->tipo = "";
    this->ubicacion = "";
    //ctor
}
NodoEquipaje::NodoEquipaje(string nombre_, string tipo_, string ubicacion_, string informacion_)
{



    this->informacion = informacion_;
    this->nombre = nombre_;
    this->tipo = tipo_;
    this->ubicacion = ubicacion_;
    //ctor
}

NodoEquipaje::~NodoEquipaje()
{
    //dtor
}