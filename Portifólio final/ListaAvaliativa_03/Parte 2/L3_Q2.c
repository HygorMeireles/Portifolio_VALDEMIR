/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.


Ponteiros:
pontA (conteúdo) = -1243130380; pontA (endereço) = -1243130368
pontA (Valor) = 44
pontB (Conteúdo) = -1243130380; pontB (endereço) = -1243130376
pontB (valor) = 44
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
int *pontA, *pontB, v1, v2;
v1 = 3;
v2 = 12;
pontA = &v1;
pontB = pontA;
*pontB = 44;
printf("Valores das variáveis\n");
printf("v1 (conteudo) = %d\n",v1);
printf("v1 (endereco) = %d\n",&v1);
printf("v2 (conteudo) = %d\n",v2);
printf("v2 (endereco) = %d\n\n",&v2);
printf("Valores dos ponteiros\n");
printf("pontA (conteudo) = %d\n",pontA);
printf("pontA (endereco) = %d\n",&pontA);
printf("pontA (valor do ponteiro) = %d\n",*pontA);
printf("pontB (conteudo) = %d\n",pontB);
printf("pontB (endereco) = %d\n",&pontB);
printf("pontB (valor do ponteiro) = %d\n",*pontB);
getchar(); 
}