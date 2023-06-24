//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #9: Faça um algoritmo que leia dois números A e B e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main() {
//DECLARAÇÃO DE VARIÁVEIS	
	int a, b;
//IMPRESSÃO DA SOLICITAÇÃO DO VALOR DE A
	printf("Informe o valor de a:");
//SCANF DO VALOR DE A	
	scanf("%d", &a);
//IMPRESSÃO DA SOLICITAÇÃO DO VALOR DE B	
	printf("Informe o valor de b:");
//SCANF DO VALOR DE B	
	scanf("%d", &b);
//CONDIÇÕES PARA COMPARAR SE O VALOR DE A É MAIOR QUE B E VICE-VERSA	
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
