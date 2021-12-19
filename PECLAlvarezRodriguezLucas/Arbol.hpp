#ifndef ARBOL_HPP
#define ARBOL_HPP
#include "NodoArbol.hpp"
#include <vector>
using namespace std;

class Arbol
{
public:
    Arbol();
    void insertar(Paciente paciente);
    void inorden();
    void dibujar();
    bool vacio();
    pnodoAbb raiz;
    pnodoAbb ultimo(pnodoAbb nodo);
    ~Arbol();

private:
    pnodoAbb insertar(pnodoAbb nodo, Paciente paciente);
    void inorden(pnodoAbb);
    int altura(pnodoAbb);
    void
    dibujarNodo(vector<string>& output, vector<string>& linkAbove, pnodoAbb nodo, int nivel, int minPos, char linkChar);
};

#endif // ARBOL_HPP
