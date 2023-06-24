//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #1: Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
//	de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo
//	apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo
//	especificado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");
//DECLARAÇÃO DE VARIÁVEIS
 	int a, b, x;
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO PRIMEIRO NÚMERO 	
 	printf("Informe o primeiro numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO PRIMEIRO NÚMERO	
 	scanf("%d", &a);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO SEGUNDO NÚMERO  	
 	printf("Informe o segundo numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO SEGUNDO NÚMERO 	
 	scanf("%d", &b);
//LIMPA TELA PARA EXIBIR APENAS O X POSTERIORMENTE 	
	system("cls"); 	
//ATRIBUINDO A VARIÁVEL X O VALOR DE A + B INFORMADOS PELO USUÁRIO 
 	x = a +b;	
//IMPRESSÃO FINAL DA VARIÁVEL X 	
 	printf("X = %d", x);
 	return 0;
 }	
	
