//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERC�CIO #2: Um programa que calcule a �rea do tri�ngulo. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() 
{
//DECLARA��O DE VARI�VEIS
	float base, altura, area;
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");
//IMPRESS�O DO T�TULO DO PROGRAMA
	printf("===== C�LCULO DA �REA DO TRI�NGULO =====\n\n");
//IMPRESS�O DA SOLICITA��O DO TAMANHO DA BASE
	printf("Informe o tamanho da base: ");
//SOLICITA��O PELO SCANF DO VALOR DA BASE	
	scanf("%f", &base);
 //IMPRESS�O DA SOLICITA��O DO TAMANHO DA ALTURA
	printf("Informe o tamanho da altura: ");
//SOLICITA��O PELO SCANF DO VALOR DA ALTURA		
	scanf("%f", &altura);
//CALCULO DO VALOR DA AREA	
	area = (base * altura) / 2.0;	
//IMPRESS�O DO RESULTADO	
	printf("O VALOR DA �REA DESSE TRI�NGULO �: %.2f\n", area);
 
	return 0;
}
