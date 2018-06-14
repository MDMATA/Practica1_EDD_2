#include "NodoEstacion.h"

NodoEstacion::NodoEstacion()
{
    this->id= -1;
    this->nombre = "";
    this->informacion = "";

    //ctor
}
NodoEstacion::NodoEstacion(string nombre_,string informacion_, int inicio_)
{
    this->nombre = nombre_;
    this->informacion = informacion_;
    if(inicio_ == 1)
    {
        this->Atencion_alCliente = true;
    }
    else if(inicio_ == 2)
    {
        this->seguridad_Cliente_inicio = true;
    }
    else
    {
        this->seguridad_Cliente_final = true;
    }
}

NodoEstacion::~NodoEstacion()
{
    //dtor
}
