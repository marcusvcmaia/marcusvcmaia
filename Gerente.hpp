#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

// Classe derivada Gerente
class Gerente : public Funcionario {
private:
    double bonusAnual;

public:
    // Construtor da classe derivada com sobrecarga
    Gerente(string nome, int id, double salarioBase, double bonusAnual);

    // Sobrescrita do método calcularSalarioTotal
    double calcularSalarioTotal() const override;

    // Sobrescrita do método exibirInformacoes
    void exibirInformacoes() const override;
};

#endif // GERENTE_HPP