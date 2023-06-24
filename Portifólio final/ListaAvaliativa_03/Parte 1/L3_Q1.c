/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

Parte 1 - Questão 1: 
Crie um programa que carregue (armazene) números numa matriz 3 x 3.
Após a leitura dos números, você deverá criar um MENU que ofereça as seguintes
opções:
1 – Mostra a quantidade de números pares armazenados;
2 – Mostra a soma dos números ímpares armazenados;
3 – Mostra o maior e o menor número armazenado;
4 – Mostra a média dos números armazenados;
5 – Mostra a quantidade de números armazenados que são iguais a 10;
6 – Mostra a multiplicação dos números armazenados na diagonal principal
(índice da linha igual ao índice da coluna);
7 – Mostra a soma dos números armazenados que são divisíveis por 5.
8 – Armazena num vetor todos os números menores que 8. Mostrar o vetor
resultante.
9 – Consulta um número na matriz. O usuário deverá informar qual o número
deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices)
na matriz.
10 – SAIR
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int matriz[3][3], option, i, j, k = 0, qtdPares = 0, somaImpares = 0, menorNumero, maiorNumero, somaNumeros = 0, soma10 = 0, multiDiagonal = 1, somaDiv5 = 0, menorQue8[9], pesquisa, contMenu = 0;
    float mediaNumeros;



    printf("Informe NOVE (9) numeros inteiros: ");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\nNumero %d: ", k + 1);
            scanf("%d", &matriz[i][j]);
            k++;
        }
    }


    do{
        if(contMenu > 0){
            printf("\n\nPRESSIONE UMA TECLA PARA CONTINUAR E SELECIONAR OUTRA OPCAO!\n\n");
            system("PAUSE");
            system("cls");
        }

        printf("\n\n------------MENU------------\n\n");
        printf("Escolha uma das opcoes a seguir: \n\n");
        printf("1 - Mostra a quantidade de numeros pares armazenados;\n\n");
        printf("2 - Mostra a soma dos numeros impares armazenados;\n\n");
        printf("3 - Mostra o maior e o menor numero armazenado;\n\n");
        printf("4 - Mostra a media dos numeros armazenados;\n\n");
        printf("5 - Mostra a quantidade de numeros armazenados que sao iguais a 10;\n\n");
        printf("6 - Mostra a multiplicacao dos numeros armazenados na diagonal principal;\n\n");
        printf("7 - Mostra a soma dos numeros armazenados que sao divisiveis por 5;\n\n");
        printf("8 - Armazena num vetor todos os numeros menores que 8. Mostrar o vetor resultante;\n\n");
        printf("9 - Consultar um numero na matriz e, caso encontre, informar numero e posicao na matriz;\n\n");
        printf("10 - SAIR.\n\n");
        printf("----------------------------\n\n\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &option);

        system("cls");

        switch (option){

            //Quantidade Pares
            case 1:
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(matriz[i][j] % 2 == 0){
                            qtdPares = qtdPares + 1;
                        }
                    }
                }
                printf("A quantidade de numeros pares e: %d\n", qtdPares);
                break;


            //Soma dos números ímpares
            case 2:
                for(i = 0; i < 3; i++){
                        for(j = 0; j < 3; j++){
                            if(matriz[i][j] % 2 != 0){
                                somaImpares = matriz[i][j] + somaImpares;
                            }
                        }
                    }
                printf("O resultado da soma dos impares e: %d\n", somaImpares);
                break;


            //Maior e menor número armazenado
            case 3:
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(i == 0 && j == 0){
                            menorNumero = matriz[i][j];
                            maiorNumero = matriz[i][j];
                        }else {
                            if(matriz[i][j] < menorNumero){
                                menorNumero = matriz[i][j];
                            }
                            if(matriz[i][j] > maiorNumero){
                                maiorNumero = matriz[i][j];
                            }
                        }
                    }
                }
                printf("O menor numero armazenado e: %d\n", menorNumero);
                printf("O maior numero armazenado e: %d\n\n", maiorNumero);
            break;

            //Média
            case 4:
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        somaNumeros = somaNumeros + matriz[i][j];
                    }
                }
                mediaNumeros = somaNumeros;
                printf("A media dos numeros informados e: %.2f\n", mediaNumeros/9);
                break;

            //Quantidade de iguais a 10
            case 5:
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(matriz[i][j] == 10){
                            soma10++;
                        }
                    }
                }
                printf("A quantidade de vezes que o numero 10 foi informado e: %d\n", soma10);
                break;

            // multiplicacao dos numeros armazenados na diagonal principal
            case 6:
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(i == j){
                            multiDiagonal = multiDiagonal * matriz[i][j];
                        }
                    }
                }

                printf("A multiplicacao dos numeros na diagonal e: %d\n", multiDiagonal);
                break;

            //Soma dos números divisíveis por 5
            case 7:
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(matriz[i][j] % 5 == 0){
                            somaDiv5 = somaDiv5 + matriz[i][j];
                        }
                    }
                }
                printf("%d\n", somaDiv5);
            break;



            //Armazenar em um vetor todos os números menores que 8
            case 8: 

                k = 0;

                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(matriz[i][j] < 8){
                            menorQue8[k] = matriz[i][j];
                            k++;
                        }
                    }
                }
                if(k < 1){
                    printf("Nao ha numeros menores que 8.\n");
                }else {
                    for(i = 0; i < k; i++){
                        printf("%d \n", menorQue8[i]);
                    }
                }

            break;


            //Consulta um número na matriz. O usuário deverá informar qual o número deseja procurar na matriz, caso encontre, informar o número e qual a posição(índices) na matriz.
            
            case 9:
                printf("Informe o numero que deseja procurar na matriz: ");
                scanf("%d", &pesquisa);
                for(i = 0; i < 3; i++){
                    for(j = 0; j < 3; j++){
                        if(matriz[i][j] == pesquisa){
                            printf("Este numero se encontra no indice [%d][%d]\n\n", i, j);
                        }
                    }
                }
            break;

            case 10: 
                printf("Fim do programa!\n");
            break;

            default: 
                printf("Opcao invalida.\n");

        }
        contMenu++;
    }while(option != 10);

    return 0;
}
