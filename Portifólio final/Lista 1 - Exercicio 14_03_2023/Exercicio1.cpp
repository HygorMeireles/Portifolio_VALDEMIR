//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERC�CIO #1: Programa que calcule a m�dia de 5 notas de um aluno.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARA��O DE VARI�VEIS
	float n1, n2,n3,n4,n5, media;
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");
	
//IMPRESS�O DO T�TULO DO PROGRAMA
	printf("===== C�LCULO DE M�DIA =====\n\n");
	
//IMPRESS�O DA SOLICITA��O DA PRIMEIRA NOTA		
	printf("Informe a primeira nota: ");
	
//SOLICITA��O AO USU�RIO PELO SCANF DA PRIMEIRA NOTA	
	scanf("%f", &n1);
	
//IMPRESS�O DA SOLICITA��O DA SEGUNDA NOTA	
	printf("Informe a segunda nota: ");
	
//SOLICITA��O AO USU�RIO PELO SCANF DA SEGUNDA NOTA	
	scanf("%f", &n2);
	
//IMPRESS�O DA SOLICITA��O DA TERCEIRA NOTA		
	printf("Informe a terceira nota: ");
	
//SOLICITA��O AO USU�RIO PELO SCANF DA TERCEIRA NOTA	
	scanf("%f", &n3);
	
//IMPRESS�O DA SOLICITA��O DA QUARTA NOTA		
	printf("Informe a quarta nota: ");
	
//SOLICITA��O AO USU�RIO PELO SCANF DA QUARTA NOTA	
	scanf("%f", &n4);
	
//IMPRESS�O DA SOLICITA��O DA QUINTA NOTA		
	printf("Informe a quinta nota: ");
	
//SOLICITA��O AO USU�RIO PELO SCANF DA QUINTA NOTA	
	scanf("%f", &n5);
				
//CALCULO DA MEDIA DAS NOTAS
	media = (n1+n2+n3+n4+n5)/2;
	
//IMPRESS�O MOSTRANDO O RESULTADO DA MEDIA	
	printf("\nSua m�dia foi: %.2f\n", media);
	return 0;
}

