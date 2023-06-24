#include <stdio.h>
#include <stdlib.h>

/*Criar um programa e pede ao usu�rio para digitar 4 notas de 0
a 10 de 4 alunos e os valores dever�o ser armazenados em uma matriz
bidimensional. Fa�a a m�dia das notas  de cada alunos e armazena as
4 m�dias em um vetor. Coloque na tela do usu�rio um mensagem informa
da a m�dia de cada alunos*/

int main(void)
{
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos[numeroDeAlunos][bimestresAnuais];
    float mediasAlunos[numeroDeAlunos];
    float media = 0;

    printf("INSIRA AS 4 NOTAS DO ALUNO 1: \n");

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno)
    {
        for (int notas = 0; notas < bimestresAnuais; ++notas)
        {
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;

        printf("Insira as 4 notas do aluno %i:\n", aluno + 2);
        // imprimir a partir do 1, pois o aluno est� iniciando em 0;
    }

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno)
    {   
        printf("A media do aluno %i e %.2f\n", aluno + 1, mediasAlunos[aluno]);

    }

    return 0;
}
