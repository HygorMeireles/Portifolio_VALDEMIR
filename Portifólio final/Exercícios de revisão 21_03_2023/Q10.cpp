//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #10: Fa�a um algoritmo que leia um n�mero N e imprima �F1�, �F2� ou �F3�, conforme a condi��o:
//	�F1�, se N <= 10
//	�F2�, se N > 10 
//	�F3� se n > 100

#include <stdio.h>
#include <stdlib.h>

int main() {
//DECLARA��O DA VARI�VEL	
	int n;
//IMPRESS�O DA SOLICITA��O DA VARI�VEL
	printf("Informe o valor de N:");
//SCANF DO VALOR DE N	
	scanf("%d", &n);
//CONDI��ES PARA O VALOR DE N F1, F2, F3	
	if(n <= 10){
		printf("F1");
	}else{
		if(n > 10 && n <= 100){
			printf("F2");
		}else{
			printf("F3");
		}
	}		
    return 0;
}
