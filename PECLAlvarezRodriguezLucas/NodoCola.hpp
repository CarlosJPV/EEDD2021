#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include "Paciente.hpp"

class NodoCola
{
public:
    // Cada nodo de la cola contiene un paciente y un puntero a siguiente
    NodoCola(Paciente p, NodoCola* sig = NULL);
    ~NodoCola();

private:
    Paciente paciente;
    NodoCola* siguiente;

    friend class Cola;
};

typedef NodoCola* pNodoCola;
#endif // NODOCOLA_HPP
