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
    vector<int> gastos_cantina = {20, 45, 15, 60, 30}; // Valores inteiros simplificados

    // 2. Desenhando o Gráfico de Barras com Texto (ASCII Art)
    // Para cada mês, vamos imprimir um bloco (ex: '=') correspondente ao valor gasto.

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
    // Altere os valores no vetor 'gastos_cantina' e execute o programa
    // para ver como a barra gráfica aumenta ou diminui magicamente!
    // ==========================================

    return 0;
}
