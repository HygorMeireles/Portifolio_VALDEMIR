//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERCÍCIO #3: Faça um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a mensagem Você é muito jovem. Caso idade maior que 30 anos, o programa não fará nada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARAÇÃO DA VARIÁVEL
	float idade;
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");	
//IMPRESSÃO DO TÍTULO DO PROGRAMA
	printf("===== CÁLCULO DA IDADE DE UMA PESSOA =====\n\n");
//IMPRESSÃO DA SOLICITAÇÃO DA IDADE	
	printf("Informe sua idade: ");
//SOLICITAÇÃO PELO SCANF DA IDADE
	scanf("%f", &idade);
//LIMPA TELA	
	system("cls");
//REIMPRESSÃO DO TÍTULO DO PROGRAMA	
	printf("===== CÁLCULO DA IDADE DE UMA PESSOA =====\n\n");
//INFORMAÇÃO DA IDADE		
	printf("A idade informada foi: %.0f\n", idade);	
//CONDIÇÃO PARA A IDADE	
	if (idade < 30){
		printf("\nVocê é muito jovem!");
	}
	return 0;
}
