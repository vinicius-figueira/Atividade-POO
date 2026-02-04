#include <iostream>
#include <string>
using namespace std;

class Data {
public:
    int dia, mes, ano;
	
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