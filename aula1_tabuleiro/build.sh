#!/bin/bash

# Diretório de saída
OUT_DIR="build"
mkdir -p $OUT_DIR

# Compilar com Emscripten
# Usamos -s USE_SDL=2 para incluir SDL2 nativamente no Emscripten
emcc main.cpp -s USE_SDL=2 -o $OUT_DIR/index.html

echo "Compilação concluída!"
echo "Para testar, rode um servidor HTTP no diretório $OUT_DIR (ex: python3 -m http.server) e abra index.html no navegador."
