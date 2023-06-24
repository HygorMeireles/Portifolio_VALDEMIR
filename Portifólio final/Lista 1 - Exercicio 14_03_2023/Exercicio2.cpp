//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERCÍCIO #2: Um programa que calcule a área do triângulo. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() 
{
//DECLARAÇÃO DE VARIÁVEIS
	float base, altura, area;
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");
//IMPRESSÃO DO TÍTULO DO PROGRAMA
	printf("===== CÁLCULO DA ÁREA DO TRIÂNGULO =====\n\n");
//IMPRESSÃO DA SOLICITAÇÃO DO TAMANHO DA BASE
	printf("Informe o tamanho da base: ");
//SOLICITAÇÃO PELO SCANF DO VALOR DA BASE	
	scanf("%f", &base);
 //IMPRESSÃO DA SOLICITAÇÃO DO TAMANHO DA ALTURA
	printf("Informe o tamanho da altura: ");
//SOLICITAÇÃO PELO SCANF DO VALOR DA ALTURA		
	scanf("%f", &altura);
//CALCULO DO VALOR DA AREA	
	area = (base * altura) / 2.0;	
//IMPRESSÃO DO RESULTADO	
	printf("O VALOR DA ÁREA DESSE TRIÂNGULO É: %.2f\n", area);
 
	return 0;
}
