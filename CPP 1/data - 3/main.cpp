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
	string getMesString() {
	    switch (mes) {
	        case 1: return "Janeiro";
	        case 2: return "Fevereiro";
	        case 3: return "Marco";
	        case 4: return "Abril";
	        case 5: return "Maio";
	        case 6: return "Junho";
	        case 7: return "Julho";
	        case 8: return "Agosto";
	        case 9: return "Setembro";
	        case 10: return "Outubro";
	        case 11: return "Novembro";
	        case 12: return "Dezembro";
	    }
	    return "Indefinido";
	}
	int getDia(){
	    return dia;
	}
	void setDia(){
	    cin >> dia;
	}
	int getMes(){
	    return mes;
	}
	void setMes(){
	    cin >> mes;
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
            cout << "Atributo Inválido." << endl;
        }
        else if (mes == 2 && d > 28) {
            cout << "Atributo Inválido." << endl;
        }
        else if (mes % 2 == 0 && d > 30) {
            cout << "Atributo Inválido." << endl;
        }
        else if (mes % 2 != 0 && d > 31) {
            cout << "Atributo Inválido." << endl;
        }
    }
	void PrintData(){
	    string nomedomes;
	    nomedomes = getMesString();
	    std::cout << dia << " de " << nomedomes << " de " << ano << std::endl;
	}
};




int main()
{   
    Data data;
    data.setDia();
    data.setMes();
    data.setAno();
    data.PrintData();
	return 0;
}