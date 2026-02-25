#pragma once
#include "Despesa.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class ControleDeGastos {
    private:
    vector<Despesa> despesas;
    public:
    void addDespesa(Despesa d) {
        despesas.push_back(d);
    }
    void setDespesa(Despesa d, int pos) {
        if (pos >= 0 && pos < despesas.size()) {
            despesas[pos] = d;
        }
        else {
            cout << "Posição inválida!" << endl;
        }
    }
    Despesa getDespesa(int pos) {
        if (pos >= 0 && pos < despesas.size()) {
            return despesas[pos];
        }
        else {
            cout << "Posição inválida!" << endl;
            return Despesa();
        }
    }
    float calculaTotalDeDespesas() {
        float total = 0;
        for (const auto &d : despesas)
            total += d.getValor();
        return total;
    }
    float calculaTotalDeDespesasPorTipo(string tipo) {
        float total = 0;
        for (const auto &d : despesas) {
            if (d.getTipoDeGasto() == tipo)
                total += d.getValor();
        }
        return total;
    }
    bool existeDespesa(string nome) {
        for (const auto &d : despesas) {
            if (d.getNome() == nome)
                return true;
        }
        return false;
    }
    bool existeDespesaPorTipo(string tipo) {
        for (const auto &d : despesas) {
            if (d.getTipoDeGasto() == tipo)
                return true;
        }
        return false;
    }
};