#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP
#include "Arbol.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
#include "Pila.hpp"
#include <random>
#include <time.h>

class Controlador
{
public:
    Controlador();
    ~Controlador();
    // INTERFAZ:
    int pacientesEnPila();             // Devuelve el numero de pacientes en la pila
    int pacientesEnSalaA();            // Devuelve el numero de pacientes en la salaA
    int pacientesEnSalaB();            // Devuelve el numero de pacientes en la salaB
    int pacientesEnSalaC();            // Devuelve el numero de pacientes en la salaC
    int pacientesEnSalaD();            // Devuelve el numero de pacientes en la salaD
    int pacientesEnListaApendicitis(); // Devuelve el numero de pacientes en la lista de apendicitis
    int pacientesEnListaHernias();     // Devuelve el numero de pacientes en la lista de hernias
    int pacientesEnArbol();            // Devuelve el numero de pacientes en el arbol
    int pacientesEnArbol(pnodoAbb nodo);

    // OPCION A:
    void generaPacientes(); // Genera 12 pacientes y los apila

    // OPCION B:
    void muestraPacientes(); // Muestra por pantalla los pacientes de la pila

    // OPCION C:
    void borraPacientesPila(); // Vacia la pila

    // OPCION D:
    void habitacionesRandom();
    bool verificarHab(int numero, int array[100]);
    void IDsRandom();
    bool verificarID(int numero, int array[50]);
    void encolarPacientes(); // Encola los pacientes de la lista en sus respectivas colas

    // OPCION E:
    void muestraPacientesSalasAyB(); // Muestra el contenido de las salas a y b

    // OPCION F:
    void muestraPacientesSalasCyD(); // Muestra el contenido de las salas c y d

    // OPCION G:
    void borraPacientesColas(); // Vacia las salas

    // OPCION H:
    void enlistarPacientes(); // Inserta los pacientes de las salas en los quirofanos pertinentes

    // OPCION I:
    void muestraPacientesApendicitis(); // Muestra los pacientes en el quirofano de apendicitis

    // OPCION J:
    void muestraPacientesHernias(); // Muestra los pacientes en el quirofano de hernias

    // OPCION K:
    void buscarPacientes(); // Muestra el paciente de hernias con mayor prioridad y el de apendicitis con menor

    // OPCION L:
    void borraPacientesListas(); // Vacia las listas
    void reiniciar();            // Reinicia el sistema

    // OPCION M:
    void crearYDibujarArbol(); // Crea y muestra el arbol de habitaciones
    void crearArbol();         // Crea el arbol
    void dibujarArbol();       // Lo dibuja

    // OPCION N:
    void muestraPacientesApendicitisEnOrden(); // Muestra los pacientes de apendicitis en orden

    // OPCION O:
    void muestraPacientesHerniasEnOrden(); // Muestra los pacientes de hernias en orden

    // OPCION P:
    void muestraPacientesInOrden(); // Muestra los pacientes InOrden
    void muestraPacientesInOrden(pnodoAbb nodo);

    // OPCION Q:
    void buscarPacientesArbol();
    void ultimoRama(pnodoAbb nodo);
    void primeroRama(pnodoAbb nodo);
    

    // OPCION R:
    void contarPacientesHabImpar(); // Cuenta los pacientes con habitacon impar en el arbol
    int contarPacientesHabImpar(pnodoAbb nodo);
    int n = 0;

    // OPCION T:
    void mostrarPacientesHoja();
    void mostrarPacientesHoja(pnodoAbb nodo);
    
    // OPCION U:
    void eliminarPaciente();
    void eliminarPaciente(pnodoAbb nodo, int habitElim);

    int longitud = 0;

private:
    Pila pilaPacientes;
    Cola salaA, salaB, salaC, salaD;
    Lista listaHernia, listaApendi;
    Arbol ABB;

    int habApenDisp = 100, habHernDisp = 100;
    int habitacionesApen[100], habitacionesHernia[100];

    int IDsApenDisp = 50, IDsHerniaDisp = 50;
    int IDsApen[50], IDsHernia[50];

    int num = 0;
    int numhabit;
    
    Paciente pacienteAux;
};

#endif // CONTROLADOR_HPP
