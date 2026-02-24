#include <iostream>
#include <string>

using namespace std;

class FiguraGeometrica {
protected:
    int tipo;

public:
    FiguraGeometrica(int t) : tipo(t) {}

    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;

    string getNome() {
        switch(tipo) {
            case 1: return "Quadrado";
            case 2: return "Retângulo";
            case 3: return "Triângulo";
            case 4: return "Círculo";
            default: return "Indefinido";
        }
    }

    virtual ~FiguraGeometrica() {}
};


class Quadrado : public FiguraGeometrica {
private:
    float lado;

public:
    Quadrado() : FiguraGeometrica(1) {}

    float calcularArea() override {
        return lado * lado;
    }

    void lerAtributosArea() override {
        cin >> lado;
    }
};


class Retangulo : public FiguraGeometrica {
private:
    float base, altura;

public:
    Retangulo() : FiguraGeometrica(2) {}

    float calcularArea() override {
        return base * altura;
    }

    void lerAtributosArea() override {
        cin >> base >> altura;
    }
};


class Triangulo : public FiguraGeometrica {
private:
    float base, altura;

public:
    Triangulo() : FiguraGeometrica(3) {}

    float calcularArea() override {
        return (base * altura) / 2.0;
    }

    void lerAtributosArea() override {
        cin >> base >> altura;
    }
};

class Circulo : public FiguraGeometrica {
private:
    float raio;

public:
    Circulo() : FiguraGeometrica(4) {}

    float calcularArea() override {
        return 3.14f * raio * raio;
    }

    void lerAtributosArea() override {
        cin >> raio;
    }
};

