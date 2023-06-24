//ALGUMAS ATIVIDADES DAS AULAS DE SABADO
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float notas[4],media = 4,calculo;
    int i = 0;

    printf("Insira 4 notas:\n");

    while(i < 4)
    {   
        scanf("%f",&notas[i]);
        i++;
    }
    
    system("cls");

    calculo = (notas[0] + notas[1] + notas[2] + notas[3]) / media;
    printf("A media e: %.2f", calculo);
    return 0;
}
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
2. Chico tem 1.50 metros e cresce 2 centímetros por ano,
enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano.
Faça um programa em C que recebendo a altura e o crescimento
anual de duas pessoas calcule e imprima quantos anos serão nece-
ssários para que a mais baixa seja maior que o outro. Caso isto
não ocorra em 100 anos informar mensagem de impossibilidade. Ence-
rre a entrada de dados quando for digitada uma idade negativa.
(Não use vetores ou matrizes);
Exercício de While
*/

int main(void)
{

    //Declarando variáveis
    float altura_Chico,altura_Ze;
    float taxa_Crecimento_Chico,taxa_Crecimento_Ze;
    float Altura_Alcancada_Chico,Altura_Alcancada_Ze;
    float altura_Chico_alcancar,altura_Ze_alcancar;
    int anos_necessarios1,anos_necessarios2;
    int limite,idade_chico,idade_Ze;

    //Atribuindo valor as variáveis
    altura_Chico = 1.50;
    altura_Ze = 1.10;
    taxa_Crecimento_Chico = 0.02;
    taxa_Crecimento_Ze = 0.03;
    limite = 100;

    //Escrevendo o Programa
    while (true)
    {
        printf("Insira a altura que Chico e Ze querem alcancar: ");
        scanf("%f %f",&altura_Chico_alcancar,&altura_Ze_alcancar);

        printf("Insira a idade que Chico e Ze tem: ");
        scanf("%i %i",&idade_chico,&idade_Ze);

        if(idade_chico < 0 || idade_Ze < 0){
            printf("Idade Invalida!");
            break;
        }

        //Calculos dos anos necessarios
        anos_necessarios1 = (altura_Chico_alcancar - altura_Chico) / taxa_Crecimento_Chico;
        anos_necessarios2 = (altura_Ze_alcancar - altura_Ze) / taxa_Crecimento_Ze;

        //Calculando a altura adquirida para fazer comparativo
        Altura_Alcancada_Chico = altura_Chico + (taxa_Crecimento_Chico*anos_necessarios1);
        Altura_Alcancada_Ze = altura_Ze + (taxa_Crecimento_Ze*anos_necessarios2);

        //Vendo se está dentro do limite
        if(anos_necessarios2 > limite){
            printf("Impossivel chegar nessa altura");
        }

        //Display Comparativo
        printf("\nAltura que Chico alcancou: %.2f",Altura_Alcancada_Chico);
        printf("\nAltura que Ze alcancou: %.2f",Altura_Alcancada_Ze);
        printf("\nAnos necessarios para Chico: %i",anos_necessarios1);
        printf("\nAnos necessarios para Ze: %i\n",anos_necessarios2);
        system("\nPause\n");
        system("cls");
        }

    return 0;
}

//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
    int ano,dia_semana,dia,mes;
    const char ESC = 27;

    do
    {
        printf("Digite a data no formato dd mm aa:");
        scanf("%i %i %i",&dia,&mes,&ano);

        if(mes < 3){
            ano--;
        }else{
            dia_semana -= (int)(0.4*mes+2.3);
            dia_semana += (int)(ano/4) - (int)((ano/100+1)*0.75);
            dia_semana %= 7;
        }

        switch(dia_semana)
        {
            case 0:
            printf("\nDomingo");
            break;

            case 1:
            printf("\nSegunda");
            break;

            case 2:
            printf("\nTerca");
            break;

            case 3:
            printf("\nQuarta");
            break;

            case 4:
            printf("\nQuinta");
            break;

            case 5:
            printf("\nSexta");
            break;

            case 6:
            printf("\nSabado");
            break;
        }    
    } while (getch != ESC);
    
    return 0;
}
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba como dados de entrada de dois valores
e mostre como resultado as 4 operações matemática*/

int main(void)
{    
    float numero1,numero2,soma,subtracao,divisao,multiplicacao;

    printf("Insira dois valores: ");
    scanf("%f %f",&numero1,&numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    if(numero1 / numero2 && numero2 == 0){
        printf("\nA soma e: %.2f",soma);
        printf("\nA subtracao e: %.2f",subtracao);
        printf("\nA multiplicacao e: %.2f",multiplicacao);
        printf("\nNao existe divisao por zero\n");
    }else{
        printf("\nA soma e: %.2f",soma);
        printf("\nA subtracao e: %.2f",subtracao);
        printf("\nA multiplicacao e: %.2f",multiplicacao);
        printf("\nA divisao: %.2f", divisao);
    }
    return 0;
}
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

/*
A prefeitura de uma cidade fez uma pesquisa entre seus
habitantes,coletando dados sobre o salário e o número de
filhos. A prefeitura deseja saber:

A média salarial da população
A média do número de filhos
O Maior Salário
O percentual de pessoas com salário até R$ 100,00.
*/

int main(void)
{
    int Numero_filhos,Quantidade = 0, Quantidade_AbaixoCem = 0;
    float Percentual,Salario,Salario_medio,Media_Filhos,MaiorSalario =0;

    printf("Digite o salario: ");
    scanf("%f",&Salario);

    while(Salario > 0)
    {
        printf("\nDigite o numero de filhos: ");
        scanf("%i",&Numero_filhos);

        Salario_medio += Salario;
        Media_Filhos += Numero_filhos;
        Quantidade++;

        if (Salario < 100){
            Quantidade_AbaixoCem++;
        }if (Salario > MaiorSalario){
            MaiorSalario = Salario;
        }
        
        printf("\nDigite o salario: ");
        scanf("%f",&Salario);
    }

    Salario_medio = Salario_medio / Quantidade;
    Media_Filhos = Media_Filhos / Quantidade;
    Percentual = ((float)Quantidade_AbaixoCem / Quantidade)*100;

    printf("Salario medio: R$ %.2f\n",Salario_medio);
    printf("Media de Filhos:  %.2f\n",Media_Filhos);
    printf("Maior Salario: R$ %.2f\n",MaiorSalario);
    printf("Percentual abaixo de R$ 100.00: %.2f%%\n",Percentual);   
    return 0;
}
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    //Exércio for
    float notas[3],total,media;
    char letra = 'P';

   while(letra != 'F')
   {
        printf("\nInsira as notas: ");

        for(int i = 0; i <= 3; i++){
            scanf("%f",&notas[i]);
        }

        for(int i = 0; i <= 3; i++)
        total = notas[0]+notas[1]+notas[2]+notas[3];
        
        media = total/4;
        printf("O resultado e: %.2f\n",media);

        system("pause");
        system("cls");
        printf("Caso deseja continuar digite (P), mas caso nao, digite(F): \n");
        letra = getch();       
   }
    return 0;
}
//------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero1,numero2,numero3;

    scanf("%i %i %i",&numero1,&numero2,&numero3);

    if(numero1 > numero2 && numero1 > numero3)
    {
        printf("%i e o maior valor inserido",numero1);
    }
    else if(numero1 < numero2 && numero2 > numero3)
    {
        printf("%i e o maior valor inserido",numero2);
    }
    else if(numero3 > numero1 && numero3 > numero2)
    {
        printf("%i e o maior valor inserido",numero3);
    }

    return 0;
}
//------------------------------------------------------------------------


