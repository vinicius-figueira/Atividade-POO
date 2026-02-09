#include "Despesa.h"
#include "ControleDeGastos.h"
#include <iostream>
#include <string>
using namespace std;

//Essa versao ta com varios cout, mas na atividade do YouCoding, o output do codigo e so o resultado da consulta.


int main () { 
    int n;
    string tipo;
    ControleDeGastos controle;
    //cout << "Quantas despesas deseja cadastrar? ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        Despesa d;
        //cout << "Digite o nome da despesa: ";
        d.setNome();
        //cout << "Digite o valor da despesa: ";
        d.setValor();
        //cout << "Digite o tipo de gasto: ";
        d.setTipoDeGasto();
        controle.addDespesa(d);
    }
        //cout << "Qual tipo de despesa deseja exibir? ";
    getline(cin, tipo);
    if (controle.existeDespesaPorTipo(tipo) == true) {
        //cout << "Despesas do tipo " << tipo << ":" << endl;
        for (int i = 0; i < n; i++) {
            Despesa d = controle.getDespesa(i);
            if (d.getTipoDeGasto() == tipo) {
                cout << d.getNome() << ", R$ " << d.getValor() << endl;
            }
        }
        cout << "Total: " << controle.calculaTotalDeDespesasPorTipo(tipo) << "/" << controle.calculaTotalDeDespesas() << endl;
    }
    else {
        cout << "Nenhuma despesa do tipo especificado" << endl;
        cout << "Total: 0/" << controle.calculaTotalDeDespesas() << endl;
    }
    return 0;
}
