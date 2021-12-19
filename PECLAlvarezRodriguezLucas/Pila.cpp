#include "Pila.hpp"

using namespace std;

// CONSTRUCTOR:
Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

//--------------FUNCIONES CONSTRUCTORAS:----------------//
// Insertar un paciente en la pila:
// Se crea un nuevo nodo que pasa a ser el nuevo ultimo paciente
void Pila::insertar(Paciente p) // O(1)
{
    pNodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

//------------FUNCIONES MODIFICADORAS:------------------//
// Extraer un paciente de la pila (parcial):
// Se elimina el ultimo paciente en entrar a la pila y se devuelve su valor
Paciente Pila::extraer() // O(1)
{
    pNodoPila nodo;
    Paciente p;
    if(!ultimo) {
        cout << "\t La pila se encuentra vacia, no se puede extraer";
        return p;
    }
    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->paciente;
    longitud--;
    delete nodo;
    return p;
}

//---------------FUNCIONES OBSERVADORAS-------//
// Observar la cima de la pila (parcial):
// Devuelve el ultimo valor en entrar a la pila (sin borrarlo)
Paciente Pila::cima() // O(1)
{
    Paciente p;
    if(!ultimo) {
        cout << "\t La pila se encuentra vacia, no tiene cima";
        return p;
    }
    return p = ultimo->paciente;
}

// Consultar la longitud de la pila
// Devuelve el entero del atributo longitud
int Pila::getLongitud() // O(1)
{
    return this->longitud;
}

//------MOSTRAR POR PANTALLA----//
// Muestra por pantalla la informacion de los pacientes de la pila (Opcion B)
void Pila::mostrar() // O(n)
{
    pNodoPila paux = ultimo;
    while(paux) {
        cout << "-> ";
        paux->paciente.mostrar();
        paux = paux->siguiente;
    }
    cout << endl;
}

//DESTRUCTOR
Pila::~Pila()   //O(n)
{
    pNodoPila paux;
    while(ultimo) {
        extraer();
    }
}
