#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"

class Pila
{
public:
    Pila();
    ~Pila();
    void insertar(Paciente p); // Inserta un nuevo paciente en la pila
    Paciente extraer();        // Elimina el ultimo paciente en entrar a la pila y devuelve su valor
    Paciente cima();           // Devuelve el valor de ultimo paciente en entrar (no se ha usado al final)
    void mostrar();            // Muestra la informacion de los pacientes de la pila
    int getLongitud();         // Devuelve la longitud de la pila

private:
    // Los atributos de la pila son su longitud y un puntero al ultimo paciente insertado
    pNodoPila ultimo;
    int longitud;
};

#endif // PILA_HPP
