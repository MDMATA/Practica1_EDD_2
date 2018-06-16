#ifndef LISTAPAQUETERIA_H
#define LISTAPAQUETERIA_H
#include "NodoPaqueteria.h"



class ListaPaqueteria
{
    public:
        ListaPaqueteria();
        virtual ~ListaPaqueteria();

        int id_actual = 0;

        NodoPaqueteria *primero;
        NodoPaqueteria *ultimo;

        void ingresar_dato(NodoPaqueteria *paqueteria);
        void Mostrar_datos();
        void Mostrar_unidad(NodoPaqueteria *paqueterio);

        int contar();
    protected:

    private:
};

#endif // LISTAPAQUETERIA_H
