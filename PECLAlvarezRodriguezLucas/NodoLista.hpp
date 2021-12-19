#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP
#include "Paciente.hpp"

class NodoLista
{
public:
    // Cada nodo de la lista contiene un paciente y un puntero a siguiente
    NodoLista(Paciente p, NodoLista* sig = NULL);
    ~NodoLista();

private:
    Paciente paciente;
    NodoLista* siguiente;
    friend class Lista;
};
typedef NodoLista* pNodoLista;

#endif // NODOLISTA_HPP
