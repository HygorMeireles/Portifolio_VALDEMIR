//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #4: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do produto
//  de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");
//DECLARA��O DE VARI�VEIS
 	int a, b, c, d, diferenca;
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO PRIMEIRO N�MERO 	
 	printf("Informe o primeiro numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO PRIMEIRO N�MERO	
 	scanf("%d", &a);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO SEGUNDO N�MERO  	
 	printf("Informe o segundo numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO SEGUNDO N�MERO 	
 	scanf("%d", &b);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO TERCEIRO N�MERO 	
 	printf("Informe o terceiro numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO TERCEIRO N�MERO	
 	scanf("%d", &c);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO QUARTO N�MERO 	
 	printf("Informe o quarto numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO QUARTO N�MERO	
 	scanf("%d", &d);	  	
//LIMPA TELA PARA EXIBIR APENAS A DIFEREN�A POSTERIORMENTE 	
	system("cls"); 	
//ATRIBUINDO A VARI�VEL DIFEREN�A O VALOR DE (A * B - C * D) INFORMADOS PELO USU�RIO 
 	diferenca = (a * b - c * d);	
//IMPRESS�O FINAL DA VARI�VEL DIFERENCA	
 	printf("DIFERENCA = %d", diferenca);
 	return 0;
 }	
	
