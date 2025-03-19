#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define tamanho 10

void Iniciartabuleiro (int tabuleiro[tamanho][tamanho]) {
    for (int i = 0; i < tamanho ; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            tabuleiro[i][j] = 0; //inicializar com 0 (água)
            printf ("%d " , tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void Posicionarnavio (int tabuleiro[tamanho][tamanho])
{
    int navio[3] = {1, 1, 1};
    int linha = 2;
    int coluna = 3;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha][coluna + i] = navio[i];
        printf("%d ", navio);
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    
    int tabuleiro [tamanho][tamanho];

    Iniciartabuleiro (tabuleiro);

    Posicionarnavio(tabuleiro);


    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
