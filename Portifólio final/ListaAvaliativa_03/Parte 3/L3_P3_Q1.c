/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

1. Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando 
notação de ponteiro.
*/
#include <stdio.h>

int main() {
    int valores[3], *ptr = valores;

    printf("Informe 3 valores:\n");

    for (int cont = 0; cont < 3; cont++) {
        printf("Valor %d: ", cont + 1);
        scanf("%d", ptr + cont);
    }

    printf("\nValores inseridos:\n");

    for (int cont = 0; cont < 3; cont++) {
        printf("Valor %d: %d\n", cont + 1, *(ptr + cont));
    }

    return 0;
}