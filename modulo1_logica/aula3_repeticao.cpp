// Aula 3: Estruturas de Repetição (Loops)
// Objetivo: Como automatizar tarefas repetitivas sem copiar e colar código.

#include <iostream>

using namespace std;

int main() {
    cout << "--- AULA 3: REPETICOES (LOOPS) ---" << endl;

    // Imagina que você quer contar até 5.
    // Você poderia escrever cout << 1, cout << 2... mas isso dá muito trabalho.

    cout << "\nContando com o FOR (Para cada passo):" << endl;

    // O loop FOR (inicialização; condição; incremento)
    for (int numero = 1; numero <= 5; numero++) {
        cout << "Numero da chamada: " << numero << endl;
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
