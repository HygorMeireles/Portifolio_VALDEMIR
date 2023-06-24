//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERC�CIO #4: Fa�a um programa que entra com a idade de uma pessoa e se idade maior que 70 anos, aparece a mensagem Velho. Se idade maior que 21 anos, Adulto. Se idade menor que 21 anos, Jovem.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARA��O DE VARI�VEIS
	int idade;
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");	
//IMPRESS�O DO T�TULO DO PROGRAMA
	printf("===== IDADES =====\n\n");
//IMPRESS�O DA SOLICITA��O DA IDADE	
	printf("Informe sua idade:");
//SCANF DA SOLICITA��O DA IDADE
	scanf("%d", &idade);
//LIMPA TELA	
	system("cls");
//REIMPRESS�O DO T�TULO DO PROGRAMA
	printf("===== IDADES =====\n\n");
//IMPRESS�O DA INFORMA��O DA IDADE		
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
