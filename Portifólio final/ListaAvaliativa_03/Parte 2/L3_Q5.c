/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.


5) Qual o valor impresso para a e b ?

RESPOSTA: a = 10 e b = 20.
*/

#include <stdio.h>

int main () {
int a = 5, b = 15;
int *pA, *pB;
pA = &a;
pB = &b;
*pA = 10;
*pB = *pA;
pA = pB;
*pA = 20;
printf ("a=%d\n", a);
printf("b=%d", b);
getchar();
}