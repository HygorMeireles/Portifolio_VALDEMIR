/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Matrizes



Parte 1 - Questão 2
Crie um programa que armazene 3 nomes numa matriz de strings. Após o cadastro, você deverá 
criar um MENU que informe:
1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja, 
mostra do último ao primeiro nome cadastrado;
2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
5 – SAIR   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char strNomes[3][50];
    int option, i, j, qtdPaulo, qtdLetraA = 0, qtdLetraCNome2 = 0, contMenu = 0;

    printf("Informe tres nomes: \n");

    for(i = 0; i < 3; i++){
        printf("\nNome %d: ", i+1);
        scanf("%50[^\n]s", strNomes[i]);
        fflush(stdin);
    }

    do {
        if(contMenu > 0){
            printf("\n\nPRESSIONE ALGUMA TECLA PARA CONTINUAR E SELECIONAR OUTRA OPCAO!\n\n");
            system("PAUSE");
            system("cls");
        }

        printf("\n\n\n---MENU---\n\n\n");
        printf("1 - Mostra os nomes cadastrados em maiusculo e na ordem inversa;\n");
        printf("2 - Mostra quantas pessoas com o nome 'PAULO' foram cadastradas;\n");
        printf("3 - Mostra quantas letras 'A' foram cadastradas na matriz de strings;\n");
        printf("4 - Mostra quantas letras 'C' o segundo nome cadastrado possui;\n");
        printf("5 - SAIR.\n\n\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch(option){

            //Nomes em inverso e em maiusculo
            case 1:
                for(i=2; i >= 0; i--){
                    strupr(strNomes[i]); // Função da biblioteca string.h que converte o nome para maiúsculo
                    printf("Nome %d: %s\n", i+1, strNomes[i]);
                }
            break;


            //Quantas pessoas com o nome Paulo foram cadastradas
            case 2: 
                qtdPaulo = 0;
                for(i=0; i<3; i++){
                    if(stricmp(strNomes[i], "PAULO") == 0){ // A função strcasecmp compara as strings ignorando a diferença entre maiúsculas e minúsculas.
                        qtdPaulo++;
                    }
                }
                printf("\nA quantidade de vezes que o nome 'PAULO' foi cadastrado e: %d\n", qtdPaulo);

            break;

            //Mostra quantas letras 'A' foram cadastradas na matriz de strings;
            case 3: 
                for(i=0; i<3; i++){
                    for(j=0; j<strlen(strNomes[i]); j++){
                        if(strNomes[i][j] == 'a' || strNomes[i][j] == 'A'){ // verifica se a letra é 'A' ou 'a'
                            qtdLetraA++;
                        }
                    }
                }
                printf("\nA quantidade de vezes que a letra A aparece nas strings e: %d\n", qtdLetraA);

            break;

            //Mostra quantas letras ‘C’ o segundo nome cadastrado possui
            case 4:
              for(i=0; i<strlen(strNomes[1]); i++){
                    if(strNomes[1][i] == 'c' || strNomes[1][i] == 'C'){ // verifica se a letra é 'C' ou 'c'
                        qtdLetraCNome2++;
                    }
                }
                printf("\nA quantidade de vezes que a letra C aparece no segundo nome e: %d\n", qtdLetraCNome2);
            break;

            //Finaliza o programa
            case 5: 
                printf("\nFIM DO PROGRAMA!\n");
            break;

            //Lida com uma possível opção inválida
            default: 
                printf("\nOpcao invalida!\n\n");
        }
        contMenu++;
    }while(option != 5);

    return 0;
}
