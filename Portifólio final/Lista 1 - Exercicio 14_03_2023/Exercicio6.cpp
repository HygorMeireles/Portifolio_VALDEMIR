//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERCÍCIO #6: . Faça um algoritmo recebe um valor inteiro e se o número for maior que 10, será impressa a
//  frase: "O número e maior que 10". Se o número for menor que 10, será impressa a frase:
//  “O número é menor que 10”. Se o número for igual a 10 aparecerá a frase: “Você acertou”.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARAÇÃO DE VARIÁVEIS
	int valor;
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese");
//IMPRESSÃO DO TÍTULO DO PROGRAMA	
	printf("===== ACERTE O NÚMERO! =====\n\n");
//IMPRESSÃO DA SOLICITAÇÃO DO VALOR INTEIRO		
	printf("Digite um valor inteiro: ");
//SOLICITAÇÃO AO USUÁRIO PELO SCANF DO VALOR INTEIRO	
	scanf("%d", &valor);
//LIMPA TELA	
	system("cls");
//REIMPRESSÃO DO TÍTULO	
	printf("===== ACERTE O NÚMERO! =====\n\n");	
//INFORME DO VALOR DIGITADO	
	printf("O número que você digitou foi: %d\n", valor);
//CONDIÇÕES PARA O VALOR INTEIRO INSERIDO	
	if(valor > 10){
		printf("O número é maior que 10");
	}else{
		if(valor < 10){
			printf("O número é menor que 10");
		}else{
			if(valor = 10){
				printf("Você acertou!");
			}
		}
	}	
    return 0;
}	
