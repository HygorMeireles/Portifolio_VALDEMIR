//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #5: Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
//  vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
//  de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
//DECLARAÇÃO DE VARIÁVEIS
	char nome [20];
 	float salario = 0.0, vendas = 0.0, total;
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO NOME DO VENDEDOR	
 	printf("Informe o nome do vendedor:");
//SCANF PARA O USUÁRIO INFORMAR O NOME DO VENDEDOR
 	scanf("%[^\n]s", &nome);
	fflush(stdin);	
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO SALARIO FIXO DO VENDEDOR 	
 	printf("Informe o salario fixo desse vendedor:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO SALÁRIO FIXO DO VENDEDOR
 	scanf("%f", &salario);
 	fflush(stdin);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO TOTAL DE VENDAS EFETUADAS PELO VENDEDOR NO MÊS
 	printf("Informe o valor total de vendas efetuadas por ele no mes (em dinheiro):");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO TOTAL DE VENDAS EFETUADAS PELO VENDEDOR NO MÊS
 	scanf("%f", &vendas);
	fflush(stdin);	  	
//LIMPA TELA PARA EXIBIR APENAS O TOTAL
  	system("cls");
//ATRIBUINDO A VARIÁVEL TOTAL A SOMA DO PERCENTUAL QUE ELE GANHA NAS VENDAS COM SEU SALÁRIO
 	total = salario + (0.15 * vendas);
//IMPRESSÃO FINAL DA VARIÁVEL X 	
 	printf("TOTAL = R$ %.2f", total);
 	return 0;
 }	
	
