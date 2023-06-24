/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.


1) Faça um programa que leia o nome, sexo e o valor da mensalidade de 3 alunos.
Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A média das mensalidades;
d) O nome e a idade do aluno mais velho.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos
{
  char nome[3][30];
  char sexo[3][1];
  int idade[3];
  float mensalidade[3];
};

int main()
{
  struct alunos aluno;

  int i;
  int MaiorIdade = 0;
  int masc = 0;
  float MenorMens = 0, MediaMens = 0;
  char *NomeMaisVelho[30];
  for(i = 0; i < 3; i++)
  {
    //Entrada de dados
    printf("Digite o nome do aluno: ");
    scanf(" %30[^\n]",aluno.nome[i]);

    printf("Digite a idade do aluno: ");
    scanf(" %d",&aluno.idade[i]);

    printf("Digite o sexo do aluno (M/F): ");
    scanf(" %1[^\n]",aluno.sexo[i]);
    
    printf("Digite a mensalidade do aluno: ");
    scanf(" %f",&aluno.mensalidade[i]);

    //Operações
    if(i==0){
      MaiorIdade = aluno.idade[i]; 
      MenorMens = aluno.mensalidade[i];
    }else if(aluno.idade[i] > MaiorIdade){
      *NomeMaisVelho = aluno.nome[i];
      MaiorIdade = aluno.idade[i];
    }else if(aluno.mensalidade[i] < MenorMens){
      MenorMens = aluno.mensalidade[i];
    }
    MediaMens += aluno.mensalidade[i];
    if(strcmp(aluno.sexo[i],"M")==0)
    {
      masc++;
    }
  }
  MediaMens /= 3;

  system("cls");
  printf("O valor da menor mensalidade foi de %.2f reais.\n",MenorMens);
  printf("Ha %d alunos do sexo masculino.\n",masc);
  printf("A media das mensalidades dos alunos e de %.2f reais.\n",MediaMens);
  printf("O aluno mais velho se chama %s e tem %d anos de idade.\n",*NomeMaisVelho, MaiorIdade);
  
}