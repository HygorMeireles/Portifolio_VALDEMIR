//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUESTÃO #7: Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o 
//	valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
//	. Considere 
//	(atribua) para pi o valor 3.14159.


#include <stdio.h>
#include <stdlib.h>
//DEFININDO O VALOR DE PI COMO UMA CONSTANTE
#define PI 3.14159

int main() {
//DECLARAÇÃO DE VARIAVEIS	
    float raio;
    double volume;
//IMPRESSÃO DA SOLICITAÇÃO DO RAIO DA ESFERA    
    printf("Digite o valor do raio da esfera: ");
//SCANF DO RAIO DA ESFERA    
    scanf("%f", &raio);
//CALCULO DO VOLUME DADO PELA FORMULA    
    volume = (4.0/3.0) * PI * raio * raio * raio; 
//IMPRESSAO FINAL DO VALOR DO VOLUME NA TELA    
    printf("VOLUME = %.3f", volume); 
    return 0;
}
