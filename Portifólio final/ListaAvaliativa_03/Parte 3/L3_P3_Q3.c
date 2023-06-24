/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

3. Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. Utilizando 
apenas notação de ponteiros, leia esse vetor do teclado e imprima o endereço das posições 
contendo valores pares.
*/
#include <stdio.h>

int main() {
    int valores[5];
    int *ptr = valores;

    printf(" Digite 5 numeros: \n");

    for (int cont = 0; cont < 5; cont++) {
        scanf("%d", ptr + cont);
    }

    printf("Valores pares:\n");

    for (int cont = 0; cont < 5; cont++) {
        if (*(ptr + cont) % 2 == 0) {
            printf("%d\n", *(ptr + cont));
        }
    }

    return 0;
}