#ifndef PACIENTE_HPP
#define PACIENTE_HPP
#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Paciente
{
public:
    Paciente();
    ~Paciente();
    int getID();                   // Para consultar la ID del paciente
    bool getEnfermedad();          // Para consultar la enfermedad del paciente
    int getHabitacion();           // Para consultar la habitacion del paciente
    void setID(int id);            // Para establecer el ID de cada paciente
    void setHabitacion(int habit); // Para establecer la habitacion de cada paciente
    void mostrar();      // Muestra por pantalla la informacion de cada paciente (antes de tener un ID asignado)
    void mostrarConID(); // Muestra por pantalla la informacion total de cada paciente

private:
    // Cada paciente tiene: Tipo de enfermedad, DNI, ID y numero de habitacion
    bool enfermedad;
    int ID, habitacion;
    char DNI[10];

    void generarDNI();         // Genera un DNI aleatorio
    void contraerEnfermedad(); // El paciente contrae apendicitis o una hernia
};

#endif // PACIENTE_HPP
