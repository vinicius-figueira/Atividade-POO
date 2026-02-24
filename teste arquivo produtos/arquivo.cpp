#include "Produto.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream fs;
    Produto pds[5] = {
        {"Sabão", 5},
        {"Xampu", 15},
        {"Arroz", 10},
        {"Feijão", 9},
        {"Pão", 5}
    };
    fs.open("produtos.txt", ios::out);
    if (!fs.is_open()) {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
        return 0;
    }
    for (int i = 0; i < 5; i++) {
        cout << pds[i].getNome() << endl << pds[i].getPreco() << endl;
        fs << pds[i].getNome() << endl << pds[i].getPreco() << endl;
    }
    fs.close();
}

int mainEscrita() {
    fstream stream;
    stream.open("teste.txt", ios::out);
    if (!stream.is_open()) {
        std::cout << "Erro ao abrir o arquivo para escrita." << std::endl;
        return 1;
    }
    cout << "Escrevendo no arquivo..." << endl;
    stream << "Teste de escrita em arquivo" << std::endl;
    stream.close();
    return 0;
}