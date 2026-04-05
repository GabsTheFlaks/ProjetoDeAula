// Aula 2: Tomada de Decisão (If / Else)
// Objetivo: Ensinar o computador a tomar decisões com base em condições.

#include <iostream>

using namespace std;

int main() {
    cout << "--- AULA 2: TOMADA DE DECISAO ---" << endl;

    // Vamos reaproveitar a ideia da média da aula passada
    double media_final = 6.5;

    cout << "A media do aluno foi: " << media_final << endl;
    cout << "Verificando situacao do aluno...\n" << endl;

    // A estrutura IF (Se) e ELSE (Senão)
    if (media_final >= 7.0) {
        cout << "Resultado: APROVADO!" << endl;
        cout << "Parabens, voce foi muito bem." << endl;
    }
    else if (media_final >= 5.0) {
        // ELSE IF significa "Senão, Se"
        cout << "Resultado: RECUPERACAO!" << endl;
        cout << "Estude um pouco mais para a prova final." << endl;
    }
    else {
        cout << "Resultado: REPROVADO." << endl;
        cout << "Vamos tentar de novo ano que vem." << endl;
    }

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Modifique o valor da variável 'media_final' para 8.0 e depois para 4.0.
    // Observe qual mensagem o programa imprime na tela em cada caso.
    // ==========================================

    return 0;
}
