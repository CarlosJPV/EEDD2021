
#include "Controlador.hpp"
using namespace std;

Controlador::Controlador()
{
}

// INTERFAZ
// Comprueba el numero de pacientes que se encuentran en la pila
int Controlador::pacientesEnPila() // O(1)
{
    return pilaPacientes.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en la sala A
int Controlador::pacientesEnSalaA() // O(1)
{
    return salaA.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en la sala B
int Controlador::pacientesEnSalaB() // O(1)
{
    return salaB.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en la sala C
int Controlador::pacientesEnSalaC() // O(1)
{
    return salaC.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en la sala D
int Controlador::pacientesEnSalaD() // O(1)
{
    return salaD.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en la lista de apendicitis
int Controlador::pacientesEnListaApendicitis() // O(1)
{
    return listaApendi.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en la lista de hernias
int Controlador::pacientesEnListaHernias() // O(1)
{
    return listaHernia.getLongitud();
}

// Comprueba el numero de pacientes que se encuentran en el arbol
int Controlador::pacientesEnArbol()
{ // O(1)
    int longitud = pacientesEnArbol(ABB.raiz);
    return longitud;
}

int Controlador::pacientesEnArbol(pnodoAbb nodo)
{
    if(nodo == nullptr) {
        return 0;
    }
    pacientesEnArbol(nodo->izq);
    pacientesEnArbol(nodo->der);
    longitud++;
    return longitud;
}

// Genera 12 pacientes y los almacena en la pila (Opcion A)
void Controlador::generaPacientes() // O(1)
{
    if(pacientesEnPila() < 48) {
        for(int i = 0; i < 12; i++) {
            Paciente p;
            pilaPacientes.insertar(p);
        }
        cout << "\t HAN LLEGADO 12 PACIENTES A LA PILA";
    } else {
        cout << "\t NO CABEN MAS PACIENTES EN LA PILA";
    }
}

// Muestra por pantalla la informacion de los pacientes de la pila (Opcion B)
void Controlador::muestraPacientes() // O(n)
{
    cout << "\t-------------------PACIENTES EN LA PILA:------------------------------" << endl;
    if(pacientesEnPila() == 0)
        cout << "\t                 LA PILA ESTA VACIA" << endl;
    pilaPacientes.mostrar();
    cout << "\t----------------------------------------------------------------------" << endl;
}

// Borra los pacientes almacenados en la pila (Opcion C)
void Controlador::borraPacientesPila() // O(n)
{
    while(pacientesEnPila() > 0) {
        pilaPacientes.extraer();
    }
}

// Rellena un array de habitaciones de orden aleatorio para los pacientes
void Controlador::habitacionesRandom() // O(n)
{
    num = 0;
    srand(time(NULL));
    for(int i = 0; i < 100; i++) {
        while(verificarHab(num, habitacionesApen)) {
            num = rand() % 100 + 101;
        }
        habitacionesApen[i] = num;
    }
    for(int i = 0; i < 100; i++) {
        while(verificarHab(num, habitacionesHernia)) {
            num = rand() % 100 + 201;
        }
        habitacionesHernia[i] = num;
    }
}

// Verifica que la habitacion no se repite
bool Controlador::verificarHab(int numero, int array[100]) // O(1)
{
    for(int i = 0; i < 100; i++) {
        if(num == array[i]) {
            return true;
        }
    }
    return false;
}

// Rellena un array de IDs de orden aleatorio para los pacientes
void Controlador::IDsRandom() // O(n)
{
    srand(time(NULL));
    for(int i = 0; i < 50; i++) {
        while(verificarID(num, IDsApen)) {
            num = rand() % 50 + 1;
        }

        IDsApen[i] = num;
    }

    for(int i = 0; i < 50; i++) {
        while(verificarID(num, IDsHernia)) {
            num = rand() % 50 + 51;
        }

        IDsHernia[i] = num;
    }
}

// Verifica que el ID no se repite
bool Controlador::verificarID(int numero, int array[50]) // O(1)
{
    for(int i = 0; i < 50; i++) {
        if(num == array[i]) {
            return true;
        }
    }
    return false;
}

//  Extrae los pacientes de la pila y los almacena en sus respectivas colas (Opcion D)
// Los pacientes con apendicitis iran a las colas A y B, mientras que los que tengan una hernia iran a C y D
// El criterio entre salas para la misma enfermedad es el numero de pacientes en ellas
void Controlador::encolarPacientes() // O(n)
{
    if(pacientesEnPila() + pacientesEnSalaA() + pacientesEnSalaB() < 50 and
        pacientesEnPila() + pacientesEnSalaB() + pacientesEnSalaD() < 50) {
        while(pacientesEnPila() > 0) {
            Paciente p = pilaPacientes.extraer();
            if(p.getEnfermedad()) {
                p.setID(IDsApen[IDsApenDisp - 1]);
                p.setHabitacion(habitacionesApen[habApenDisp - 1]);
                habApenDisp--;
                IDsApenDisp--;
                if(pacientesEnSalaA() <= pacientesEnSalaB()) {
                    salaA.insertar(p);
                } else
                    salaB.insertar(p);
            } else {
                p.setID(IDsHernia[IDsHerniaDisp - 1]);
                p.setHabitacion(habitacionesHernia[habHernDisp - 1]);
                habHernDisp--;
                IDsHerniaDisp--;
                if(pacientesEnSalaC() <= pacientesEnSalaD()) {
                    salaC.insertar(p);
                } else
                    salaD.insertar(p);
            }
        }
        cout << "\t LOS PACIENTES HAN PASADO A SUS RESPECTIVAS SALAS";
    } else
        cout << "\t NO HAY ESPACIO (NI IDs) SUFICIENTE";
}

// Muestra por pantalla los pacientes de las salas A y B (Opcion E)
void Controlador::muestraPacientesSalasAyB() // O(n)
{
    cout << "\t-------------------PACIENTES EN LAS SALAS:----------------------------" << endl;
    cout << "\t SALA A:" << endl;
    if(pacientesEnSalaA() == 0)
        cout << "\t                 LA SALA A ESTA VACIA" << endl;
    salaA.mostrar();
    cout << "\t SALA B:" << endl;
    if(pacientesEnSalaB() == 0)
        cout << "\t                 LA SALA B ESTA VACIA" << endl;
    salaB.mostrar();
    cout << "\t----------------------------------------------------------------------" << endl;
}

// Muestra por pantalla los pacientes de las salas C y D (Opcion F)
void Controlador::muestraPacientesSalasCyD() // O(n)
{
    cout << "\t-------------------PACIENTES EN LAS SALAS:----------------------------" << endl;
    cout << "\t SALA C:" << endl;
    if(pacientesEnSalaC() == 0)
        cout << "\t                 LA SALA C ESTA VACIA" << endl;
    salaC.mostrar();
    cout << "\t SALA D:" << endl;
    if(pacientesEnSalaD() == 0)
        cout << "\t                 LA SALA D ESTA VACIA" << endl;
    salaD.mostrar();
    cout << "\t----------------------------------------------------------------------" << endl;
}

// Borra los pacientes de todas las salas (Opcion G)
void Controlador::borraPacientesColas() // O(n)
{
    while(pacientesEnSalaA() > 0) {
        salaA.extraer();
    }
    while(pacientesEnSalaB() > 0) {
        salaB.extraer();
    }
    while(pacientesEnSalaC() > 0) {
        salaC.extraer();
    }
    while(pacientesEnSalaD() > 0) {
        salaD.extraer();
    }
}

// Extrae los pacientes de las salas y los almacena de forma ordenada en 2 listas (Opcion H)
void Controlador::enlistarPacientes() // O(n)
{
    while(pacientesEnSalaA() > 0) {
        Paciente p = salaA.extraer();
        listaApendi.insertarOrdenado(p);
    }
    while(pacientesEnSalaB() > 0) {
        Paciente p = salaB.extraer();
        listaApendi.insertarOrdenado(p);
    }
    while(pacientesEnSalaC() > 0) {
        Paciente p = salaC.extraer();
        listaHernia.insertarOrdenado(p);
    }
    while(pacientesEnSalaD() > 0) {
        Paciente p = salaD.extraer();
        listaHernia.insertarOrdenado(p);
    }
}

// Muestra por pantalla los pacientes de la lista Apendicitis (Opcion I)
void Controlador::muestraPacientesApendicitis() // O(n)
{
    cout << "\t-------------------PACIENTES EN LA LISTA DE APENDICITIS:--------------" << endl;
    if(pacientesEnListaApendicitis() == 0) {
        cout << "\t                 LA LISTA ESTA VACIA" << endl;
    }
    listaApendi.mostrar();
    cout << "\t----------------------------------------------------------------------" << endl;
}

// Muestra por pantalla los pacientes de la lista Hernias (Opcion J)
void Controlador::muestraPacientesHernias() // O(n)
{
    cout << "\t-------------------PACIENTES EN LA LISTA DE HERNIAS:--------------" << endl;
    if(pacientesEnListaHernias() == 0) {
        cout << "\t                 LA LISTA ESTA VACIA" << endl;
    }
    listaHernia.mostrar();
    cout << "\t----------------------------------------------------------------------" << endl;
}

// Muestra por pantalla el paciente de apendicitis de menor prioridad y el de hernias con mayor (Opcion K)
void Controlador::buscarPacientes()
{
    cout << "\t-------------------PACIENTES------------------------------------------" << endl;
    cout << "\t Paciente de menor prioridad con apendicitis: ";
    listaApendi.mostrarUlt();
    cout << "\t Paciente de mayor prioridad con hernia: ";
    listaHernia.mostrarPrim();
}

// Vacia las dos listas (Auxiliar a la funcion reiniciar() de la opcion L)
void Controlador::borraPacientesListas() // O(n)
{
    while(pacientesEnListaApendicitis() > 0) {
        listaApendi.extraer();
    }
    while(pacientesEnListaHernias() > 0) {
        listaHernia.extraer();
    }
}

// Crea y dibuja un arbol de habitaciones   (Opcion M)
void Controlador::crearYDibujarArbol()  // O(n)
{
    crearArbol();
    dibujarArbol();
}

// Crea el arbol
void Controlador::crearArbol()
{
    Paciente paciente;
    if(ABB.vacio()) {
        paciente.setHabitacion(200);
        ABB.insertar(paciente);
    }
    while(!listaApendi.esvacia()) {
        paciente = listaApendi.extraer();
        ABB.insertar(paciente);
    }
    while(!listaHernia.esvacia()) {
        paciente = listaHernia.extraer();
        ABB.insertar(paciente);
    }
}

// Lo dibuja
void Controlador::dibujarArbol()
{
    cout << "\t-------------------ARBOL DE HABITACIONES:--------------" << endl;
    ABB.dibujar();
    cout << "\t-------------------------------------------------------" << endl;
}

// Muestra los pacientes del arbol con apendicitis de manera ordenada  (Opcion N)
void Controlador::muestraPacientesApendicitisEnOrden()  // O(n)
{
    muestraPacientesInOrden(ABB.raiz->izq);
}

// Muestra los pacientes del arbol con hernias de manera ordenada   (Opcion O)
void Controlador::muestraPacientesHerniasEnOrden()  // O(n)
{
    muestraPacientesInOrden(ABB.raiz->der);
}

// Muestra los pacientes de forma InOrden   (Opcion P)
void Controlador::muestraPacientesInOrden() //O(n)
{
    muestraPacientesInOrden(ABB.raiz);
}

void Controlador::muestraPacientesInOrden(pnodoAbb nodo)
{
    if(nodo == nullptr) {
        return;
    }
    muestraPacientesInOrden(nodo->izq);
    nodo->paciente.mostrarConID();
    cout << " ";
    muestraPacientesInOrden(nodo->der);
}

/*Muestra:
- El paciente con apendicitis de la habitaciÃ³n cuyo nÃºmero es el menor.
- El paciente con apendicitis de la habitaciÃ³n cuyo nÃºmero es el mayor.
- El paciente con hernias la habitaciÃ³n cuyo nÃºmero es el menor.
- El paciente con hernias la habitaciÃ³n cuyo nÃºmero es el mayor.    (Opcion Q)
*/
void Controlador::buscarPacientesArbol()    //O(n)
{

    pacienteAux = ABB.raiz->paciente;

    primeroRama(ABB.raiz->izq);
    cout << "\tEl paciente de apendicitis con menor habitacion: ";
    pacienteAux.mostrarConID();

    ultimoRama(ABB.raiz->izq);
    cout << "\tEl paciente de apendicitis con mayor habitacion: ";
    pacienteAux.mostrarConID();

    pacienteAux.setHabitacion(300);

    primeroRama(ABB.raiz->der);
    cout << "\tEl paciente de hernias con menor habitacion: ";
    pacienteAux.mostrarConID();

    ultimoRama(ABB.raiz->der);
    cout << "\tEl paciente de hernias con mayor habitacion: ";
    pacienteAux.mostrarConID();
}

void Controlador::ultimoRama(pnodoAbb nodo)
{
    if(nodo != NULL) {
        ultimoRama(nodo->izq);
        if(nodo->paciente.getHabitacion() > pacienteAux.getHabitacion()) {
            pacienteAux = nodo->paciente;
        }
        ultimoRama(nodo->der);
    }
}

void Controlador::primeroRama(pnodoAbb nodo)
{
    if(nodo != NULL) {
        primeroRama(nodo->izq);
        if(nodo->paciente.getHabitacion() < pacienteAux.getHabitacion()) {
            pacienteAux = nodo->paciente;
        }
        primeroRama(nodo->der);
    }
}

// Cuenta los pacientes con habitacion impar    (Opcion R)
void Controlador::contarPacientesHabImpar() // O(n)
{
    int n = contarPacientesHabImpar(ABB.raiz);
    cout << "Numero de pacientes cuyo numero de habitacion son impares: " << n;
}

int Controlador::contarPacientesHabImpar(pnodoAbb nodo)
{
    if(nodo == nullptr) {
        return 0;
    }
    contarPacientesHabImpar(nodo->izq);
    contarPacientesHabImpar(nodo->der);
    if((nodo->paciente.getHabitacion() % 2) != 0)
        n++;
    return n;
}

// Muestra los pacientes que se encuentran en los nodos hoja    (Opcion T)
void Controlador::mostrarPacientesHoja()    // O(n)
{
    cout << "\tLos pacientes que se encuentran en el nodo hoja son: \n";
    mostrarPacientesHoja(ABB.raiz);
}

void Controlador::mostrarPacientesHoja(pnodoAbb nodo)
{
    if(nodo != NULL) {
        mostrarPacientesHoja(nodo->izq);
        if((nodo->izq == NULL) && (nodo->der == NULL)) {
            nodo->paciente.mostrarConID();
        }
        mostrarPacientesHoja(nodo->der);
    }
}

// Elimina un nodo (Opcion U)
void Controlador::eliminarPaciente()    // O(n)
{
    cout << "\tIndique el numero de habitacion del paciente que quiere eliminar ";
    cin >> numhabit;

    eliminarPaciente(ABB.raiz->izq, numhabit);
    eliminarPaciente(ABB.raiz->der, numhabit);
}

void Controlador::eliminarPaciente(pnodoAbb nodo, int habitElim)
{
    Paciente pacienteAux;
    if(nodo != NULL) {
        if(nodo->paciente.getHabitacion() == habitElim) {
            if(nodo->izq==NULL){
                nodo=nodo->der;
            }
            else{
                if (nodo->der==NULL){
                    nodo=nodo->izq;
                }
                else{
                    pacienteAux = ABB.ultimo(nodo->izq)->paciente;
                    eliminarPaciente(nodo->izq, pacienteAux.getHabitacion());
                    nodo->paciente=pacienteAux;
                }
            }
        }
        else if (habitElim < nodo->paciente.getHabitacion()){
            eliminarPaciente(nodo->izq, habitElim);
        }
        else if (habitElim > nodo->paciente.getHabitacion()){
            eliminarPaciente(nodo->der, habitElim);
        }
    }
}

// Reinicia el sistema a su estado inicial (Opcion L)
void Controlador::reiniciar() // O(n)
{
    borraPacientesPila();
    borraPacientesColas();
    borraPacientesListas();
    habApenDisp = 100;
    habHernDisp = 100;
    IDsApenDisp = 50;
    IDsHerniaDisp = 50;
}

Controlador::~Controlador()
{
}
