//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
// 	LISTA 1, QUEST�O 5: 
// 	Desenvolva um programa que calcula a metragem quadrada de um 
// 	terreno, usando o teste no final para criar a op��o de digitar novos 
// 	valores sem sair do programa.
// 	O programa dever� pedir ao usu�rio para digitar a metragem1 do terreno, 
// 	a metragem 2 e em seguida mostrar o tamanho total do terreno em 
// 	metros quadrados. O programa dever� perguntar ao usu�rio se ele quer 
// 	continuar para digitar outras metragens ou encerrar o programa.

#include <stdio.h>
#include <stdlib.h>
//DECLARACAO DE VARIAVEIS
	int main() {
	int numero = 0;	
 	float m1, m2, total;
//EXECUCAO DO LACO DE REPETICAO
    while (numero < 1){
	printf("===== CALCULO DA METRAGEM QUADRADA DE UM TERRENO =====\n\n");
//SOLICITACAO DO VALOR DA PRIMEIRA METRAGEM    	
	printf("Insira a metragem 1: \n");
//SCANF DO VALOR DA METRAGEM 1  	
    scanf("%f",&m1);
//SOLICITACAO DO VALOR DA SEGUNDA METRAGEM         
    printf("\nInsira a metragem 2: \n");
//SCANF DO VALOR DA METRAGEM 2      
    scanf("%f",&m2);
//LIMPA TELA DE SISTEMA
    system("cls");
//CALCULO DA METRAGEM QUADRADA DO TERRENO        
    total = m1 * m2;
//IMPRESSAO DO RESULTADO FINAL  
	printf("===== CALCULO DA METRAGEM QUADRADA DE UM TERRENO =====\n\n");      
    printf("O tamanho total do terreno em metros quadrados e: %.2f\n\n",total);
//SOLICITACAO POR MEIO DO PRINT F PARA DIGITAR 0 PARA CONTINUAR E 1 PARA FECHAR O PROGRAMA        
    printf("\nDigite '0' para continuar e '1' para sair\n");
    scanf("%d",&numero);
//LIMPA TELA DE SISTEMA
    system("cls"); 
    }     
    return 0;
}


