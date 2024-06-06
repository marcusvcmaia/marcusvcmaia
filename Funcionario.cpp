#include "Funcionario.hpp"

// Implementação do construtor da classe base
Funcionario::Funcionario(string nome, int id, double salarioBase)
    : nome(nome), id(id), salarioBase(salarioBase) {}

// Implementação do método calcularSalarioTotal
// Este método pode ser sobrescrito nas classes derivadas
double Funcionario::calcularSalarioTotal() const {
    return salarioBase;
}

// Implementação do método exibirInformacoes
// Este método pode ser sobrescrito nas classes derivadas
void Funcionario::exibirInformacoes() const {
    cout << "Nome: " << nome << ", ID: " << id << ", Salario Base: " << salarioBase;
}