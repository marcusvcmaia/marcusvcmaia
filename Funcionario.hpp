#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>

using namespace std;

// Classe base Funcionario
class Funcionario {
protected:
    string nome;
    int id;
    double salarioBase;

public:
    // Construtor da classe base
    Funcionario(string nome, int id, double salarioBase);

    // Método virtual para polimorfismo
    virtual double calcularSalarioTotal() const;

    // Método virtual para exibir informações
    virtual void exibirInformacoes() const;

    // Destrutor virtual padrão
    virtual ~Funcionario() = default;
};

#endif // FUNCIONARIO_HPP