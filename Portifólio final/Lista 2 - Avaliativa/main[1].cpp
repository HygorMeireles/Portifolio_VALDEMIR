/*
Grupo: Leonardo Duarte Veiga Ferreira, Mateus Salvador de Lima, Gabriel Damásio de Ornelas, Mateus Bittencourt Camandaroba e Hygor Gabriel Meireles
Turma: GPE02M0392
Turno: Matutino
Curso: Ciência da Computação
Universidade Católica de Brasília (Taguatinga)

Escolher 5 das funções abaixo e desenvolver 5 programa que utilize as funções:
gets(), puts(), strlen(), strcat(), strcmp(), strcpy(), strncat(), strncmp(), strncpy()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	/* Objetivo: Receber duas strings e verificar se o comprimento e o conte�do delas s�o 
	iguais ou diferentes. */
    char string1[100];
    char string2[100];

	//Recebendo as strings
    printf("Escreva a primeira string: ");
    gets(string1);

    printf("\nEscreva a segunda string: ");
    gets(string2);
    
    //Imprimindo os resultados.
    printf("\n\n---RESULTADOS---\n\n");
    
    //Verificando o comprimento
    printf("Comprimento da primeira string: %d\n\n", strlen(string1));
    printf("Comprimento da segunda string: %d\n", strlen(string2));

	if(strlen(string1) == strlen(string2)){
		printf("\nOs comprimentos das strings sao iguais.");
	}
	else {
		printf("\nOs comprimentos das strings sao diferentes.");
	}

    if (strcmp(string1, string2) == 0) {
        puts("\n\nO conteudo das strings sao iguais.");
    } else {
        puts("\n\nO conteudo das strings sao diferentes.");
    }

    return 0;
}
