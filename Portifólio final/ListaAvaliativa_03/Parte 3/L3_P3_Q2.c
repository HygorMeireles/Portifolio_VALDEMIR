/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.
2. Crie um programa em C que receba três números do usuário depois crie uma função que receba 
os 3 números como parâmetros: A, B e C. Ordene de tal forma que, ao final da função, A contenha 
o menor número e C o maior. Imprima os três números. Obs: Utilize ponteiro para solucionar o 
problema.
*/
#include <stdio.h>

void ordenarNumeros(int *a, int *b, int *c) {
    int val;

    if (*a > *b) {
        val = *a;
        *a = *b;
        *b = val;
    }

    if (*a > *c) {
        val = *a;
        *a = *c;
        *c = val;
    }

    if (*b > *c) {
        val = *b;
        *b = *c;
        *c = val;
    }
}

    int main() {
        int a, b, c;

        printf("Informe 3 numeros: ");
        scanf("%d %d %d", &a, &b, &c);

        ordenarNumeros(&a, &b, &c);

        printf("Numeros ordenados: %d %d %d\n", a, b, c);

    return 0;
}