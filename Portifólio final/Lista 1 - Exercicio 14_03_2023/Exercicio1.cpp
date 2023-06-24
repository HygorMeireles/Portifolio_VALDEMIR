//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERCÍCIO #1: Programa que calcule a média de 5 notas de um aluno.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARAÇÃO DE VARIÁVEIS
	float n1, n2,n3,n4,n5, media;
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");
	
//IMPRESSÃO DO TÍTULO DO PROGRAMA
	printf("===== CÁLCULO DE MÉDIA =====\n\n");
	
//IMPRESSÃO DA SOLICITAÇÃO DA PRIMEIRA NOTA		
	printf("Informe a primeira nota: ");
	
//SOLICITAÇÃO AO USUÁRIO PELO SCANF DA PRIMEIRA NOTA	
	scanf("%f", &n1);
	
//IMPRESSÃO DA SOLICITAÇÃO DA SEGUNDA NOTA	
	printf("Informe a segunda nota: ");
	
//SOLICITAÇÃO AO USUÁRIO PELO SCANF DA SEGUNDA NOTA	
	scanf("%f", &n2);
	
//IMPRESSÃO DA SOLICITAÇÃO DA TERCEIRA NOTA		
	printf("Informe a terceira nota: ");
	
//SOLICITAÇÃO AO USUÁRIO PELO SCANF DA TERCEIRA NOTA	
	scanf("%f", &n3);
	
//IMPRESSÃO DA SOLICITAÇÃO DA QUARTA NOTA		
	printf("Informe a quarta nota: ");
	
//SOLICITAÇÃO AO USUÁRIO PELO SCANF DA QUARTA NOTA	
	scanf("%f", &n4);
	
//IMPRESSÃO DA SOLICITAÇÃO DA QUINTA NOTA		
	printf("Informe a quinta nota: ");
	
//SOLICITAÇÃO AO USUÁRIO PELO SCANF DA QUINTA NOTA	
	scanf("%f", &n5);
				
//CALCULO DA MEDIA DAS NOTAS
	media = (n1+n2+n3+n4+n5)/2;
	
//IMPRESSÃO MOSTRANDO O RESULTADO DA MEDIA	
	printf("\nSua média foi: %.2f\n", media);
	return 0;
}

