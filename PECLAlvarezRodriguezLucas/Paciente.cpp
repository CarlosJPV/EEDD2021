#include "Paciente.hpp"
#include <string>

// Constructor de la clase
Paciente::Paciente() // O(1)
{
    this->contraerEnfermedad();
    this->generarDNI();
}

// Genera un DNI aleatorio valido para el paciente O(1)
void Paciente::generarDNI()
{
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int numDNI = 0, aux = 1E7;
    for(int i = 0; i < 8; i++) {
        int num = rand() % 10;
        this->DNI[i] = '0' + num;
        numDNI = numDNI + num * aux;
        aux /= 10;
    }
    this->DNI[8] = letras[numDNI % 23];
    this->DNI[9] = '\0';
}

// Contrae una enfermedad de 2 posibles O(1)
void Paciente::contraerEnfermedad()
{
    this->enfermedad = (rand() % 2);
}

// Getter del atributo ID O(1)
int Paciente::getID()
{
    return this->ID;
}

// Getter del atributo ID   O(1)
bool Paciente::getEnfermedad()
{
    return this->enfermedad;
}

// Getter del atributo habitacion   O(1)
int Paciente::getHabitacion()
{
    return this->habitacion;
}

// Setter del atributo ID   O(1)
void Paciente::setID(int id)
{
    this->ID = id;
}

// Setter del atributo habitacion  O(1)
void Paciente::setHabitacion(int habit)
{
    this->habitacion = habit;
}

// Muestra por pantalla la informacion de cada paciente (antes de tener un ID asignado)
void Paciente::mostrar() // O(n)
{
    string enf = "una hernia";
    if(enfermedad)
        enf = "apendicitis";
    cout << "\t El paciente cuyo DNI es " << this->DNI << " padece " << enf << endl;
}

// Muestra por pantalla la informacion total de cada paciente
void Paciente::mostrarConID() // O(n)
{
    string enf = "una hernia";
    if(enfermedad)
        enf = "apendicitis";
    cout << "\t El paciente cuyo DNI es " << this->DNI << " padece " << enf << " tiene asignada la ID: " << this->ID
         << " y se encuentra en la habitacion " << this->habitacion << endl;
}

Paciente::~Paciente() // O(1)
{
}
