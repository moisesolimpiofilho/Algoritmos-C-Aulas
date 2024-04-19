#include <stdio.h>
#include <stdbool.h>

#define QTDE_LINHAS 3
#define QTDE_COLUNAS 3

int main()
{
    /**
     * Escreva um algoritmo simulando o
     * jogo da velha, considere os valores
     * 0 e 1 para os jogadores.
     * */

    char tabuleiro[3][3] = {
        {'_', '_', '_'},
        {'_', '_', '_'},
        {'_', '_', '_'}};

    bool houveGanhador = false;
    int pe = 0;              // posicaoEscolhida 0 ate 8
    char jogadorAtual = '1'; // 1 ou 2
    int qtdeJogadasDisponiveis = 9; // Controlar caso seja empate

    printf("---Jogo da velha---\n");

    do
    {
        printf("Jogador %c \n", jogadorAtual);
        printf("Escolha uma posicao 1 ate 9: ");
        scanf("%d", &pe);
        pe = pe - 1; // tratando 0 até 8

        // Preenchendo tabuleiro
        if (pe == 0 || pe == 1 || pe == 2)
        {
            // pe0=0, pe1=1, pe2=2
            tabuleiro[0][pe] = jogadorAtual;
        }
        else if (pe == 3 || pe == 4 || pe == 5)
        {
            // pe3=0, pe4=1, pe5=2
            tabuleiro[1][pe - 3] = jogadorAtual;
        }
        else if (pe == 6 || pe == 7 || pe == 8)
        {
            // pe6=0, pe7=1, pe8=2
            tabuleiro[2][pe - 6] = jogadorAtual;
        }

        // Imprime o tabuleiro
        for (int i = 0; i < QTDE_LINHAS; i++)
        {
            for (int z = 0; z < QTDE_COLUNAS; z++)
            {
                printf("%c ", tabuleiro[i][z]);
            }
            printf("\n");
        }

        /**
         * Verifica ganhador, possibilidades
         * Posições Horizontal (0,1,2)  (3,4,5)  (6,7,8)
         * Posições Vertical   (0,3,6)  (1,4,7)  (2,5,8)
         * Posições Diagonal   (0,4,8)  (2,4,6)
         */

        // Posições Horizontal (0,1,2)  (3,4,5)  (6,7,8)
        if (tabuleiro[0][0] == jogadorAtual &&
            tabuleiro[0][1] == jogadorAtual &&
            tabuleiro[0][2] == jogadorAtual)
        {
            houveGanhador = true;
        }
        if (tabuleiro[1][0] == jogadorAtual &&
                 tabuleiro[1][1] == jogadorAtual &&
                 tabuleiro[1][2] == jogadorAtual)
        {
            houveGanhador = true;
        }
        if (tabuleiro[2][0] == jogadorAtual &&
                 tabuleiro[2][1] == jogadorAtual &&
                 tabuleiro[2][2] == jogadorAtual)
        {
            houveGanhador = true;
        } 

        // Posições Vertical   (0,3,6)  (1,4,7)  (2,5,8)
        if (tabuleiro[0][0] == jogadorAtual &&
                 tabuleiro[1][0] == jogadorAtual &&
                 tabuleiro[2][0] == jogadorAtual)
        {
            houveGanhador = true;
        }
        if (tabuleiro[0][1] == jogadorAtual &&
                 tabuleiro[1][1] == jogadorAtual &&
                 tabuleiro[2][1] == jogadorAtual)
        {
            houveGanhador = true;
        }
        if (tabuleiro[0][2] == jogadorAtual &&
                 tabuleiro[1][2] == jogadorAtual &&
                 tabuleiro[2][2] == jogadorAtual)
        {
            houveGanhador = true;
        }

        // Posições Diagonal   (0,4,8)  (2,4,6)
        if (tabuleiro[0][0] == jogadorAtual &&
                 tabuleiro[1][1] == jogadorAtual &&
                 tabuleiro[2][2] == jogadorAtual)
        {
            houveGanhador = true;
        }
        if (tabuleiro[0][2] == jogadorAtual &&
                 tabuleiro[1][1] == jogadorAtual &&
                 tabuleiro[2][0] == jogadorAtual)
        {
            houveGanhador = true;
        }

        // Verifica se houve jogador
        if (houveGanhador == false)
        {
            // Alterna entre jogadores
            if (jogadorAtual == '1')
            {
                jogadorAtual = '2';
            }
            else if (jogadorAtual == '2')
            {
                jogadorAtual = '1';
            }
            qtdeJogadasDisponiveis--;
        }

    } while (houveGanhador == false && qtdeJogadasDisponiveis > 0);

    if (qtdeJogadasDisponiveis == 0) 
    {
        printf("Deu velha :) \n");
    }
    else 
    {
        printf("---Parabens Jogador %c\n", jogadorAtual);
    }    

    return 0;
}