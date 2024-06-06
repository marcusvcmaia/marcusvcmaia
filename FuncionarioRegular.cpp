#include "FuncionarioRegular.hpp"

// Implementação do construtor da classe derivada
FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase) {}

// Sobrescrita do método calcularSalarioTotal
double FuncionarioRegular::calcularSalarioTotal() const {
    return salarioBase;
}