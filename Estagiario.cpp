#include "Estagiario.hpp"

// Implementação do construtor da classe derivada
Estagiario::Estagiario(string nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase * 0.8) {}

// Sobrescrita do método calcularSalarioTotal
double Estagiario::calcularSalarioTotal() const {
    return salarioBase;
}