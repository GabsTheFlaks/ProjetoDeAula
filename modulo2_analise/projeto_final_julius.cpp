#include <iostream>
#include <string>
#include <cctype> // Necessário para a função toupper()

using namespace std;

int main() {
    string nome;
    int pontuacao = 0;
    const int TOTAL_PERGUNTAS = 4;
    const int TOTAL_OPCOES = 3;

    string perguntas[TOTAL_PERGUNTAS] = {
        "1. Qual comando usamos em C++ para mostrar algo na tela?",
        "2. Qual tipo de variavel usamos para guardar numeros inteiros?",
        "3. Qual estrutura usamos para tomar uma decisao (se/senao)?",
        "4. Qual comando usamos para repetir uma acao varias vezes?"
    };

    string opcoes[TOTAL_PERGUNTAS][TOTAL_OPCOES] = {
        {"A) std::cin", "B) std::cout", "C) std::print"},
        {"A) int", "B) float", "C) string"},
        {"A) for", "B) while", "C) if/else"},
        {"A) if", "B) for", "C) int"}
    };

    char respostasCorretas[TOTAL_PERGUNTAS] = {'B', 'A', 'C', 'B'};

    cout << "====================================================\n";
    cout << "           BEM-VINDO AO JULIUS TUTOR!               \n";
    cout << "====================================================\n\n";

    cout << "Ola! Eu sou o Julius, seu tutor virtual de C++.\n";
    cout << "Qual e o seu nome? ";
    cin >> nome;

    cout << "\nMuito prazer, " << nome << "! Vamos testar o que voce aprendeu.\n";
    cout << "Responda com as letras A, B ou C.\n\n";

    for (int i = 0; i < TOTAL_PERGUNTAS; i++) {
        cout << perguntas[i] << "\n";
        for (int j = 0; j < TOTAL_OPCOES; j++) {
            cout << opcoes[i][j] << "\n";
        }

        cout << "Sua resposta: ";
        char respostaUsuario;
        cin >> respostaUsuario;

        respostaUsuario = toupper(respostaUsuario);

        if (respostaUsuario == respostasCorretas[i]) {
            cout << "=> Certa resposta! Muito bem.\n\n";
            pontuacao++;
        } else {
            cout << "=> Ops, resposta errada. A correta era a letra " << respostasCorretas[i] << ".\n\n";
        }
    }

    cout << "====================================================\n";
    cout << "                  RESULTADO FINAL                   \n";
    cout << "====================================================\n\n";

    cout << nome << ", voce acertou " << pontuacao << " de " << TOTAL_PERGUNTAS << " perguntas.\n\n";

    int erros = TOTAL_PERGUNTAS - pontuacao;

    cout << "--- GRAFICO DE DESEMPENHO ---\n\n";

    cout << "Acertos (" << pontuacao << "): ";
    for (int i = 0; i < pontuacao; i++) {
        cout << "\u2588\u2588\u2588";
    }
    cout << "\n";

    cout << "Erros   (" << erros << "): ";
    for (int i = 0; i < erros; i++) {
        cout << "\u2588\u2588\u2588";
    }
    cout << "\n\n";

    if (pontuacao == TOTAL_PERGUNTAS) {
        cout << "Incrivel! Voce gabaritou! Parabens pelo seu esforco!\n";
    } else if (pontuacao >= TOTAL_PERGUNTAS / 2) {
        cout << "Muito bom! Voce esta no caminho certo. Continue estudando.\n";
    } else {
        cout << "Nao desanime! A programacao exige pratica. Tente novamente!\n";
    }

    cout << "\nObrigado por jogar com os universitarios.\n";

    return 0;
}
