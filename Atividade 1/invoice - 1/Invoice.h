#pragma once
#include <string>

// === CLASSE INVOICE ===
class Invoice {
public:
    int numero;
    std::string descricao;
    int qtde;
    float preco;

    // Método que calcula o valor total
    float getTotal() {
        return qtde * preco;
    }
};