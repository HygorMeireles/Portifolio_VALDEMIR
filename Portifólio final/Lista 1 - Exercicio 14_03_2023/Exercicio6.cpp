//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERC�CIO #6: . Fa�a um algoritmo recebe um valor inteiro e se o n�mero for maior que 10, ser� impressa a
//  frase: "O n�mero e maior que 10". Se o n�mero for menor que 10, ser� impressa a frase:
//  �O n�mero � menor que 10�. Se o n�mero for igual a 10 aparecer� a frase: �Voc� acertou�.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARA��O DE VARI�VEIS
	int valor;
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese");
//IMPRESS�O DO T�TULO DO PROGRAMA	
	printf("===== ACERTE O N�MERO! =====\n\n");
//IMPRESS�O DA SOLICITA��O DO VALOR INTEIRO		
	printf("Digite um valor inteiro: ");
//SOLICITA��O AO USU�RIO PELO SCANF DO VALOR INTEIRO	
	scanf("%d", &valor);
//LIMPA TELA	
	system("cls");
//REIMPRESS�O DO T�TULO	
	printf("===== ACERTE O N�MERO! =====\n\n");	
//INFORME DO VALOR DIGITADO	
	printf("O n�mero que voc� digitou foi: %d\n", valor);
//CONDI��ES PARA O VALOR INTEIRO INSERIDO	
	if(valor > 10){
		printf("O n�mero � maior que 10");
	}else{
		if(valor < 10){
			printf("O n�mero � menor que 10");
		}else{
			if(valor = 10){
				printf("Voc� acertou!");
			}
		}
	}	
    return 0;
}	
