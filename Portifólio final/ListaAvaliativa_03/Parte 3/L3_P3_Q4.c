/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

4. Crie uma função que aceite como parâmetro um vetor de inteiros com N valores, e determina o 
maior elemento do vetor e o número de vezes que este elemento ocorreu no vetor. Por exemplo, 
para um vetor com os seguintes elementos: 3, 5, 12, 6, 7, 27, 9, 16, 27, a função deve retorna para 
o programa que a chamou o valor 27 e o número 2 (indicando que o número 27 ocorreu 2 vezes). 
A função deve ser do tipo void.
*/
#include <stdio.h>
#include <stdlib.h>

int valMax = 0; 
int repeticao = 0;

void verificacao(int *elementos, int numElementos) {
    int j;

    valMax = elementos[0];

    for (j = 0; j < numElementos; j++) {
        if (valMax <= elementos[j]) {
            valMax = elementos[j];
        }
    }

    for (j = 0; j < numElementos; j++) {
        if (valMax == elementos[j]) {
            repeticao++;
        }
    }
}

int main() {
    int N;
    int i = 0;

    printf("Ola, digite a quantidade de N numeros para sua lista:\n");
    scanf("%d", &N);

    int lista[N];

    for (i = 0; i < N; i++) {
        printf("\nDigite o numero %d:\n", i + 1);
        scanf("%d", &lista[i]);
    }

    verificacao(lista, N);

    printf("\nNumero de maior valor: %d\n", valMax);
    printf("Este numero se repetiu %d vez(es)\n", repeticao);

    system("pause");
    return 0;
}

