#include <stdio.h>
//nivel novato!
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main (){

int tabuleiro[10][10]={0};//iniciando a matriz com 10x10 com vlor inicial 0

//tabuleiro[4][2] = 3; tabuleiro[4][3] = 3; tabuleiro[4][4] = 3; // navio 1

for (int n = 0; n < 3; n++) {
        tabuleiro[6][3 + n] = 3; // navio 2 horizontal/{6D,6F,6H}   
    }
    for(int m=0;m<3;m++){
        tabuleiro[1+m][8]=3;//navio 3 vertical/{1J,2J,3J}
    }
//msotrando o tabuleiro com os navios!
printf("mosntrando o tabuleiro\n");
    printf("  A  B  C  D  F  G  H  I  J  K\n");
    for (int i = 0; i < 10; i++) {
        printf("%d",i);//logic do taabuleiro
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 3) {//logica par pocisionar navios
                printf(" 3 "); // navio
            } else {
                printf(" 0 "); // água
            }
        }
        printf("\n");
    }  


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
