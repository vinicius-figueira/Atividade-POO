#pragma once
#include <string>
using namespace std;

class Funcionario {
    protected:
        int matricula;
        string nome;
        float salario;
        public:
        Funcionario() {
            matricula = 0;
            nome = "";
            salario = 0;
        }

        int getMatricula(){
            return matricula;
        }
        void setMatricula(int matricula){
            this->matricula = matricula;
        }
        string getNome(){
            return nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        float getSalario(){
            return salario;
        }
        void setSalario(float salario){ 
            this->salario = salario;
        }

};
class Consultor : public Funcionario {
        public:
        float getSalario(){
            return salario*1.1;
        }
        float getSalario(float percentual){
            return salario*(1+percentual);
    }
};
