//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #6: Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
//	unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
//	de cada peça 2. Após, calcule e mostre o valor a ser pago.

#include <stdio.h>
#include <stdlib.h>

int main() 
{

//DECLARAÇÃO DE VARIÁVEIS
	int codPeca1, numPeca1, codPeca2, numPeca2;
	float valor1 = 0.0, valor2 = 0.0, valorTotal = 0.0;
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO CODIGO DA PRIMEIRA PEÇA
 	printf("Informe o codigo da peca 1:");
//SCANF PARA O USUÁRIO INFORMAR O CÓDIGO DA PEÇA 1
 	scanf("%d", &codPeca1);
	fflush(stdin);	
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO NÚMERO DE PEÇAS 1
 	printf("Informe o numero de pecas 1:");
//SCANF PARA O USUÁRIO INFORMAR O NÚMERO DE PEÇAS 1
 	scanf("%d", &numPeca1);
 	fflush(stdin);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO VALOR UNITÁRIO DE CADA PEÇA 1
 	printf("Informe o valor unitario de cada peca 1:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR UNITÁRIO DE CADA PEÇA 1
 	scanf("%f", &valor1);
	fflush(stdin);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO CODIGO DA SEGUNDA PEÇA
 	printf("Informe o codigo da peca 2:");
//SCANF PARA O USUÁRIO INFORMAR O CÓDIGO DA PEÇA 2
 	scanf("%d", &codPeca2);
	fflush(stdin);	
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO NÚMERO DE PEÇAS 2
 	printf("Informe o numero de pecas 2:");
//SCANF PARA O USUÁRIO INFORMAR O NÚMERO DE PEÇAS 2
 	scanf("%d", &numPeca2);
 	fflush(stdin);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO VALOR UNITÁRIO DE CADA PEÇA 2
 	printf("Informe o valor unitario de cada peca 2:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR UNITÁRIO DE CADA PEÇA 2
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
