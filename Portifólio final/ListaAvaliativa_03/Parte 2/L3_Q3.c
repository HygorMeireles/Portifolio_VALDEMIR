/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.


3) Faça um programa que leia o nome, o time e a quantidade de gols de 3 jogadores
de futebol. Após o cadastro informe:
a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO;
c) Todos os dados do artilheiro.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct jogadores
{
  char nome[3][30];
  char time[3][30];
  int gols[3];
};

int main()
{
  struct jogadores jog;
  int fla = 0;
  int SomaGol = 0;
  int maior = 0;
  char *NomeMaior[30];
  char *TimeMaior[30];
  int i;
  for(i = 0; i < 3; i++)
  {
    printf("Digite o nome do jogador: ");
    scanf(" %30[^\n]",jog.nome[i]);
    fflush(stdin);
    printf("Digite o time do jogador: ");
    scanf(" %30[^\n]",jog.time[i]);
    fflush(stdin);
    if(strcmp(jog.time[i],"Flamengo")==0)
    {
      fla++;
    }

    printf("Digite a quantidade de gols do jogador: ");
    scanf("%d",&jog.gols[i]);
    fflush(stdin);
    SomaGol += jog.gols[i];
    if(i==0){
      maior = jog.gols[i];
    }else if(jog.gols[i] > maior){
      maior = jog.gols[i];
      *NomeMaior = jog.nome[i];
      *TimeMaior = jog.time[i];
    }
    printf("\n\n");
  }
    
  system("cls");
  printf("A quantidade total de gols foi de %d.\n",SomaGol);
  printf("%d jogadores jogam no flamengo.\n\n",fla);
  printf("DADOS DO ARTILHEIRO:\n");
  printf("Nome: %s\n",*NomeMaior);
  printf("Time: %s\n",*TimeMaior);
  printf("Gols marcados: %d\n",maior);
}
