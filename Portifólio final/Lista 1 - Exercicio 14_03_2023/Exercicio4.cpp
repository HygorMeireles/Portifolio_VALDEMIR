//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERCÍCIO #4: Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos, aparece a mensagem Velho. Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARAÇÃO DE VARIÁVEIS
	int idade;
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");	
//IMPRESSÃO DO TÍTULO DO PROGRAMA
	printf("===== IDADES =====\n\n");
//IMPRESSÃO DA SOLICITAÇÃO DA IDADE	
	printf("Informe sua idade:");
//SCANF DA SOLICITAÇÃO DA IDADE
	scanf("%d", &idade);
//LIMPA TELA	
	system("cls");
//REIMPRESSÃO DO TÍTULO DO PROGRAMA
	printf("===== IDADES =====\n\n");
//IMPRESSÃO DA INFORMAÇÃO DA IDADE		
	printf("A idade informada foi: %d\n\n", idade);
		
    if (idade > 70) {
        printf("Velho\n");
    } else if (idade > 21) {
        printf("Adulto\n");
    } else {
        printf("Jovem\n");
    }
	return 0;
}	
