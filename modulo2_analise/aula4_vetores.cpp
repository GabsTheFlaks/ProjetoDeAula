// Aula 4: Vetores (Arrays) e Estatística Básica
// Objetivo: Como guardar vários dados juntos e analisá-los de forma simples.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "--- AULA 4: VETORES E ESTATISTICA ---" << endl;

    // Um VETOR serve para guardar várias informações em uma só variável.
    // Vamos imaginar as notas de uma turma:
    vector<double> notas_turma = {7.5, 8.0, 5.5, 9.2, 4.0, 6.8, 10.0};

    cout << "Notas registradas no sistema: ";
    for (int i = 0; i < notas_turma.size(); i++) {
        cout << notas_turma[i] << " ";
    }
    cout << endl;

    // Quantos alunos fizeram a prova?
    int quantidade_alunos = notas_turma.size();
    cout << "\nQuantidade de alunos na turma: " << quantidade_alunos << endl;

    // Estatísticas básicas: Somando todas as notas
    double soma_das_notas = 0;
    double maior_nota = notas_turma[0];
    double menor_nota = notas_turma[0];

    for (int i = 0; i < quantidade_alunos; i++) {
        soma_das_notas += notas_turma[i];

        if (notas_turma[i] > maior_nota) maior_nota = notas_turma[i];
        if (notas_turma[i] < menor_nota) menor_nota = notas_turma[i];
    }

    // Média da turma (Soma total dividida pela quantidade)
    double media_da_turma = soma_das_notas / quantidade_alunos;

    cout << "Media geral da turma: " << media_da_turma << endl;
    cout << "A maior nota foi: " << maior_nota << endl;
    cout << "A menor nota foi: " << menor_nota << endl;

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Adicione mais 3 notas no vetor 'notas_turma' e veja como a média muda!
    // ==========================================

    return 0;
}
