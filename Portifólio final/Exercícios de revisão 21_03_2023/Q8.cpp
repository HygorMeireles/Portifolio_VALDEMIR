//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #8: Escreva um programa que leia tr�s valores reais: A, B e C. Em seguida, calcule e mostre:
//	a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
//	b) a �rea do c�rculo de raio C. (pi = 3.14159)
//	c) a �rea do trap�zio que tem A e B por bases e C por altura.
//	d) a �rea do quadrado que tem lado B.
//	e) a �rea do ret�ngulo que tem lados A e B.

#include <stdio.h>
#include <stdlib.h>
//DEFININDO O VALOR DE PI COMO UMA CONSTANTE
#define PI 3.14159

int main() {
//DECLARA��O DE VARIAVEIS	
	float a, b, c;
	double tri, cir, tra, qua, ret;
//IMPRESSAO DA SOLICITACAO DO VALOR DE A	
	printf("Informe o valor de A: ");
//SCANF QUE � PREENCHIDO PELO USU�RIO COM O VALOR DE A	
	scanf("%f", &a);
//IMPRESSAO DA SOLICITACAO DO VALOR DE B	
	printf("Informe o valor de B: ");
//SCANF QUE � PREENCHIDO PELO USU�RIO COM O VALOR DE B	
	scanf("%f", &b);	
//IMPRESSAO DA SOLICITACAO DO VALOR DE C	
	printf("Informe o valor de C: ");
//SCANF QUE � PREENCHIDO PELO USU�RIO COM O VALOR DE C	
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
