#include <iostream>
#include <string>

using namespace std;

// === CLASSE INVOICE ===
class Invoice {
private:
    int numero;
    string descricao;
    int qtde;
    float preco;
public:
    // Método que calcula o valor total
    float getTotal() {
        return qtde * preco;
    }
    int getNumero() {
        return numero;
    }
    void setNumero(int n) {
        numero = n;
    }
    int getQtde() {
        return qtde;
    }
    void setQtde(int n) {
        qtde = n;
    }
    float getPreco() {
        return preco;
    }
    void setPreco(float n) {
        preco = n;
    }
    string getDescricao() {
        return descricao;
    }
    void setDescricao(string n) {
        descricao = n;
    }
    void print() {
        std::cout << numero << " - " << descricao << " - " << qtde << " - " << preco << " - "  << getTotal() << std::endl;
    }
};

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

    inv1.setNumero(n);
    inv1.setDescricao(d);
    inv1.setQtde((q > 0) ? q : 0);
    inv1.setPreco((p > 0.0) ? p : 0.0);

    // --- LEITURA DO SEGUNDO ITEM ---
    cin >> n;
    cin.ignore(); 
    getline(cin, d);
    cin >> q >> p;

    inv2.setNumero(n);
    inv2.setDescricao(d);
    inv2.setQtde((q > 0) ? q : 0);
    inv2.setPreco((p > 0.0) ? p : 0.0);

    // --- SAÍDA FORMATADA ---
    inv1.print();
    inv2.print();

    return 0;
}