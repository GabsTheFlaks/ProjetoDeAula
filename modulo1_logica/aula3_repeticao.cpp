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

    // Outro exemplo: Tabuada!
    int numero_da_tabuada = 7;
    cout << "Tabuada do " << numero_da_tabuada << ":" << endl;

    for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
        int resultado = numero_da_tabuada * multiplicador;
        cout << numero_da_tabuada << " x " << multiplicador << " = " << resultado << endl;
    }

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Altere a variável 'numero_da_tabuada' para criar a tabuada do 9!
    // ==========================================

    return 0;
}
