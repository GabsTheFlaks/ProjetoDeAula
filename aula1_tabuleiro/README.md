# SameGame - Aula 1: Tabuleiro Inicial

Nesta primeira aula, configuramos o ambiente gráfico para o jogo utilizando **C++**, **SDL2** e o compilador **WebAssembly** Emscripten.

O tutorial original do SameGame utilizava a biblioteca `MFC` exclusiva do Windows, juntamente com o padrão arquitetural `Document/View`. Para tornar este projeto moderno e multiplataforma, adotamos o clássico padrão da indústria de jogos: o **Game Loop**.

A classe `Game` do código (`main.cpp`) implementa exatamente este padrão, que é composto de três etapas em um loop contínuo:
1. `ProcessInput()`: Lida com eventos do jogador (cliques do mouse, fechar a janela).
2. `Update()`: Atualiza a lógica do jogo (nesta aula ainda não há lógica).
3. `Render()`: Desenha tudo na tela.

## Como funciona o código

- **Inicialização (`Initialize`)**: Criamos a janela e o renderizador da tela com SDL.
- **A Grade do Jogo (`board`)**: Representamos o tabuleiro de 15x15 blocos através de uma Matriz Bidimensional (`std::vector<std::vector<Color>>`).
- **Gerando Blocos Aleatórios**: Preenchemos o tabuleiro sorteando números aleatórios (`rand() % 5`) para escolher uma cor (Vermelho, Verde, Azul, Amarelo ou Roxo).
- **Desenhando o Jogo (`Render`)**: Percorremos essa matriz e, para cada bloco não-vazio, usamos o SDL para desenhar um retângulo colorido, colocando uma borda para simular aquele aspecto tridimensional ou "botão" clássico visto no tutorial original.
- **O Loop Infinito**: O Emscripten exige que registremos a função principal do jogo com `emscripten_set_main_loop`. É ela que vai ser chamada infinitamente pelo navegador!

## Como Compilar

Execute o script `build.sh` que está nesta pasta. Ele chama o compilador `emcc` do Emscripten, embutindo a biblioteca gráfica do SDL2 com a flag `-s USE_SDL=2`.

```bash
./build.sh
```

Os arquivos finais serão gerados dentro da pasta `build/` (`index.html`, `index.js`, e `index.wasm`). Você pode usar um servidor HTTP local para ver a janela e os blocos coloridos!