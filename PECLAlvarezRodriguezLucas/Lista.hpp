#ifndef LISTA_HPP
#define LISTA_HPP
#include "Paciente.hpp"
#include "NodoLista.hpp"

class Lista
{
public:
    Lista();
    ~Lista();
    void insertar(Paciente p);  //Inserta un paciente en la lista
    Paciente extraer(); //Extrae el primer paciente de la lista  en entrar y lo devuelve
    void mostrar(); //Muestra por pantalla los pacientes
    bool esvacia(); //Comprueba si se encuentra vacia
    void insertarDer(Paciente p);
    void insertarIzq(Paciente p);
    void insertarOrdenado(Paciente p);
    void mostrarPrim(); //Muestra el primer paciente en entrar
    void mostrarUlt();  //Muestra el ultimo paciente en entrar
    int getLongitud();  //Devuelve la longitud de la lista
    
private:
    pNodoLista primero, ultimo;
    int longitud;
};

#endif // LISTA_HPP
