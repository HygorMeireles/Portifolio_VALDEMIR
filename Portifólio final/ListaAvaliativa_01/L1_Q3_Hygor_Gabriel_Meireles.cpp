//  UNIVERSIDADE CATÓLICA DE BRASÍLIA
//  CURSO BACHAREL EM CIÊNCIAS DA COMPUTAÇÃO
//  DISCIPLINA: ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
// 	LISTA 1, QUESTÃO 3: 
//  Elabore um programa que faça o sorteio de vários números e ao final 
//  mostra:
//  a) A quantidade de números sorteados;
//  b) O Maior numero sorteado;
//  c) Quantos números pares foram sorteados;
//  Observação: O programa deve finalizar quando for sorteado o valor 0 
//  (zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.

#include <stdio.h>
#include <stdlib.h>
//INCLUSAO DA BIBLIOTECA TIME PARA USAR O GERADOR DE NUMEROS ALEATORIOS
#include <time.h>
 
int main() {
//DECLARACAO DE VARIAVEIS	
    int maior = 0, i = 0, par = 0;
//INICIANDO O GERADOR DE NUMEROS ALEATORIOS    
    srand(time(NULL));
//EXECUCAO DO LOOP INFINITO COM O WHILE   
    while (1) {
//ENQUANTO O LOOP E EXECUTADO O PROGRAMA GERA NUMEROS ALEATORIOS ENTRE 0 E 999    	
    int n = rand() % 1000;
//IMPRESSAO DO NUMERO NA TELA        
    printf("%d\n", n);
//O LOOP SERA INTERROMPIDO SE A VARIAVEL N FOR IGUAL A ZERO 
    if (n == 0){
    break;
    }
//SE A VARIVAL FOR IGUAL A ZERO SIGNIFICA QUE AINDA NAO FOI GERADO NENHUM NUMERO ALEATORIO, ENTAO MAIOR E INICIALIZADA COM O VALOR DO PRIMEIRO NUMERO GERADO
    if(i == 0){
    	maior = n;
    }
//O COGIO ESTA ARMAZENANDO O MAIOR NUMERO GERADO NA VARIAVEL MAIOR
        if (n >= maior){
            maior = n;
        } 
//CONDICAO PARA CASO A QUANTIDADE DE NUMEROS GERADOS SEJA PAR, VERIFICANDO SE O NUMERO GERADO E DIVISIVEL POR 2 E INCREMENTA A VARIAVEL DAS PARES EM 1
        	if (n % 2 == 0){
            	par++;
        	}
        i++;
    }
//PRINTF EM TELA DO CABECALHO    
    printf("\n\n===== RESULTADO DA GERACAO ALEATORIA DE NUMEROS =====\n\n");
//PRINTF DA QUANTIDADE DE NUMEROS SORTEADOS ALEATORIAMENTE    
    printf("NUMEROS SORTEADOS: %d \n", i);
//PRINTF DO MAIOR NUMERO SORTEADO    
    printf("MAIOR NUMERO SORTEADO: %d \n", maior);
//PRINTF DO TOTAL DE NUMEROS PARES    
    printf("TOTAL DE NUMEROS PARES: %d \n", par);
    return 0;
}
