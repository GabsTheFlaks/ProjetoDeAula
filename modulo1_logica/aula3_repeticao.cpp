// Aula 3: Estruturas de Repetição (Loops)
// Objetivo: Como automatizar tarefas repetitivas sem copiar e colar código.

#include <iostream>
#include <string> // Necessário para a variável string e o getline

using namespace std;

int main() {
    cout << "--- AULA 3: REPETICOES (LOOPS) ---" << endl;

    // O que é um Loop? É fazer o computador repetir o trabalho pesado para você!

    string palavra_repetida;
    int vezes;

    cout << "Digite uma palavra ou texto (ex: Chamada, Pular, Bater palma): ";
    getline(cin, palavra_repetida);

    cout << "Quantas vezes voce quer repetir isso? Digite um numero: ";
    cin >> vezes;

    cout << "\n>>> ATENCAO! O loop FOR vai iniciar agora, repetindo '" << palavra_repetida << "' exatamente " << vezes << " vezes! <<<\n" << endl;

    // O loop FOR (inicialização; condição; incremento)
    for (int numero = 1; numero <= vezes; numero++) {
        cout << numero << " - " << palavra_repetida << endl;
    }

    cout << "\n-------------------" << endl;

    // Outro exemplo: Tabuada interativa!
    int numero_da_tabuada;
    cout << "Voce quer a tabuada de qual numero? Digite: ";
    cin >> numero_da_tabuada;

    cout << "\n--- Tabuada do " << numero_da_tabuada << " ---" << endl;

    for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
        int resultado = numero_da_tabuada * multiplicador;
        cout << numero_da_tabuada << " x " << multiplicador << " = " << resultado << endl;
    }

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Tente rodar o programa e pedir a tabuada de números grandes, como 255!
    // O computador faz isso em um piscar de olhos graças ao 'for'.
    // ==========================================

    return 0;
}
