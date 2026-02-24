#include <string>
#include <iostream>
using namespace std;
class Produto {
    private:
        string nome;
        float preco;

    public:
        Produto() {
            
        }
        Produto(string n, float p) {
            nome = n;
            preco = p;
        }

        string getNome() {
            return nome;
        }
        float getPreco() {
            return preco;
        }
};