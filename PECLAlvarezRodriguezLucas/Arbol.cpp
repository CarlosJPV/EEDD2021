#include "Arbol.hpp"

Arbol::Arbol()
{
    raiz = NULL;
}

//-----------------FUNCIONES GENERADORAS---------------//
// Insertar un paciente en la cola:
void Arbol::insertar(Paciente paciente)
{
    raiz = insertar(raiz, paciente);
}

pnodoAbb Arbol::insertar(pnodoAbb nodo, Paciente paciente)
{
    if(!nodo)
        return new NodoArbol(paciente);

    if(paciente.getHabitacion() < nodo->paciente.getHabitacion()) {
        nodo->izq = insertar(nodo->izq, paciente);
    } else
        nodo->der = insertar(nodo->der, paciente);
    return nodo;
}

//----------------------FUNCIONES MODIFICADORAS-------//
// Extraer un paciente de la cola (parcial):

//---------------FUNCIONES OBSERVADORAS-------//
// Devuelve la altura del arbol
int Arbol::altura(pnodoAbb nodo)
{
    if(!nodo)
        return 0;
    return 1 + max(altura(nodo->izq), altura(nodo->der));
}

// Comprueba si el arbol esta vacio
bool Arbol::vacio()
{
    if(!raiz) {
        return true;
    } else {
        return false;
    }
}

// Obtiene el ultimo nodo del arbol
pnodoAbb Arbol::ultimo(pnodoAbb nodo)
{
    pnodoAbb max;
    if(nodo != NULL) {
        if(nodo->der == NULL) {
            max = nodo;
        } else {
            max = ultimo(nodo->der);
        }
    }
    return max;
}

//----------------------MOSTRAR POR PANTALLA-------//
void Arbol::dibujar()
{
    int h = altura(raiz);
    vector<string> output(h), linkAbove(h);
    dibujarNodo(output, linkAbove, raiz, 0, 5, ' ');

    for(int i = 1; i < h; i++) {
        for(int j = 0; j < linkAbove[i].size(); j++) {
            if(linkAbove[i][j] != ' ') {
                int size = output[i - 1].size();
                if(size < j + 1)
                    output[i - 1] += string(j + 1 - size, ' ');
                int jj = j;
                if(linkAbove[i][j] == 'L') {
                    while(output[i - 1][jj] == ' ')
                        jj++;
                    for(int k = j + 1; k < jj - 1; k++)
                        output[i - 1][k] = '_';
                } else if(linkAbove[i][j] == 'R') {
                    while(output[i - 1][jj] == ' ')
                        jj--;
                    for(int k = j - 1; k > jj + 1; k--)
                        output[i - 1][k] = '_';
                }
                linkAbove[i][j] = '|';
            }
        }
    }

    cout << '\n' << '\n';
    for(int i = 0; i < h; i++) {
        if(i)
            cout << linkAbove[i] << '\n';
        cout << output[i] << '\n';
    }
    cout << '\n' << '\n';
}

void Arbol::dibujarNodo(vector<string>& output,
    vector<string>& linkAbove,
    pnodoAbb nodo,
    int nivel,
    int p,
    char linkChar)
{
    if(!nodo)
        return;

    int h = output.size();
    string SP = " ";

    if(p < 0) {
        string extra(-p, ' ');
        for(string& s : output)
            if(!s.empty())
                s = extra + s;
        for(string& s : linkAbove)
            if(!s.empty())
                s = extra + s;
    }
    if(nivel < h - 1)
        p = max(p, (int)output[nivel + 1].size());
    if(nivel > 0)
        p = max(p, (int)output[nivel - 1].size());
    p = max(p, (int)output[nivel].size());

    if(nodo->izq) {
        string izqdato = SP + to_string(nodo->izq->paciente.getHabitacion()) + SP;
        dibujarNodo(output, linkAbove, nodo->izq, nivel + 1, p - izqdato.size(), 'L');
        p = max(p, (int)output[nivel + 1].size());
    }

    int space = p - output[nivel].size();
    if(space > 0)
        output[nivel] += string(space, ' ');
    string nododato = SP + to_string(nodo->paciente.getHabitacion()) + SP;
    output[nivel] += nododato;

    space = p + SP.size() - linkAbove[nivel].size();
    if(space > 0)
        linkAbove[nivel] += string(space, ' ');
    linkAbove[nivel] += linkChar;

    if(nodo->der)
        dibujarNodo(output, linkAbove, nodo->der, nivel + 1, output[nivel].size(), 'R');
}


Arbol::~Arbol()
{
}
