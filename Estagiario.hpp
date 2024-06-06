#ifndef ESTAGIARIO_HPP
#define ESTAGIARIO_HPP

#include "Funcionario.hpp"

// Classe derivada Estagiario
class Estagiario : public Funcionario {
public:
    // Construtor da classe derivada
    Estagiario(string nome, int id, double salarioBase);

    // Sobrescrita do método calcularSalarioTotal
    double calcularSalarioTotal() const override;
};

#endif // ESTAGIARIO_HPP