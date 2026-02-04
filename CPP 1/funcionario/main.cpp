#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Funcionario {
    private: 
        string PNome, SNome;
        float salario;
        
    public:
        Funcionario(){
            salario = 0;
        }
        string getPNome() {
            return PNome;
        }
        string getSNome() {
            return SNome;
        }
        float getSalario() {
            if (salario < 0) {
                return 0;
            }
            else
            return salario;
        }
        void setPNome(string pn) {
            PNome = pn;
        }
        void setSNome(string sn) {
            SNome = sn;
        }
        void setSalario(float s) {
            if(s < 0) {
                salario = 0;
            } else {
                salario = s;
            }
        }   
        void aumentarSalario(float p) {
            salario = salario + (salario * p);
        }
        Funcionario(string pn, string sn, float s) : PNome(pn), SNome(sn), salario(s) {}
        float getSalarioAnual() {
            if (salario < 0) {
                return 0;
            }
            else
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
        std::cout << f.getPNome() << " " << f.getSNome() << " - " << f.getSalario() << " - " << s << std::endl;
        f.aumentarSalario(0.10);
        std::cout << f.getSalarioAnual() << std::endl;
    }
    
    
    return 0;
}