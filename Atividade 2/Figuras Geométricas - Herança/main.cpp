#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int tipo;
    cin >> tipo;

    while (tipo != 0) {
        FiguraGeometrica* figura;
        switch (tipo) {
            case 1: figura = new Quadrado(); break;
            case 2: figura = new Retangulo(); break;
            case 3: figura = new Triangulo(); break;
            case 4: figura = new Circulo(); break;
            default: cout << "Tipo de figura inválida" << endl; break;
        }
        if (figura != nullptr) {
            figura->lerAtributosArea();
            cout << figura->getNome() 
                 << " de área " 
                 << figura->calcularArea() 
                 << endl;

            delete figura;
        }

        cin >> tipo;
    }

    return 0;
}