//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
// 	LISTA 1, QUESTÃO 2: 
//	Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 
//	1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que 
//	recebendo a altura e o crescimento anual de duas pessoas calcule e 
//	imprima quantos anos serão necessários para que a mais baixa seja 
//	maior que a outra. Caso isto não ocorra em 100 anos informar mensagem 
//	de impossibilidade.
//	Encerre a entrada de dados quando for digitada uma idade negativa. 
//	(Não use vetores ou matrizes).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARAÇÃO DE VARIÁVEIS
	int anos = 0;	
	float a1, a2, cresci1, cresci2;
//IMPRESSAO DO CABECALHO DO PROGRAMA 
    printf("===== CALCULO DE QUANTOS ANOS SERAO NECESSARIOS PARA QUE \nA PESSOA MAIS BAIXA SEJA MAIOR QUE A OUTRA =====\n\n");   
    printf("===== PRIMEIRA PESSOA =====\nInsira um valor negativo para sair\n");
//IMPRESSAO DA SOLICITACAO DA ALTURA 1    
    printf("Insira sua altura: \n");
//SCANF DO VALOR DA ALTURA 1    
    scanf("%f",&a1);
//PRINTF DA SOLICITACAO DO CRESCIMENTO ANUAL 1    
    printf("\nInsira seu crescimento anual: \n");
//SCANF DO VALOR DO CRESCIMENTO ANUAL 1
    scanf("%f",&cresci1);
//LIMPA TELA DO SISTEMA    
    system("cls");
//CONDICAO PARA CONTINUAR O PROGRAMA
	if(a1 > 0 && cresci1 > 0){
//PRINTF DO CABECALHO DA SEGUNDA PESSOA	
    	printf("===== CALCULO DE QUANTOS ANOS SERAO NECESSARIOS PARA QUE \nA PESSOA MAIS BAIXA SEJA MAIOR QUE A OUTRA\n\n");  	
    	printf("===== SEGUNDA PESSOA =====\n");
//IMPRESSAO DA SOLICITACAO DA ALTURA 2
    	printf("Insira sua altura: \n");
//SCANF DO VALOR DA ALTURA 2 	
    	scanf("%f",&a2);
 //PRINTF DA SOLICITACAO DO CRESCIMENTO ANUAL 2    	
	    printf("\nInsira seu crescimento anual: \n");
//SCANF DO VALOR DO CRESCIMENTO ANUAL 2	    
	    scanf("%f",&cresci2);
//LIMPA TELA DE SISTEMA	    
//CONDICOES E CALCULO DO VALOR DA ALTURA PARA COMPARAR SE UMA E MAIOR QUE A OUTRA
    if(a2 > 0 && cresci2 > 0){
    if(a1 > a2){
    while(a1 > a2){
		a1 += cresci1;
		a2 += cresci2;
    	anos++;
    	}
    }else{
    while (a2 > a1){
        a1 += cresci1;
        a2 += cresci2;
        anos++;
    	}
    }
//INFORMACAO DE QUE E IMPOSSIVEL UMA CRESCER MAIS QUE A OUTRA EM 100 ANOS    
    if(anos > 99){
        printf("Impossivel isso ocorrer!");
    }else{
    if(a1 > a2){
        printf("Levou %d anos para que a primeira pessoa ficasse maior que a segunda pessoa", anos);
    }else{
        printf("Levou %d anos para que a segunda pessoa ficasse maior que a primeira pessoa", anos);
    		}
    	}                     
    }else{
    	printf("\nFINALIZANDO! VALOR INVALIDO!");    
    }
	}else{
    	printf("\nFINALIZANDO! VALOR INVALIDO!");
	}
        return 0;
}
