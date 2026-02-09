#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figura {
    protected:
    string nome;
    Figura(int i) {
        
           }
    }
    float CalcularArea();
    void LerAtributosArea();
    string getNome(){
        return nome;
    };
};

class Quadrado : public Figura {
    private:
    float lado;
    public:
    float CalcularArea(){
        return lado*lado; 
    }
    void LerAtributosArea(){
        cout << CalcularArea() << endl;
    };
};

class Retangulo : public Figura {
    private:
    float largura, altura;
    public:
    float CalcularArea(){
        return largura*altura; 
    }
    void LerAtributosArea(){
        cout << CalcularArea << endl;
    };
};
class Triangulo : public Figura {
    private:
    float base, altura;
    public:
    float CalcularArea(){
        return (base*altura)/2; 
    }
    void LerAtributosArea(){
        cout << CalcularArea() << endl;
    };
class Circulo : public Figura {
    private: 
    float raio;
    public:
    float CalcularArea(){
        return (3,14 * raio * raio);
    }
    void LerAtributosArea(){
        cout << CalcularArea() << endl;
    }
    };

};