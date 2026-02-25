#pragma once
#include <iostream>
#include <string>
using namespace std;

class Despesa {
    private:
    string nome;
    float valor;
    string TipoDeGasto;
    public:
    Despesa(){
        nome = "";
        valor = 0;
        TipoDeGasto = "";
     };
    void setNome(){
        getline(cin, nome);
    }
    void setValor(){
        cin >> valor;
    }
    void setTipoDeGasto(){
        cin.ignore();
        getline(cin, TipoDeGasto);
     };
    string getNome() const {
        return nome;
    }
    float getValor() const {
        return valor;
    }
    string getTipoDeGasto() const {
        return TipoDeGasto;
    }
};