#include "Classes.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Funcionario f;
    Consultor c;
    int m;
    string n;
    float s;

    cin >> m;
    cin.ignore();
    getline(cin, n);
    cin >> s;
    f.setMatricula(m);
    f.setNome(n);
    f.setSalario(s);
    cout << f.getMatricula() << " - " << f.getNome() << " - R$ " << f.getSalario() << endl;
    cin >> m;
    cin.ignore();
    getline(cin, n);
    cin >> s;
    c.setMatricula(m);
    c.setNome(n);
    c.setSalario(s);
    cout << c.getMatricula() << " - " << c.getNome() << " - R$ " << c.getSalario() << endl;

    

}