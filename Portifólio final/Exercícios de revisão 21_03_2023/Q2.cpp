//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #2: Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre
//  elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");
//DECLARAÇÃO DE VARIÁVEIS
 	int a, b, soma;
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO PRIMEIRO NÚMERO 	
 	printf("Informe o primeiro numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO PRIMEIRO NÚMERO	
 	scanf("%d", &a);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO SEGUNDO NÚMERO  	
 	printf("Informe o segundo numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO SEGUNDO NÚMERO 	
 	scanf("%d", &b);
//LIMPA TELA PARA EXIBIR APENAS A SOMA POSTERIORMENTE 	
	system("cls"); 	
//ATRIBUINDO A VARIÁVEL SOMA O VALOR DE A + B INFORMADOS PELO USUÁRIO 
 	soma = a +b;	
//IMPRESSÃO FINAL DA VARIÁVEL SOMA 	
 	printf("SOMA = %d", soma);
 	return 0;
 }	
	
