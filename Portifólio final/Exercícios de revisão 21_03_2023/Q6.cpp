//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #6: Neste problema, deve-se ler o c�digo de uma pe�a 1, o n�mero de pe�as 1, o valor
//	unit�rio de cada pe�a 1, o c�digo de uma pe�a 2, o n�mero de pe�as 2 e o valor unit�rio
//	de cada pe�a 2. Ap�s, calcule e mostre o valor a ser pago.

#include <stdio.h>
#include <stdlib.h>

int main() 
{

//DECLARA��O DE VARI�VEIS
	int codPeca1, numPeca1, codPeca2, numPeca2;
	float valor1 = 0.0, valor2 = 0.0, valorTotal = 0.0;
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO CODIGO DA PRIMEIRA PE�A
 	printf("Informe o codigo da peca 1:");
//SCANF PARA O USU�RIO INFORMAR O C�DIGO DA PE�A 1
 	scanf("%d", &codPeca1);
	fflush(stdin);	
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO N�MERO DE PE�AS 1
 	printf("Informe o numero de pecas 1:");
//SCANF PARA O USU�RIO INFORMAR O N�MERO DE PE�AS 1
 	scanf("%d", &numPeca1);
 	fflush(stdin);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO VALOR UNIT�RIO DE CADA PE�A 1
 	printf("Informe o valor unitario de cada peca 1:");
//SCANF PARA O USU�RIO INFORMAR O VALOR UNIT�RIO DE CADA PE�A 1
 	scanf("%f", &valor1);
	fflush(stdin);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO CODIGO DA SEGUNDA PE�A
 	printf("Informe o codigo da peca 2:");
//SCANF PARA O USU�RIO INFORMAR O C�DIGO DA PE�A 2
 	scanf("%d", &codPeca2);
	fflush(stdin);	
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO N�MERO DE PE�AS 2
 	printf("Informe o numero de pecas 2:");
//SCANF PARA O USU�RIO INFORMAR O N�MERO DE PE�AS 2
 	scanf("%d", &numPeca2);
 	fflush(stdin);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO VALOR UNIT�RIO DE CADA PE�A 2
 	printf("Informe o valor unitario de cada peca 2:");
//SCANF PARA O USU�RIO INFORMAR O VALOR UNIT�RIO DE CADA PE�A 2
 	scanf("%f", &valor2);
	fflush(stdin);
//CALCULO DO VALOR TOTAL A PAGAR		 	
	valorTotal = (numPeca1 * valor1) + (numPeca2 * valor2);		  	
//LIMPA TELA PARA EXIBIR APENAS O VALOR TOTAL A PAGAR
  	system("cls");
//IMPRESSAO DO VALOR TOTAL A PAGAR  	
 	printf("VALOR A PAGAR = R$ %.2f", valorTotal);
 	return 0;
 }	
