#include <stdio.h>
#include <stdlib.h>


/*
Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte se deseja jogar novamente

|   |   |
---------
|   |   |
---------
|   |   |

*/


int main(int argc, char const *argv[])
{
    //Estrutura de dados
    int l,c, linha, coluna, jogador, ganhou, jogadas, opcao;
    char jogo[3][3];


    do{
        jogador =1;
        ganhou = 0;
        jogadas = 0;
        //Como inicializar nossa estrutura de dados?
        for(l=0; l < 3 ; l++){
            for(c=0; c < 3; c++){
                jogo[l][c] = ' ';
            }
        }

        do{//Repete até alguem ganhar ou atingir 9 jogadas
            //Imprimir jogo
            printf("\n\n\t 0   1   2\n\n");
            for(l=0; l < 3 ; l++){
                for(c=0; c < 3; c++){
                    if(c == 0){
                        printf("\t");
                    }
                    printf(" %c ", jogo[l][c]);
                    if(c < 2){
                        printf("|");
                    }
                    if (c == 2){
                        printf("  %d", l);
                    }
                    
                }
                if(l < 2){
                    printf("\n\t-----------");
                }
                printf("\n");
                
            }

            //Ler coordenadas
            do{
                printf("\nJOGADOR 1 = O\nJOGADOR 2 = X\n");
                printf("\nJOGADOR %d: Digite a linha e coluna que deseja jogar: ", jogador);
                scanf("%d%d", &linha, &coluna);
                

            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            
            
            //Salvar coordenadas
            if(jogador == 1){
                jogo[linha][coluna] = 'O';
                jogador++;

            }else{
                jogo[linha][coluna] = 'X';
                jogador = 1;
            }
            jogadas++;

            //Limpa a tela depois que o jogador 1 ou 2 jogarem(somente para windows)
            system("cls");
            

            //Verificar se alguem ganhou por linha
            if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' || 
            jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
            jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nParabens! O jogador 1 venceu por linha!\n");
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' || 
            jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
            jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nParabens! O jogador 2 venceu por linha!\n");
                ganhou = 1;
            }
            //Verificar se alguem ganhou por coluna
            if(jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' || 
            jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
            jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){
                printf("\nParabens! O jogador 1 venceu por coluna!\n");
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' || 
            jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
            jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf("\nParabens! O jogador 2 venceu por coluna!\n");
                ganhou = 1;
            }

            //Verificar se alguem ganhou na diagonal principal
            if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
                printf("\nParabens! O jogador 1 venceu por coluna na diag. principal!\n");
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
                printf("\nParabens! O jogador 2 venceu por coluna na diag. principal!\n");
                ganhou = 1;
            }

            //Verificar se alguem ganhou na diagonal secundaria
            if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){
                printf("\nParabens! O jogador 1 venceu por coluna na diag. secundaria!\n");
                ganhou = 1;
            }

            if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
                printf("\nParabens! O jogador 1 venceu por coluna na diag. secundaria!\n");
                ganhou = 1;
            }
        }while(ganhou == 0 && jogadas < 9);

        //Imprimir o jogo
        printf("\n\n\t 0   1   2\n\n");
            for(l=0; l < 3 ; l++){
                for(c=0; c < 3; c++){
                    if(c == 0){
                        printf("\t");
                    }
                    printf(" %c ", jogo[l][c]);
                    if(c < 2){
                        printf("|");
                    }
                    if (c == 2){
                        printf("  %d", l);
                    }
                    
                }
                if(l < 2){
                    printf("\n\t-----------");
                }
                printf("\n");
                
            }

        if(ganhou == 0){
            printf("\nO jogo finalizou sem ganhador\n");
        }
        printf("\nDigite 1 para jogar novamente: \n");
        scanf("%d", &opcao);
    }while(opcao == 1);

    return 0;
}