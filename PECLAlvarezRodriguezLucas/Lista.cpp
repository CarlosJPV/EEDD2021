#include "Lista.hpp"
#include "Paciente.hpp"

using namespace std;

Lista::Lista()
{
    primero = NULL;
    ultimo = NULL;
    longitud = 0;
}
//-----------FUNCIONES GENERADORAS---------------//
// Insertar un paciente en la lista:
void Lista::insertar(Paciente p) // O(1)
{
    pNodoLista nuevo;
    nuevo = new NodoLista(p);
    if(ultimo)
        ultimo->siguiente = nuevo;
    ultimo = nuevo;
    if(!primero)
        primero = nuevo;
    longitud++;
}

// Insertar a la izquierda de la lista
void Lista::insertarIzq(Paciente p)
{
    pNodoLista nuevo = new NodoLista(p);
    if(esvacia()) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        nuevo->siguiente = primero;
        primero = nuevo;
    }
    longitud++;
}
// Insertar a la derecha de la lista
void Lista::insertarDer(Paciente p)
{
    pNodoLista nuevo = new NodoLista(p);
    if(esvacia()) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo = nuevo;
    }
    longitud++;
}
// Insertar de forma ordenada (De mayor a menor ID) los pacientes
void Lista::insertarOrdenado(Paciente p)
{
    if(!esvacia()) {
        if(ultimo->paciente.getID() >= p.getID()) {
            insertarDer(p);
        } else if(primero->paciente.getID() < p.getID()) {
            insertarIzq(p);
        } else {
            Paciente aux = primero->paciente;
            extraer();
            insertarOrdenado(p);
            insertarIzq(aux);
        }
    } else {
        insertarIzq(p);
    }
}

//----------FUNCIONES MODIFICADORAS----------------//
// Extraer el primer paciente de la lista (parcial):
Paciente Lista::extraer() // O(1)
{
    pNodoLista nodo;
    Paciente p;
    nodo = primero;
    if(!primero) {
        cout << "La lista se encuentra vacia, no se puede extraer el primer paciente";
        return p;
    }
    primero = nodo->siguiente;
    p = nodo->paciente;
    delete nodo;
    if(!primero)
        ultimo = NULL;
    longitud--;
    return p;
}

//---------FUNCIONES OBSERVADORAS-----------------//

// Getter del atributo longitud
int Lista::getLongitud() // O(1)
{
    return this->longitud;
}

// Comprobar si la cola se encuentra vacia
bool Lista::esvacia() // O(1)
{
    pNodoLista paux = ultimo;
    if(paux)
        return false;
    else
        return true;
}

// Muestra por pantalla la informacion de los pacientes de la lista (Opciones I  y J)
void Lista::mostrar() // O(n)
{
    pNodoLista paux = primero;
    while(paux) {
        cout << "-> ";
        paux->paciente.mostrarConID();
        paux = paux->siguiente;
    }
    cout << endl;
}

// Mostrar el primer paciente de la lista (parcial)
void Lista::mostrarPrim() // O(1)
{
    if(this->longitud == 0) {
        cout << "\t La lista de pacientes se encuentra vacia, no hay primero" << endl;
    } else
        this->primero->paciente.mostrarConID();
}

// Mostrar el ultimo paciente de la lista (parcial)
void Lista::mostrarUlt() // O(1)
{
    if(this->longitud == 0) {
        cout << "\t La lista de pacientes se encuentra vacia, no hay ultimo" << endl;
    } else
        this->ultimo->paciente.mostrarConID();
}

// DESTRUCTOR O(n)
Lista::~Lista()
{
    while(primero) {
        extraer();
    }
}
