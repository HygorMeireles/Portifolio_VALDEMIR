//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA 01 // DIA 14/03/2023
// 	EXERC�CIO #5: Fa�a um programa em C que leia a nota final, o total de presen�as e o n�mero total de
//  aulas ministradas e imprima a nota final, o total de presen�as e uma mensagem dizendo se
//  este aluno foi aprovado ou reprovado. Sabe-se que a freq��ncia necess�ria � de no m�nimo
//  75% das aulas ministradas e que a nota m�nima deve ser maior ou igual a 6.0. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
//DECLARA��O DE VARI�VEIS	
    int presencas, aulas;
    float notas;
//SETLOCALE PARA PERMITIR PONTUA��O GR�FICA	
	setlocale(LC_ALL, "Portuguese"); 
//IMPRESS�O DO T�TULO DO PROGRAMA
	printf("=====C�LCULO DE NOTAS FINAIS=====\n\n");	
//IMPRESS�O DA SOLICITA��O DA NOTA FINAL
    printf("Digite a nota final: ");
//SCANF DA NOTA FINAL    
    scanf("%f", &notas);
//IMPRESS�O DA SOLICITA��O DAS PRESEN�AS
    printf("\nDigite o total de presen�as: ");
//SCANF DAS PRESEN�AS    
    scanf("%d", &presencas);
//IMPRESS�O DA SOLICITA��O DO N�MERO TOTAL DAS AULAS 
    printf("\nDigite o numero total de aulas ministradas: ");
//SCANF DAS AULAS    
    scanf("%d", &aulas);
//DECLARA��O DA VARI�VEL DO C�CLULO DA FREQU�NCIA  
	float frequencia = presencas / aulas; 
//CALCULO FINAL DA RELA��O NOTAS/PRESEN�AS	    
    if (notas >= 6.0 && frequencia >= 0.75) {
        printf("\nNota final: %.1f", notas);
        printf("\nTotal de presencas: %d", presencas);
        printf("\nAprovado!");
    } else {
        printf("\nNota final: %.1f", notas);
        printf("\nTotal de presen�as: %d", presencas);
        printf("\nReprovado.");
    }

    return 0;
}





