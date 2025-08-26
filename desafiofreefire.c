#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()

int main() {
    // Configuração inicial
    srand(time(0)); // Inicializa o gerador de números aleatórios

    int pontuacao = 0;
    int tempoTotal = 30; // Jogo dura 30 segundos, por exemplo
    time_t startTime = time(0); // Marca o tempo de início

    std::cout << "=== FREE FIRE - TARGET PRACTICE ===" << std::endl;
    std::cout << "Acabe com todos os terroristas!" << std::endl;
    std::cout << "Digite as coordenadas X e Y para atirar (0-9)." << std::endl;

    // Loop principal do jogo
    while (difftime(time(0), startTime) < tempoTotal) {
        // 1. Gera um novo alvo em uma posição aleatória
        int alvoX = rand() % 10; // Gera número entre 0 e 9
        int alvoY = rand() % 10;

        // 2. Informa ao jogador
        std::cout << "\n--- Novo alvo avistado! ---" << std::endl;
        // (Aqui poderia ter uma descrição textual: "Um inimigo na colina!")

        // 3. Pega a entrada do jogador
        int tiroX, tiroY;
        std::cout << "Digite a coordenada X (0-9): ";
        std::cin >> tiroX;
        std::cout << "Digite a coordenada Y (0-9): ";
        std::cin >> tiroY;

        // 4. Verifica se acertou
        if (tiroX == alvoX && tiroY == alvoY) {
            std::cout << "HEADSHOT! Inimigo eliminado! +10 pontos." << std::endl;
            pontuacao += 10;
        } else {
            std::cout << "Errou! O inimigo estava em [" << alvoX << ", " << alvoY << "]" << std::endl;
        }

        // 5. Mostra pontuação e tempo restante
        int tempoRestante = tempoTotal - difftime(time(0), startTime);
        std::cout << "Pontuacao: " << pontuacao << " | Tempo restante: " << tempoRestante << "s" << std::endl;
    }

    // Fim de jogo
    std::cout << "\n=== FIM DE JOGO ===" << std::endl;
    std::cout << "Sua pontuacao final: " << pontuacao << " pontos!" << std::endl;

    return 0;
}
