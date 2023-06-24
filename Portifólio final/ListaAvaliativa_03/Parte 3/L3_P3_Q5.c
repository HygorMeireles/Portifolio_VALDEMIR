/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

5. Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *).
*/

#include <stdio.h>

int main() {
  int x, vet[x], *p;
  
  Num:
  printf("Quantos numeros deseja digitar?: ");
  scanf("%d",&x);
  if(x > 15)
  {
    printf("Epa! Que absurdo!\n");
    printf("O-Ou! O numero maximo e 15. Tente novamente.\n\n");
    goto Num;
  }else if(x <= 0)
  { 
    printf("OPS... Digite um numero maior que 0. Tente novamente.\n\n");
    goto Num;
  }else{
    for(int i = 0; i < x; i++)
      {
        printf("Digite o numero %d: ",(i+1));
        scanf("%d",&vet[i]);
      }
  }
  p = vet;
  for(int a = 0; a < x; a++)
    {
      p[a] += 1;
      printf("%d\n", p[a]);
    }

  
  return 0;
}
