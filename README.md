# SameGame Tutorial C++ (WebAssembly)

Bem-vindo ao tutorial do **SameGame**! Este projeto é uma evolução do antigo tutor de programação básica, mantendo o mesmo objetivo educacional: ensinar programação e desenvolvimento de jogos na prática passo a passo.

Ao longo deste projeto, vamos recriar o clássico jogo "SameGame" (inspirado num tutorial original de MFC), mas utilizando tecnologias modernas, abertas e multiplataforma: **C++**, a biblioteca gráfica **SDL2** e **WebAssembly (Emscripten)**. Isso permite que o jogo rode de forma nativa e rápida diretamente no seu navegador, utilizando a arquitetura padrão da indústria de jogos: o "Game Loop".

## Estrutura do Curso

O código e as explicações estão divididos em pastas (aulas) progressivas:

* **[Aula 1 - Janela e Tabuleiro Inicial](./aula1_tabuleiro)**: Introdução ao C++ com SDL2, configuração do Emscripten (WebAssembly) e desenho da grade inicial de blocos do jogo.
* *(Mais aulas serão adicionadas em seguida para cobrir a lógica do jogo completa!)*

## Como Compilar e Rodar

Para compilar o código em qualquer uma das pastas, você precisará do **Emscripten (emcc)** instalado, que é o compilador de C++ para WebAssembly.

1. Instale o Emscripten seguindo as [instruções oficiais](https://emscripten.org/docs/getting_started/downloads.html).
2. Entre na pasta da aula que deseja compilar, por exemplo: `cd aula1_tabuleiro`
3. Rode o script de build fornecido (ex: `build.sh` ou `make`).
4. Para visualizar o jogo, inicie um servidor HTTP local na pasta e abra o `index.html` no seu navegador.
   * Você pode usar o Python para isso: `python3 -m http.server` e acessar `http://localhost:8000/index.html`.
