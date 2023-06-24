//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
// 	LISTA 1, QUESTÃO 4: 
// 	Elabore um programa que receba como dados de entrada duas notas 
// 	de vários alunos
// 	e ao final mostra:
// 	a) A quantidade de alunos com media maior ou igual a 7,0;
// 	b) A Menor media da Turma;
// 	c) A Media geral da turma;
// 	d) Quantas vezes o programa rodou;
// 	Observação: O programa deve finalizar quando for digitado o valor 0 
// 	(zero) e utilizar no
// 	máximo 6 variáveis não utilizar vetores ou matrizes.

#include <stdio.h>
#include <stdlib.h>

    int main() {
//DECLARACAO DE VARIAVEIS    	
    float n1, n2, menor = 10, media, geral;
    int qtdApro = 0, qtdAlu = 0, qtdRodadas; //OBS: NAO CONSEGUI USAR APENAS 6 VARIAVEIS

//IMPRESSAO DO CABECALHO DO SISTEMA    
    printf("===== NOTAS DOS ALUNOS =====\nObs: Digite 0 para finalizar o programa\n");
//CONDICAO PARA CALCULOS DAS MEDIAS  
	while (1) {	
//IMPRESSAO DO PEDIDO DA PRIMEIRA NOTA	
        printf("Digite a primeira nota (ou 0 para sair): ");
        scanf("%f", &n1);
        if (n1 == 0) {
            break;
        }
//IMPRESSAO DO PEDIDO DA SEGUNDA NOTA        
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        media = (n1 + n2) / 2;
        qtdAlu++;
        qtdRodadas++;
        geral += media;
        if (media >= 7.0) {
            qtdApro++;
        }
        if (media < menor) {
            menor = media;
        }
    }
//REIMPRESSAO DO CABECALHO DO SISTEMA    
    printf("===== NOTAS DOS ALUNOS =====\n\n");    
    printf("Quantidade de alunos com media maior ou igual a sete: %d", qtdApro);
    printf("\nValor da menor media da turma: %.2f", menor);
    printf("\nA Media geral da turma: %.2f", geral);
    printf("\nO programa rodou %d vezes", qtdRodadas);
        return 0;
    }
 

