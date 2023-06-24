//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #8: Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e mostre:
//	a) a área do triângulo retângulo que tem A por base e C por altura.
//	b) a área do círculo de raio C. (pi = 3.14159)
//	c) a área do trapézio que tem A e B por bases e C por altura.
//	d) a área do quadrado que tem lado B.
//	e) a área do retângulo que tem lados A e B.

#include <stdio.h>
#include <stdlib.h>
//DEFININDO O VALOR DE PI COMO UMA CONSTANTE
#define PI 3.14159

int main() {
//DECLARAÇÃO DE VARIAVEIS	
	float a, b, c;
	double tri, cir, tra, qua, ret;
//IMPRESSAO DA SOLICITACAO DO VALOR DE A	
	printf("Informe o valor de A: ");
//SCANF QUE É PREENCHIDO PELO USUÁRIO COM O VALOR DE A	
	scanf("%f", &a);
//IMPRESSAO DA SOLICITACAO DO VALOR DE B	
	printf("Informe o valor de B: ");
//SCANF QUE É PREENCHIDO PELO USUÁRIO COM O VALOR DE B	
	scanf("%f", &b);	
//IMPRESSAO DA SOLICITACAO DO VALOR DE C	
	printf("Informe o valor de C: ");
//SCANF QUE É PREENCHIDO PELO USUÁRIO COM O VALOR DE C	
	scanf("%f", &c);
//ATRIBUINDO OS CALCULOS DAS FORMULAS AS VARIAVEIS DE CADA FORMA GEOMETRICA	
	tri = (a * c ) / 2.0;
	cir = PI * (c * c);
	tra = ((a + b)*c)/2.0;
	qua = b * b;
	ret = a * b;
//IMPRESSAO DO RESULTADO DE TODOS OS CALCULOS SOLICITADOS DAS FORMAS GEOMETRICAS	
	printf("\nTRIANGULO = %.3f", tri);
	printf("\nCIRCULO = %.3f", cir);
	printf("\nTRAPEZIO = %.3f", tra);
	printf("\nQUADRADO = %.3f", qua);
	printf("\nRETANGULO = %.3f", ret);
	
    return 0;
}
