#ifndef COLA_HPP
#define COLA_HPP
#include "NodoCola.hpp"
#include "Paciente.hpp"

class Cola
{
public:
    Cola();
    ~Cola();

    void insertar(Paciente p); // Inserta un paciente en la cola
    Paciente extraer();        // Elimina el primer paciente en ser insertado y lo devuelve
    Paciente verPrimero();     // Devuelve el primer paciente en ser insertado
    void mostrar();            // Muestra la informacion de los pacientes de la cola
    int getLongitud();         // Devuelve la longitud de la cola

private:
    // Los atributos de la cola son su longitud y dos punteros al primer y al ultimo pacientes insertados
    pNodoCola primero, ultimo;
    int longitud;
};

#endif // COLA_HPP
