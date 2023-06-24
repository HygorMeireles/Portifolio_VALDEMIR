//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #10: Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a condição:
//	“F1”, se N <= 10
//	“F2”, se N > 10 
//	“F3” se n > 100

#include <stdio.h>
#include <stdlib.h>

int main() {
//DECLARAÇÃO DA VARIÁVEL	
	int n;
//IMPRESSÃO DA SOLICITAÇÃO DA VARIÁVEL
	printf("Informe o valor de N:");
//SCANF DO VALOR DE N	
	scanf("%d", &n);
//CONDIÇÕES PARA O VALOR DE N F1, F2, F3	
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
