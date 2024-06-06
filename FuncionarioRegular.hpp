#ifndef FUNCIONARIOREGULAR_HPP
#define FUNCIONARIOREGULAR_HPP

#include "Funcionario.hpp"

// Classe derivada FuncionarioRegular
class FuncionarioRegular : public Funcionario {
public:
    // Construtor da classe derivada
    FuncionarioRegular(string nome, int id, double salarioBase);

    // Sobrescrita do método calcularSalarioTotal
    double calcularSalarioTotal() const override;
};

#endif // FUNCIONARIOREGULAR_HPP