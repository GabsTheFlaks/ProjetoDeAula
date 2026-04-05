// Aula 5: Visualização de Dados (Gráficos no Terminal)
// Objetivo: Como desenhar "gráficos de barras" simples usando texto para entender os números.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "--- AULA 5: VISUALIZACAO DE DADOS NO TERMINAL ---" << endl;
    cout << "Grafico de Gastos da Cantina\n" << endl;

    // 1. Vetores (Guardando informações dos meses e dos gastos)
    vector<string> meses = {"Jan", "Fev", "Mar", "Abr", "Mai"};
    vector<int> gastos_cantina;

    // Perguntando ao usuário quanto ele gastou em cada mês
    cout << "Vamos analisar seus gastos neste semestre!" << endl;
    for (int i = 0; i < meses.size(); i++) {
        int gasto;
        cout << "Quanto voce gastou na cantina em " << meses[i] << "? R$";
        cin >> gasto;
        gastos_cantina.push_back(gasto);
    }

    cout << "\nGerando grafico...\n" << endl;

    // 2. Desenhando o Gráfico de Barras com Texto (ASCII Art)
    // Para cada mês, vamos imprimir um bloco correspondente ao valor gasto.

    for (int i = 0; i < meses.size(); i++) {
        // Imprime o nome do mês
        cout << meses[i] << " | ";

        // Imprime a "barra" do gráfico
        // Para não ficar muito grande, vamos dividir o gasto por 2 para desenhar os blocos
        int tamanho_barra = gastos_cantina[i] / 2;

        for (int bloco = 0; bloco < tamanho_barra; bloco++) {
            cout << "█";
        }

        // Imprime o valor exato no final da barra
        cout << " R$" << gastos_cantina[i] << endl;
    }

    cout << "    ------------------------------------------------" << endl;
    cout << "      (Cada bloco representa aprox. R$ 2,00)" << endl;

    // ==========================================
    // EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
    // Execute o programa e coloque um mês com um gasto muito alto (ex: 200).
    // O que acontece com as barras gráficas na tela?
    // ==========================================

    return 0;
}
