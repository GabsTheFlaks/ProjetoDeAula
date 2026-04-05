// Aula 1: Variáveis e Matemática Básica
// Objetivo: Mostrar como o C++ funciona como uma calculadora super poderosa.

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "--- AULA 1: BEM-VINDO AO C++! ---" << endl;
    cout << "Ola, futuro programador(a)!\n" << endl;

    // 1. Variáveis (Guardando informações na memória)
    // Vamos imaginar que estamos calculando a nota de um aluno
    string nome_aluno = "Joaozinho";
    double nota_bimestre1 = 7.5;
    double nota_bimestre2 = 8.0;

    cout << "Calculando as notas do aluno: " << nome_aluno << endl;
    cout << "Nota 1: " << nota_bimestre1 << endl;
    cout << "Nota 2: " << nota_bimestre2 << endl;

    // 2. Operações Matemáticas Simples (Lógica aplicada)
    // O computador faz a conta sozinho e guarda o resultado
    double media = (nota_bimestre1 + nota_bimestre2) / 2.0;

    cout << "A media final do aluno e: " << media << endl;

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Peça para os alunos mudarem as variáveis 'nota_bimestre1' e 'nota_bimestre2'
    // recompilarem o programa e verem a média mudar!
    // ==========================================

    return 0;
}
