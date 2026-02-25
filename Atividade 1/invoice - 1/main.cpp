#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;



int main() {
    Invoice inv1, inv2;
    int n, q;
    float p;
    string d;

    // --- LEITURA DO PRIMEIRO ITEM ---
    cin >> n;
    cin.ignore(); // Limpa o buffer para o getline funcionar
    getline(cin, d);
    cin >> q >> p;

    inv1.numero = n;
    inv1.descricao = d;
    inv1.qtde = (q > 0) ? q : 0;
    inv1.preco = (p > 0.0) ? p : 0.0;

    // --- LEITURA DO SEGUNDO ITEM ---
    cin >> n;
    cin.ignore(); 
    getline(cin, d);
    cin >> q >> p;

    inv2.numero = n;
    inv2.descricao = d;
    inv2.qtde = (q > 0) ? q : 0;
    inv2.preco = (p > 0.0) ? p : 0.0;

    // --- SAÍDA FORMATADA ---
    cout << inv1.numero << " - " << inv1.descricao << " - " << inv1.qtde << " - " << inv1.preco << " - " << inv1.getTotal() << endl;
    cout << inv2.numero << " - " << inv2.descricao << " - " << inv2.qtde << " - " << inv2.preco << " - " << inv2.getTotal() << endl;

    return 0;
}