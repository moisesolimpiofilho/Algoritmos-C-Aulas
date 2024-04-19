#include <stdio.h>
#include <locale.h>

#define QTDE_LINHAS 3
#define QTDE_COLUNAS 2

int main()
{
    /**
    * Crie uma matriz de 3x2 onde cada linha é referente as notas do aluno 
    * (prova1 e prova2), essas notas devem ser digitadas pelo usuário. 
    * Considere que para ser aprovado o aluno precisa ter média maior ou igual à 6.0. 
    * Mostre ao final a quantidade de alunos aprovados e reprovados
    */
    setlocale(LC_ALL, "Portuguese");

    float notas[QTDE_LINHAS][QTDE_LINHAS];
    int aprovados = 0;
    int reprovados = 0;

    // Coletando as notas 
    for (int i = 0; i < QTDE_LINHAS; i++)
    {
        printf("Adicionando notas para aluno %d\n", i+1);

        for (int z = 0; z < QTDE_COLUNAS; z++)
        {
            printf("Digite a nota da prova %d :", z+1);
            scanf("%f", &notas[i][z]);
        }
    }

    for (int i = 0; i < QTDE_LINHAS; i++)
    {
        float somaNotas = 0;
        
        for (int z = 0; z < QTDE_COLUNAS; z++)
        {
            somaNotas += notas[i][z];
        }

        float media = somaNotas / 2;

        if (media >= 6.0)
        {
            aprovados++;
        } 
        else 
        {
            reprovados++;
        }
    }
    
    printf("A quantidade de alunos de aprovados é %d\n", aprovados);    
    printf("A quantidade de alunos de reprovados é %d\n", reprovados);    

    return 0;
}