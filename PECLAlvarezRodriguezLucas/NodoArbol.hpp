#ifndef NODOARBOL_HPP
#define NODOARBOL_HPP
#include "Paciente.hpp"
#include <iostream>
class NodoArbol
{
public:
    NodoArbol(Paciente p);
    ~NodoArbol();

    Paciente paciente;
    NodoArbol* izq;
    NodoArbol* der;

private:

    friend class Arbol;
};
typedef NodoArbol* pnodoAbb;
#endif // NODOARBOL_HPP