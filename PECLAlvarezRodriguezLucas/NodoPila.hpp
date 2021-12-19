#ifndef NODOPILA_HPP
#define NODOPILA_HPP

#include "Paciente.hpp"
#include <stdio.h>

class NodoPila
{
public:
    // Cada nodo de la pila contiene un paciente y un puntero a siguiente
    NodoPila(Paciente p, NodoPila* sig = NULL);
    ~NodoPila();

private:
    Paciente paciente;
    NodoPila* siguiente;
    friend class Pila;
};
typedef NodoPila* pNodoPila;

#endif // NODOPILA_HPP
