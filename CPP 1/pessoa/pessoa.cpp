#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa {
private:
	string Nome, Numero;
	int Idade;

public:
    const string& getNome() const {
        return Nome;
    }

    int getIdade() const {
        return Idade;
    }

    const string& getNumero() const {
        return Numero;
    }

    void setNome(string n) {
        Nome = n;
    }

    void setIdade(int i) {
        Idade = i;
    }
    void setNumero(string num) {
        Numero = num;
    }
	Pessoa() {
		Idade = 0;
    }
    Pessoa(string n) : Nome(n), Idade(0) {}

	Pessoa(string n, int i, string num) : Nome(n), Idade(i), Numero(num) {}
};


int main()
{
    int n;
    string nomeBusca;
    vector<Pessoa> listaPessoa;
    
    cin >> n;

    for(int i = 0; i < n; i++) {
		string Nome;
		int Idade;
		string Numero;
        
        cin.ignore();
        getline(cin, Nome);
		std::cin >> Idade;
        cin.ignore();
		getline(cin, Numero);

		listaPessoa.push_back(Pessoa(Nome, Idade, Numero));
	}

	cin >> nomeBusca; 

    bool found = false;
    for(const auto& pessoa : listaPessoa) {
        size_t pos = pessoa.getNome().find(nomeBusca);
    if (pos != string::npos) {
            cout << "Nome: " << pessoa.getNome() << ", Idade: " << pessoa.getIdade() << ", Numero: " << pessoa.getNumero() << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "Pessoa nao encontrada." << endl;
    }
    

	return 0;
}