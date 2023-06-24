/*
Grupo: Leonardo Duarte Veiga Ferreira, Mateus Salvador de Lima, Gabriel Damásio de Ornelas, Mateus Bittencourt Camandaroba e Hygor Gabriel Meireles
Turma: GPE02M0392
Turno: Matutino
Curso: Ciência da Computação
Universidade Católica de Brasília (Taguatinga)

Escolher 5 das funções abaixo e desenvolver 5 programa que utilize as funções:
gets(), puts(), strlen(), strcat(), strcmp(), strcpy(), strncat(), strncmp(), strncpy()
*/

#include <stdio.h>
#include <string.h>
//DECLARANDO CONSTANTES PARA NAO SEREM ALTERADAS DURANTE A EXECUÇÃO DO PROGRAMA
#define MAX_PESSOAS 100
#define MAX_NOME 50

int main() {
//DECLARAÇÃO DAS VARIÁVEIS	
    char nomes[MAX_PESSOAS][MAX_NOME];
    int num_pessoas = 0;
	int i = 0;
	int j = 0;
//PRINTF DA SOLICITAÇÃO DOS NOMES E UTILIZANDO O WHILE PARA DEPOIS DECLARAR "FIM" QUANDO ESTIVER DECLARADO TODOS OS NOMES
    printf("Digite os nomes das pessoas (digite 'fim' para parar):\n");
    while (num_pessoas < MAX_PESSOAS) {
        printf("Pessoa numero %d: ", num_pessoas+1);
//GETS PARA O USUARIO DIGITAR OS NOMES       
        gets(nomes[num_pessoas]);
//STRCMP PARA COMPARAR OS NOMES DURANTE A ORDENAÇÃO        
        if (strcmp(nomes[num_pessoas], "fim") == 0) {
            break;
        }
        num_pessoas++;
    }
 
//ORDENANDO OS NOMES EM ORDEM ALFABÉTICA PELAS MATRIZES
    for (i = 0; i < num_pessoas - 1; i++) {
        for (j = i+1; j < num_pessoas; j++) {
//STRCMP PARA COMPARAR OS NOMES DURANTE A ORDENAÇÃO         	
            if (strcmp(nomes[i], nomes[j]) > 0) {
                char temp[MAX_NOME];
//STRCPY PARA UTILIZAR A TROCA DOS VETORES DAS STRINGS                  
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
 
//IMPRIMINDO OS NOMES ORDENADOS COM OS NÚMEROS DE CARACTERES
    printf("\nNomes em ordem alfabetica (com o numero de caracteres):\n\n");
    for (i = 0; i < num_pessoas; i++) {
//PUTS PARA IMPRIMIR OS NOMES    	
        puts(nomes[i]);
//PRINTF PARA IMPRIMIR A QUANTIDADE DE CARACTERES USANDO O STRLEN        
        printf("(%d caracteres)\n\n", strlen(nomes[i]));
    }
 
    return 0;
}