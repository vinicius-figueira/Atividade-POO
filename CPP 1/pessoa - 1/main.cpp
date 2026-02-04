#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pessoa {
public:
	string Nome, Numero;
	int Idade;
	

	Pessoa() {
		Idade = 0;
	}
	Pessoa(string n, int i, string num) : Nome(n), Idade(i), Numero(num) {}
};


int main()
{
	
	vector<Pessoa> listaPessoa;

	for(int i = 0; i < 2; i++) {
		string Nome;
		int Idade;
		string Numero;
        
        getline(cin, Nome);
		std::cin >> Idade;
        cin.ignore();
		getline(cin, Numero);

		listaPessoa.push_back(Pessoa(Nome, Idade, Numero));
	}

	for(auto f : listaPessoa) {
		std::cout << f.Nome << ", " << f.Idade << ", " << f.Numero << endl;
	}


	return 0;
}