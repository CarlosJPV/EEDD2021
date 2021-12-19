#include "Cola.hpp"

using namespace std;

Cola::Cola()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}
//-----------------FUNCIONES GENERADORAS---------------//
// Insertar un paciente en la cola:
void Cola::insertar(Paciente p) // O(1)
{
    pNodoCola nuevo;
    nuevo = new NodoCola(p);

    // Si la cola no esta vacia, el nuevo paciente sera el ultimo en entrar
    if(ultimo) {
        ultimo->siguiente = nuevo;
    }

    ultimo = nuevo;

    // Si la cola esta vacia, el nuevo paciente sera el primero en entrar
    if(!primero) {
        primero = nuevo;
    }

    // Como insertamos un nuevo paciente, la longitud aumenta en 1
    longitud++;
}

//----------------------FUNCIONES MODIFICADORAS-------//
// Extraer un paciente de la cola (parcial):
Paciente Cola::extraer() // O(1)
{
    pNodoCola nodo;
    Paciente p;
    nodo = primero;

    // Si la cola  se encuentra vacia, retornamos un paciente vacio y alertamos
    if(!nodo) {
        cout << "\t La cola se encuentra vacia, no se puede extraer";
        return p;
    }
    primero=nodo->siguiente;
    p = nodo->paciente;
    delete nodo;

    // Si la cola se vacia tras borrar el elemento, ultimo apunta a null (se encuentra completamente vacia)
    if(!primero)
        ultimo = NULL;

    // Puesto que extraemos un paciente, la longitud de la cola disminuye en 1
    longitud--;
    return p;
}

//---------------FUNCIONES OBSERVADORAS-------//
// Retornar el primer paciente de la cola (parcial):
Paciente Cola::verPrimero() // O(1)
{
    if(!primero)
        cout << "\t La cola se encuentra vacia, no tiene primero";
    return primero->paciente;
}

// Consultar la longitud de la cola
// Devuelve el entero del atributo longitud
int Cola::getLongitud() // O(1)
{
    return this->longitud;
}

//------MOSTRAR POR PANTALLA----//
// Muestra por pantalla la informacion de los pacientes de la cola (Opciones E y F)
void Cola::mostrar() // O(n)
{
    pNodoCola paux = primero;
    while(paux) {
        cout << "-> ";
        paux->paciente.mostrarConID();
        paux = paux->siguiente;
    }
    cout << endl;
}

// DESTRUCTOR:
Cola::~Cola()
{
    while(primero)
        extraer();
}
