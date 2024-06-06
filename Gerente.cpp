#include "Gerente.hpp"

// Implementação do construtor da classe derivada
// Este construtor é uma sobrecarga pois aceita parâmetros adicionais
Gerente::Gerente(string nome, int id, double salarioBase, double bonusAnual)
    : Funcionario(nome, id, salarioBase), bonusAnual(bonusAnual) {}

// Sobrescrita do método calcularSalarioTotal
double Gerente::calcularSalarioTotal() const {
    return salarioBase + bonusAnual;
}

// Sobrescrita do método exibirInformacoes
void Gerente::exibirInformacoes() const {
    Funcionario::exibirInformacoes();
    cout << ", Bonus Anual: " << bonusAnual;
}