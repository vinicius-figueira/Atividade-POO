#include <iostream>
#include <string>
using namespace std;

class Data {
private:
    int dia, mes, ano;
public:
	Data() {
	    dia = mes = ano = 1;
	}
	int getMesDias() {
	    switch (mes) {
	        case 1: return 31;
	        case 2: return 28;
	        case 3: return 31;
	        case 4: return 30;
	        case 5: return 31;
	        case 6: return 30;
	        case 7: return 31;
	        case 8: return 31;
	        case 9: return 30;
	        case 10: return 31;
	        case 11: return 30;
	        case 12: return 31;
	    }
	    return 31;
	}
	string getDia(){
		if (dia < 10) {
		    return "0" + to_string(dia);
		}
		return to_string(dia);
	}
	void setDia(){
	    cin >> dia;
	}
	string getMes(){
	    if (mes < 10) {
	        return "0" + to_string(mes);
	    }
	    return to_string(mes);
	}
	void setMes(){
	    cin >> mes;
		if (mes < 1 || mes > 12) {
			cout << "Atributo mês Inválido" << endl;
			mes = 1;
		}
		else if (dia < 1 || dia > getMesDias()) {
			cout << "Atributo dia Inválido" << endl;
			dia = 1;
		}
	}
	int getAno(){
	    return ano;
	}
	void setAno(){
	    cin >> ano;
	}
	void Dat(int d, int m, int a){
		dia = d;
		mes = m;
		ano = a;
		if (mes < 1 || mes > 12) {
			cout << "Atributo mês Inválido" << endl;
			mes = 1;
		}
		else if (dia < 1 || dia > getMesDias()) {
			cout << "Atributo dia Inválido" << endl;
		}
	}
	void PrintData(){
		std::cout << getDia() << "/" << getMes() << "/" << ano << std::endl;
	}
	void avancarDia(){
	    dia++;

	    if (dia > getMesDias()) {
	        dia = 1;
	        mes++;
	    }
	    if (mes > 12) {
	        mes = 1;
	        ano++;
		}
	}
};




int main()
{   
	int dias;
    Data data;
    data.setDia();
    data.setMes();
    data.setAno();
	cin >> dias;
	for (int i = 0; i < dias; i++) {
	    data.avancarDia();
	}
    data.PrintData();
	return 0;
}