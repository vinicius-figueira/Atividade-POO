#include <iostream>
#include <string>
using namespace std;

class FiguraGeometrica {
protected:
    int tipo;

public:
    FiguraGeometrica(int tipo) {
        this->tipo = tipo;
    }

    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    virtual string getNome() = 0;

    virtual ~FiguraGeometrica() {}
};


class Quadrado : public FiguraGeometrica {
private:
    float lado;

public:
    Quadrado() : FiguraGeometrica(1) {}

    void lerAtributosArea() override {
        cin >> lado;
    }

    float calcularArea() override {
        return lado * lado;
    }

    string getNome() override {
        return "Quadrado";
    }
};

class Retangulo : public FiguraGeometrica {
private:
    float base, altura;

public:
    Retangulo() : FiguraGeometrica(2) {}

    void lerAtributosArea() override {
        cin >> base >> altura;
    }

    float calcularArea() override {
        return base * altura;
    }

    string getNome() override {
        return "Retângulo";
    }
};


class Triangulo : public FiguraGeometrica {
private:
    float base, altura;

public:
    Triangulo() : FiguraGeometrica(3) {}

    void lerAtributosArea() override {
        cin >> base >> altura;
    }

    float calcularArea() override {
        return (base * altura) / 2.0;
    }

    string getNome() override {
        return "Triângulo";
    }
};


class Circulo : public FiguraGeometrica {
private:
    float raio;

public:
    Circulo() : FiguraGeometrica(4) {}

    void lerAtributosArea() override {
        cin >> raio;
    }

    float calcularArea() override {
        return 3.14f * raio * raio;
    }

    string getNome() override {
        return "Círculo";
    }
};
