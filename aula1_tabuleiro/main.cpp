#include <SDL2/SDL.h>
#include <vector>
#include <cstdlib>
#include <ctime>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

// Constantes do jogo
const int ROWS = 15;
const int COLS = 15;
const int BLOCK_SIZE = 35;
const int SCREEN_WIDTH = COLS * BLOCK_SIZE;
const int SCREEN_HEIGHT = ROWS * BLOCK_SIZE;

// Cores dos blocos
enum Color { RED, GREEN, BLUE, YELLOW, PURPLE, EMPTY };

SDL_Color GetSDLColor(Color color) {
    switch (color) {
        case RED: return {255, 0, 0, 255};
        case GREEN: return {0, 255, 0, 255};
        case BLUE: return {0, 0, 255, 255};
        case YELLOW: return {255, 255, 0, 255};
        case PURPLE: return {128, 0, 128, 255};
        default: return {0, 0, 0, 255}; // EMPTY
    }
}

class Game {
public:
    Game() : window(nullptr), renderer(nullptr), isRunning(false) {}

    bool Initialize() {
        if (SDL_Init(SDL_INIT_VIDEO) != 0) {
            return false;
        }

        window = SDL_CreateWindow("SameGame - Aula 1",
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED,
                                  SCREEN_WIDTH, SCREEN_HEIGHT,
                                  0);
        if (!window) return false;

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if (!renderer) return false;

        srand(time(NULL));
        board.resize(ROWS, std::vector<Color>(COLS, EMPTY));

        // Inicializar tabuleiro com cores aleatórias
        for (int r = 0; r < ROWS; ++r) {
            for (int c = 0; c < COLS; ++c) {
                board[r][c] = static_cast<Color>(rand() % 5);
            }
        }

        isRunning = true;
        return true;
    }

    void ProcessInput() {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                isRunning = false;
            }
            // Por enquanto não vamos processar cliques no tabuleiro, será na aula 2
        }
    }

    void Update() {
        // Lógica de atualização do jogo (nenhuma na aula 1)
    }

    void Render() {
        // Limpa a tela com fundo cinza escuro
        SDL_SetRenderDrawColor(renderer, 50, 50, 50, 255);
        SDL_RenderClear(renderer);

        // Desenhar o tabuleiro
        for (int r = 0; r < ROWS; ++r) {
            for (int c = 0; c < COLS; ++c) {
                Color color = board[r][c];
                if (color != EMPTY) {
                    SDL_Color sdlColor = GetSDLColor(color);
                    SDL_SetRenderDrawColor(renderer, sdlColor.r, sdlColor.g, sdlColor.b, sdlColor.a);

                    SDL_Rect blockRect;
                    blockRect.x = c * BLOCK_SIZE;
                    blockRect.y = r * BLOCK_SIZE;
                    blockRect.w = BLOCK_SIZE;
                    blockRect.h = BLOCK_SIZE;

                    SDL_RenderFillRect(renderer, &blockRect);

                    // Desenhar borda preta para separar os blocos (estilo clássico do Windows)
                    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                    SDL_RenderDrawRect(renderer, &blockRect);

                    // Um pequeno destaque para simular "botões" 3D (borda clara em cima e na esquerda)
                    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 100);
                    SDL_RenderDrawLine(renderer, blockRect.x, blockRect.y, blockRect.x + blockRect.w - 1, blockRect.y);
                    SDL_RenderDrawLine(renderer, blockRect.x, blockRect.y, blockRect.x, blockRect.y + blockRect.h - 1);
                }
            }
        }

        SDL_RenderPresent(renderer);
    }

    void Shutdown() {
        if (renderer) SDL_DestroyRenderer(renderer);
        if (window) SDL_DestroyWindow(window);
        SDL_Quit();
    }

    bool Running() const { return isRunning; }

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;
    std::vector<std::vector<Color>> board;
};

Game game;

void MainLoop() {
    game.ProcessInput();
    game.Update();
    game.Render();

#ifdef __EMSCRIPTEN__
    if (!game.Running()) {
        emscripten_cancel_main_loop();
    }
#endif
}

int main() {
    if (!game.Initialize()) {
        return 1;
    }

#ifdef __EMSCRIPTEN__
    emscripten_set_main_loop(MainLoop, 0, 1);
#else
    while (game.Running()) {
        MainLoop();
        SDL_Delay(16); // Aproximadamente 60 FPS
    }
#endif

    game.Shutdown();
    return 0;
}
