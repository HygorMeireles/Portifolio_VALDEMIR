//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERCÍCIO #5: Faça um programa em C que leia a nota final, o total de presenças e o número total de
//  aulas ministradas e imprima a nota final, o total de presenças e uma mensagem dizendo se
//  este aluno foi aprovado ou reprovado. Sabe-se que a freqüência necessária é de no mínimo
//  75% das aulas ministradas e que a nota mínima deve ser maior ou igual a 6.0. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARAÇÃO DE VARIÁVEIS	
    int presencas, aulas;
    float notas;
//SETLOCALE PARA PERMITIR PONTUAÇÃO GRÁFICA	
	setlocale(LC_ALL, "Portuguese"); 
//IMPRESSÃO DO TÍTULO DO PROGRAMA
	printf("=====CÁLCULO DE NOTAS FINAIS=====\n\n");	
//IMPRESSÃO DA SOLICITAÇÃO DA NOTA FINAL
    printf("Digite a nota final: ");
//SCANF DA NOTA FINAL    
    scanf("%f", &notas);
//IMPRESSÃO DA SOLICITAÇÃO DAS PRESENÇAS
    printf("\nDigite o total de presenças: ");
//SCANF DAS PRESENÇAS    
    scanf("%d", &presencas);
//IMPRESSÃO DA SOLICITAÇÃO DO NÚMERO TOTAL DAS AULAS 
    printf("\nDigite o numero total de aulas ministradas: ");
//SCANF DAS AULAS    
    scanf("%d", &aulas);
//DECLARAÇÃO DA VARIÁVEL DO CÁCLULO DA FREQUÊNCIA  
	float frequencia = presencas / aulas; 
//CALCULO FINAL DA RELAÇÃO NOTAS/PRESENÇAS	    
    if (notas >= 6.0 && frequencia >= 0.75) {
        printf("\nNota final: %.1f", notas);
        printf("\nTotal de presencas: %d", presencas);
        printf("\nAprovado!");
    } else {
        printf("\nNota final: %.1f", notas);
        printf("\nTotal de presenças: %d", presencas);
        printf("\nReprovado.");
    }

    return 0;
}





