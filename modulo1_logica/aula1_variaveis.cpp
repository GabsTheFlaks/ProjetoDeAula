// Aula 1: Variáveis e Matemática Básica
// Objetivo: Mostrar como o C++ funciona como uma calculadora super poderosa.

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "--- AULA 1: BEM-VINDO AO C++! ---" << endl;
    cout << "Ola, futuro programador(a)!\n" << endl;

    // 1. Variáveis (Guardando informações na memória)
    string nome_aluno;
    double nota_bimestre1;
    double nota_bimestre2;

    // 2. Interação com o usuário (Entrada de Dados)
    cout << "Digite o nome do aluno: ";
    getline(cin, nome_aluno); // Usamos getline para permitir nomes com espaço

    cout << "Digite a nota do 1o bimestre: ";
    cin >> nota_bimestre1; // 'cin' lê o que o usuário digita no teclado

    cout << "Digite a nota do 2o bimestre: ";
    cin >> nota_bimestre2;

    cout << "\nCalculando as notas do aluno: " << nome_aluno << endl;

    // 3. Operações Matemáticas Simples (Lógica aplicada)
    // O computador faz a conta sozinho e guarda o resultado
    double media = (nota_bimestre1 + nota_bimestre2) / 2.0;

    cout << "A media final do aluno e: " << media << endl;

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Execute o programa várias vezes testando notas diferentes
    // e perceba que agora o código é dinâmico e serve para qualquer aluno!
    // ==========================================

    return 0;
}
