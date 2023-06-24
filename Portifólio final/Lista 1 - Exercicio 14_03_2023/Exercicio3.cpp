//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERC�CIO #3: Fa�a um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a mensagem Voc� � muito jovem. Caso idade maior que 30 anos, o programa n�o far� nada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARA��O DA VARI�VEL
	float idade;
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");	
//IMPRESS�O DO T�TULO DO PROGRAMA
	printf("===== C�LCULO DA IDADE DE UMA PESSOA =====\n\n");
//IMPRESS�O DA SOLICITA��O DA IDADE	
	printf("Informe sua idade: ");
//SOLICITA��O PELO SCANF DA IDADE
	scanf("%f", &idade);
//LIMPA TELA	
	system("cls");
//REIMPRESS�O DO T�TULO DO PROGRAMA	
	printf("===== C�LCULO DA IDADE DE UMA PESSOA =====\n\n");
//INFORMA��O DA IDADE		
	printf("A idade informada foi: %.0f\n", idade);	
//CONDI��O PARA A IDADE	
	if (idade < 30){
		printf("\nVoc� � muito jovem!");
	}
	return 0;
}
