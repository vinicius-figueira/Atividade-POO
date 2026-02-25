#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funcionario {
public:
	string PNome, SNome;
	float salario;

	Funcionario() {
		salario = 0;
	}
	Funcionario(string pn, string sn, float s) : PNome(pn), SNome(sn), salario(s) {}
	float getSalarioAnual() {
		return 12*salario;
	}
};


int main()
{
	int n;

	std::cin >> n;

	vector<Funcionario> listaFunc;

	for(int i = 0; i < n; i++) {
		string Nome;
		string Sobrenome;
		float Salario;

		std::cin >> Nome;
		std::cin >> Sobrenome;
		std::cin >> Salario;

		listaFunc.push_back(Funcionario(Nome, Sobrenome, Salario));
	}

	for(auto f : listaFunc) {
		float s;
		s = f.getSalarioAnual();
		std::cout << f.PNome << " " << f.SNome << " - " << f.salario << " - " << s << endl;
	}


	return 0;
}