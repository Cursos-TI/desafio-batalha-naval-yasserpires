#include <stdio.h>
//nivel novato!
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main (){

int tabuleiro[10][10]={0};//iniciando a matriz com 10x10 com vlor inicial 0

//posicionando 1 navio que opcupa 3 lugares na horizontal sem usar loop
//tabuleiro[6][3] = 3; tabuleiro[6][4] = 3; tabuleiro[6][5] = 3; // navio 1

//posicionando 1 navio que opcupa 3 lugares na vertical sem usar loop
//tabuleiro[1][8]=3; tabuleiro[2][8]=3;tabuleiro[3][8]=3; //navio 2

    //posicionando 1 navio que ocupa 3 lugares na horizontal usando loop for {6D,6F,6H}
    for (int n = 0; n < 3; n++) {
        tabuleiro[6][3 + n] = 3; //navio 1
    }
    //posicionando 1 navio que ocupa 3 lugares na vertical usando loop for/{1J,2J,3J}
    for(int m=0;m<3;m++){ 
        tabuleiro[1+m][8]=3;//navio 2
    }
        //posicionado 1 navio que ocupa 3 lugares na diagonal principal sem usar lopp;
    //tabuleiro[1][1] = 3; tabuleiro[2][2] = 3; tabuleiro[3][3] = 3; // navio 3 

    // posicionado 1 navio que ocupa 3 lugares na diagonal secundaria sem usar loop;
    // tabuleiro[9][5] = 3; tabuleiro[8][6] = 3; tabuleiro[7][7] = 3; //navio 4
    
    // posicionado 1 navio que ocupa 3 lugares na diagonal principal usando loop for
    for (int p = 0; p < 3; p++) {
        tabuleiro[1 + p][1 + p] = 3; // navio 3 {1B,2C,3D}
    } 

    // posicionado 1 navio que ocupa 3 lugares na diagonal secundaria usando loop for
    for (int t = 0; t < 3; t++) {
        tabuleiro[9 - t][5 + t] = 3; // navio 4{9G,8H,7I}
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
