#include <stdio.h>

void monvimentarPeca(int qtd, char peca[20], char direcao[20]) {
    if(qtd > 0) {
        if (peca != "Torre" && peca != "Bispo" && peca != "Rainha" && peca != "Cavalo") {
            printf("Peça inválida\n");
            return;
        }
        if (direcao != "Cima" && direcao != "Baixo" && direcao != "Esquerda" && direcao != "Direita") {
            printf("Direção inválida\n");
            return;
        }

        printf("Movimentando %s para %s\n", peca, direcao);
        monvimentarPeca(qtd - 1, peca, direcao);
    }

}

int main() {
    printf("-------Iniciando movimentação do Bispo-------\n");
    for (int i = 1; i <= 5; i++) {
        monvimentarPeca(1, "Bispo", "Cima");
        monvimentarPeca(1, "Bispo", "Direita");
    }

    printf("-------Iniciando movimentação da Torre-------\n");
    monvimentarPeca(5, "Torre", "Direita");
    

    printf("-------Iniciando movimentação da Rainha-------\n");
    monvimentarPeca(8, "Rainha", "Esquerda");

    printf("-------Iniciando movimentação do cavalo-------\n");
    monvimentarPeca(2, "Cavalo", "Cima");
    monvimentarPeca(1, "Cavalo", "Direita");

    return 0;
}

