//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #4: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
//  de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");
//DECLARAÇÃO DE VARIÁVEIS
 	int a, b, c, d, diferenca;
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO PRIMEIRO NÚMERO 	
 	printf("Informe o primeiro numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO PRIMEIRO NÚMERO	
 	scanf("%d", &a);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO SEGUNDO NÚMERO  	
 	printf("Informe o segundo numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO SEGUNDO NÚMERO 	
 	scanf("%d", &b);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO TERCEIRO NÚMERO 	
 	printf("Informe o terceiro numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO TERCEIRO NÚMERO	
 	scanf("%d", &c);
//IMPRESSÃO DA SOLICITAÇÃO AO USUÁRIO DO QUARTO NÚMERO 	
 	printf("Informe o quarto numero:");
//SCANF PARA O USUÁRIO INFORMAR O VALOR DO QUARTO NÚMERO	
 	scanf("%d", &d);	  	
//LIMPA TELA PARA EXIBIR APENAS A DIFERENÇA POSTERIORMENTE 	
	system("cls"); 	
//ATRIBUINDO A VARIÁVEL DIFERENÇA O VALOR DE (A * B - C * D) INFORMADOS PELO USUÁRIO 
 	diferenca = (a * b - c * d);	
//IMPRESSÃO FINAL DA VARIÁVEL DIFERENCA	
 	printf("DIFERENCA = %d", diferenca);
 	return 0;
 }	
	
