//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #9: Fa�a um algoritmo que leia dois n�meros A e B e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main() {
//DECLARA��O DE VARI�VEIS	
	int a, b;
//IMPRESS�O DA SOLICITA��O DO VALOR DE A
	printf("Informe o valor de a:");
//SCANF DO VALOR DE A	
	scanf("%d", &a);
//IMPRESS�O DA SOLICITA��O DO VALOR DE B	
	printf("Informe o valor de b:");
//SCANF DO VALOR DE B	
	scanf("%d", &b);
//CONDI��ES PARA COMPARAR SE O VALOR DE A � MAIOR QUE B E VICE-VERSA	
	if(a > b){
		printf("A e maior que B, A = %d", a);
	}else{
		if(b > a){
			printf("B e maior que A, B = %d", b);
		}else{
			printf("Os dois valores informados sao iguais, AB = %d\n", a);
		}
	}		
    return 0;
}
