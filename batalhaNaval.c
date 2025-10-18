#include <stdio.h>
//nivel novato!
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main (){

int tabuleiro[10][10]={0};//iniciando a matriz com 10x10 com vlor inicial 0

    //posicionando 1 navio que ocupa 3 lugares na horizontal usando loop for {6D,6F,6H}
    for (int n = 0; n < 3; n++) {
        tabuleiro[6][3 + n] = 3; //navio 1
    }
    //posicionando 1 navio que ocupa 3 lugares na vertical usando loop for/{1J,2J,3J}
    for(int m=0;m<3;m++){ 
        tabuleiro[1+m][8]=3;//navio 2
    }
    // posicionado 1 navio que ocupa 3 lugares na diagonal principal usando loop for
    for (int p = 0; p < 3; p++) {
        tabuleiro[1 + p][1 + p] = 3; // navio 3 {1B,2C,3D}
    } 
    // posicionado 1 navio que ocupa 3 lugares na diagonal secundaria usando loop for
    for (int t = 0; t < 3; t++) {
        tabuleiro[9 - t][5 + t] = 3; // navio 4{9G,8H,7I}
    }
printf("mostrando a matriz de ataque em cone\n");
//crando a matriz 5x5 para o ataque em cone usando loop e condicionais
int matrizcone[3][5]={0};
for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(i==1&&j==2||i==1 && j==3||i==1 && j==1){//linha do meio
            matrizcone[i][j]=1;//coluna toda
        }else if(i==0 && j==2){//linha de cima e de baixo
            if(j==1||j==2||j==3){   
                matrizcone[i][j]=1;//coluna do meio e as laterais
            }
        }else if(i==2||i==3){//linha de cima e de baixo extremas
            if(i==2){   
                matrizcone[i][j]=1;//coluna do meio
            }
        }
     printf(" %d ",matrizcone[i][j]);   
    }
     printf("\n");
}
printf("mostrando a de ataque em cruz\n");
//ciando matriz de ataque 3x5 para o ataque em cruz sando loop e condicionais 
 int matrizataquecruz [3][5]={0};
 for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(i==1){
            matrizataquecruz[i][j]=2;
        }else if(j==2){
              matrizataquecruz[i][j]=2;  
        } 
         printf(" %d ",matrizataquecruz[i][j]);
    }
  printf("\n");
 }

printf("mostrando a matriz de ataque em octaedro\n");
 ////crando a matriz 5x5 para o ataque em Octaedro usando loop for
int matrizdeataqueemoctaedro[3][5]={0};
for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(j==2){  matrizdeataqueemoctaedro[i][j]=4;//coluna do meio       
           } 
             else if(i==1&&j==1||i==1&&j==3){//linha de cima e de baixo
                matrizdeataqueemoctaedro[i][j]=4;//coluna do meio e as laterais   
        }
       printf(" %d ",matrizdeataqueemoctaedro[i][j]); 
    }printf("\n");
}
//colocando as matrizes cone,cruz e Octaedro dentro do tabuleiro
//cone
int linhainicial=0,colunainical=3;
for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(matrizcone[i][j]==1){
            tabuleiro[linhainicial+i][colunainical+j]=1;
        }
    }
}
//cruz
linhainicial=7,colunainical=0;
for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(matrizataquecruz[i][j]==2){
            tabuleiro[linhainicial+i][colunainical+j]=2;
        }
    }
}
//Octaedro
linhainicial=4,colunainical=0;
for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        if(matrizdeataqueemoctaedro[i][j]==4){
            tabuleiro[linhainicial+i][colunainical+j]=4;
        }
    }
}    
//mostrando o tabuleiro com os navios e areas de ataque!
printf("mosntrando o tabuleiro\n");
    printf("  A  B  C  D  F  G  H  I  J  K\n");
    for (int i = 0; i < 10; i++) {
        printf("%d",i);//logica do tabuleiro
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 3) {//logica par pocisionar navios
                printf(" 3 "); // navio
            }else if(tabuleiro[i][j]==1){
                printf(" 1 ");
            }else if(tabuleiro[i][j]==2){
                printf(" 2 ");
            }else if(tabuleiro[i][j]==4){
                printf(" 4 ");
            }
             else {
                printf(" 0 "); // água
            }
        }
        printf("\n");
    }  
   printf("\n");
    printf(" Água  = 0\n Cone  = 1\n Cruz  = 2\n Navio = 3\nOctaedro  = 4\n");
    return 0;
}
