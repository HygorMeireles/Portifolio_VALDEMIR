//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #5: Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de
//  vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15%
//  de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
//DECLARA��O DE VARI�VEIS
	char nome [20];
 	float salario = 0.0, vendas = 0.0, total;
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO NOME DO VENDEDOR	
 	printf("Informe o nome do vendedor:");
//SCANF PARA O USU�RIO INFORMAR O NOME DO VENDEDOR
 	scanf("%[^\n]s", &nome);
	fflush(stdin);	
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO SALARIO FIXO DO VENDEDOR 	
 	printf("Informe o salario fixo desse vendedor:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO SAL�RIO FIXO DO VENDEDOR
 	scanf("%f", &salario);
 	fflush(stdin);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO TOTAL DE VENDAS EFETUADAS PELO VENDEDOR NO M�S
 	printf("Informe o valor total de vendas efetuadas por ele no mes (em dinheiro):");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO TOTAL DE VENDAS EFETUADAS PELO VENDEDOR NO M�S
 	scanf("%f", &vendas);
	fflush(stdin);	  	
//LIMPA TELA PARA EXIBIR APENAS O TOTAL
  	system("cls");
//ATRIBUINDO A VARI�VEL TOTAL A SOMA DO PERCENTUAL QUE ELE GANHA NAS VENDAS COM SEU SAL�RIO
 	total = salario + (0.15 * vendas);
//IMPRESS�O FINAL DA VARI�VEL X 	
 	printf("TOTAL = R$ %.2f", total);
 	return 0;
 }	
	
