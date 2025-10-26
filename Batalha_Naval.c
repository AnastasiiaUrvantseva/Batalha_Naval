#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    //Criando o Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];

    //Preenchendo o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Posicionando os navios
    //Navio horizontal (tamanho 3)
    int linhaH = 2;  // começa na linha 3 (índice 2)
    int colunaH = 4; // começa na coluna C (índice 4)
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    //Navio vertical (tamanho 3)
    int linhaV = 5;  // começa na linha 6 (índice 5)
    int colunaV = 8; // começa na coluna H (índice 8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    //Navio diagonal 1 (tamanho 3)
    int linhaD = 2;  // começa na linha 3 (índice 2)
    int colunaD = 1; // começa na coluna A (índice 1)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD - i][colunaD + i] = 3;
    }

    //Navio diagonal 2 (tamanho 4)
    int linhaDi = 5;  // começa na linha 6 (índice 5)
    int colunaDi = 1; // começa na coluna A (índice 1)
    for (int i = 0; i < 4; i++) {
        tabuleiro[linhaDi + i][colunaDi + i] = 3;
    }

    //Exibindo o Tabuleiro
    printf("   TABULEIRO BATALHA NAVAL\n\n");

    //Cabeçalho com letras
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    //Linhas numeradas com os valores
    for (int i = 0; i < 10; i++) {
        if (i < 9)
            printf(" %d ", i + 1);
        else
            printf("%d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

