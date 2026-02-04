#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa {
private:
    string Nome, Numero;
    int Idade;

public:
    Pessoa(string n, int i, string num) : Nome(n), Idade(i), Numero(num) {}

    const string& getNome() const { return Nome; }
    int getIdade() const { return Idade; }
    const string& getNumero() const { return Numero; }
};

int main() {
    int n;
    string linha;
    vector<Pessoa> listaPessoa;

    getline(cin, linha);
    n = stoi(linha);   // converte string para int

    for (int i = 0; i < n; i++) {
        string Nome, Numero;
        int Idade;

        getline(cin, Nome);
        getline(cin, linha);
        Idade = stoi(linha);
        getline(cin, Numero);

        listaPessoa.push_back(Pessoa(Nome, Idade, Numero));
    }

    string nomeBusca;
    getline(cin, nomeBusca);

    bool found = false;
    for (const auto& pessoa : listaPessoa) {
        if (pessoa.getNome().find(nomeBusca) != string::npos) {
            cout << pessoa.getNome() << ", "
                 << pessoa.getIdade() << ", "
                 << pessoa.getNumero() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Pessoa não encontrada" << endl;
    }

    return 0;
}
