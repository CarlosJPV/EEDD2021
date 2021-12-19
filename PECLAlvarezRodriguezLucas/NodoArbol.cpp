#include "NodoArbol.hpp"

NodoArbol::NodoArbol(Paciente p)
{
    this->paciente = p;
    this->izq = nullptr;
    this->der = nullptr;
}

NodoArbol::~NodoArbol()
{
}