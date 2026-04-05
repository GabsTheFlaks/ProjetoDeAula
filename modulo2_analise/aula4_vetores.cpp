// Aula 4: Vetores (Arrays) e Estatística Básica
// Objetivo: Como guardar vários dados juntos e analisá-los de forma simples.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "--- AULA 4: VETORES E ESTATISTICA ---" << endl;

    // Um VETOR serve para guardar várias informações em uma só variável.
    vector<double> notas_turma;
    int quantidade_alunos;

    cout << "Quantos alunos tem na turma? Digite: ";
    cin >> quantidade_alunos;

    // Preenchendo o vetor usando um loop
    for (int i = 0; i < quantidade_alunos; i++) {
        double nota;
        cout << "Digite a nota do aluno " << (i + 1) << ": ";
        cin >> nota;
        notas_turma.push_back(nota); // Guarda a nota dentro do vetor
    }

    cout << "\nNotas registradas no sistema: ";
    for (int i = 0; i < notas_turma.size(); i++) {
        cout << notas_turma[i] << " ";
    }
    cout << endl;

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
    // Rode o programa dizendo que a turma tem apenas 2 alunos e digite notas diferentes.
    // Rode de novo para 5 alunos. O código funciona sem precisarmos mudar nenhuma linha!
    // ==========================================

    return 0;
}
