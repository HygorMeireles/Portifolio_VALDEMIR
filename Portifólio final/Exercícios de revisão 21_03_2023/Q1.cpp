//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #1: Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma
//	de A e B atribuindo o seu resultado na vari�vel X. Imprima X conforme exemplo
//	apresentado abaixo. N�o apresente mensagem alguma al�m daquilo que est� sendo
//	especificado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");
//DECLARA��O DE VARI�VEIS
 	int a, b, x;
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO PRIMEIRO N�MERO 	
 	printf("Informe o primeiro numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO PRIMEIRO N�MERO	
 	scanf("%d", &a);
//IMPRESS�O DA SOLICITA��O AO USU�RIO DO SEGUNDO N�MERO  	
 	printf("Informe o segundo numero:");
//SCANF PARA O USU�RIO INFORMAR O VALOR DO SEGUNDO N�MERO 	
 	scanf("%d", &b);
//LIMPA TELA PARA EXIBIR APENAS O X POSTERIORMENTE 	
	system("cls"); 	
//ATRIBUINDO A VARI�VEL X O VALOR DE A + B INFORMADOS PELO USU�RIO 
 	x = a +b;	
//IMPRESS�O FINAL DA VARI�VEL X 	
 	printf("X = %d", x);
 	return 0;
 }	
	
