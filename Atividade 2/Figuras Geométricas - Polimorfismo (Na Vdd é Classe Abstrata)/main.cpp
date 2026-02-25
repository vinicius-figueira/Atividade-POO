#include "FiguraGeometrica.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
    int tipo;
    
    while (true) {
        cin >> tipo;

        if (tipo == 0)
            break;

        FiguraGeometrica* figura = nullptr;

        switch(tipo) {
            case 1:
                figura = new Quadrado();
                break;
            case 2:
                figura = new Retangulo();
                break;
            case 3:
                figura = new Triangulo();
                break;
            case 4:
                figura = new Circulo();
                break;
            default:
                continue;
        }

        figura->lerAtributosArea();

        cout << figura->getNome()
                  << " polimórfico de área "
                  << figura->calcularArea()
                  << endl;

        delete figura;
    }

    return 0;
}