#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"

int main() {
    // Criação de objetos de cada tipo de funcionário
    FuncionarioRegular regular("Marcus", 1, 3000);
    Gerente gerente("Vinicius", 2, 5000, 2000);
    Estagiario estagiario("Maia", 3, 3000);

    cout << "Informacoes dos Funcionarios:" << endl;

    cout << "Funcionario Regular: ";
    regular.exibirInformacoes();
    cout << ", Salario Total: " << regular.calcularSalarioTotal() << endl;

    cout << "Gerente: ";
    gerente.exibirInformacoes();
    cout << ", Salario Total: " << gerente.calcularSalarioTotal() << endl;

    cout << "Estagiario: ";
    estagiario.exibirInformacoes();
    cout << ", Salario Total: " << estagiario.calcularSalarioTotal() << endl;

    return 0;
}