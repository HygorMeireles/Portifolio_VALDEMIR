//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #3: Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua
//  esta opera��o � vari�vel PROD. A seguir mostre a vari�vel PROD com mensagem
//  correspondente

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");
//DECLARA��O DE VARI�VEIS
 	int a, b, prod;
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO PRIMEIRO N�MERO 	
 	printf("Informe o primeiro numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO PRIMEIRO N�MERO	
 	scanf("%d", &a);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO SEGUNDO N�MERO  	
 	printf("Informe o segundo numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO SEGUNDO N�MERO 	
 	scanf("%d", &b);
//LIMPA TELA PARA EXIBIR APENAS O PRODUTO POSTERIORMENTE 	
	system("cls"); 	
//ATRIBUINDO A VARI�VEL PROD O VALOR DE A * B INFORMADOS PELO USU�RIO 
 	prod = a * b;	
//IMPRESS�O FINAL DA VARI�VEL PROD 	
 	printf("PROD = %d", prod);
 	return 0;
 }	
