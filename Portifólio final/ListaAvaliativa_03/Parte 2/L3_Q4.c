/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

4) Qual a opção abaixo irá alterar o valor de i para 30?
a) k = 30; b) *k = 30; c) p = 30; d) *p = 30

RESPOSTA: D) *p = 30
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main () {
int *p, i, k;
i = 42;
k = i;
p = &i;
*p = 30;

printf("i = %d",i);
}