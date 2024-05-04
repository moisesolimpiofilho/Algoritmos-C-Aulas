#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define QTDE_NOTAS 3

struct aluno
{
    char nome[20];
    float notas[QTDE_NOTAS];
    float media;
    bool aprovado;
};

float calcula_media_aluno(float notas[QTDE_NOTAS])
{
    float somaNotas = 0;

    for (int i = 0; i < QTDE_NOTAS; i++)
    {
        somaNotas+= notas[i];
    }
    
    return somaNotas / QTDE_NOTAS;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct aluno aluno1;

    printf("---Calcula média do aluno---\n");

    printf("Qual nome do primeiro aluno? ");
    scanf("%s", aluno1.nome);
    
    for (int i = 0; i < QTDE_NOTAS; i++)
    {
        printf("Qual a nota %d do aluno %s? \n", i+1, aluno1.nome);
        scanf("%f", &aluno1.notas[i]);
    }
    
    aluno1.media = calcula_media_aluno(aluno1.notas);

    if (aluno1.media >= 6)
    {
        aluno1.aprovado = true;
    }
    else
    {
        aluno1.aprovado = false;
    }
    
    printf("O aluno %s %s está aprovado \n", aluno1.nome, aluno1.aprovado ? "":"não");

    return 0;
}