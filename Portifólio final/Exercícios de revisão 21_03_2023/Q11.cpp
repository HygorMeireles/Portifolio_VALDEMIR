//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #11: Construa um algoritmo que receba como entrada tr�s valores e os imprima em ordem crescente. 

#include <stdio.h>
#include <stdlib.h>

int main() {
//DECLARA��O DAS VARI�VEIS	
	int num1, num2, num3;
//IMPRESS�O DA SOLICITA��O DO VALOR 1
	printf("Informe o primeiro valor:");
//SCANF DO VALOR DE 1	
	scanf("%d", &num1);
//IMPRESS�O DA SOLICITA��O DO VALOR 2
	printf("Informe o segundo valor:");
//SCANF DO VALOR DE 2	
	scanf("%d", &num2);
//IMPRESS�O DA SOLICITA��O DO VALOR 3
	printf("Informe o terceiro valor:");
//SCANF DO VALOR DE 3	
	scanf("%d", &num3);		
//ORGANIZANDO EM ORDEM CRESCENTE	
if (num1 <= num2 && num1 <= num3) {
        printf("%d, ", num1);
        if (num2 <= num3) {
            printf("%d, %d\n", num2, num3);
        } else {
            printf("%d, %d\n", num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d, ", num2);
        if (num1 <= num3) {
            printf("%d, %d\n", num1, num3);
        } else {
            printf("%d, %d\n", num3, num1);
        }
    } else {
        printf("%d, ", num3);
        if (num1 <= num2) {
            printf("%d, %d\n", num1, num2);
        } else {
            printf("%d, %d\n", num2, num1);
        }
    }

    return 0;
}
