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

#define MAX_STR_LEN 100

int main() {
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    int n;

    printf("Digite a primeira string: ");
    gets(str1);

    printf("Digite a segunda string: ");
    gets(str2);

    printf("A primeira string digitada foi: ");
    puts(str1);

    printf("A segunda string digitada foi: ");
    puts(str2);

    if (strcmp(str1, str2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    printf("Digite o numero de caracteres a serem concatenados: ");
    scanf("%d", &n);

    strncat(str1, str2, n);

    printf("A concatenacao das duas strings com os primeiros %d caracteres da segunda e: ", n);
    puts(str1);

    strncpy(str2, str1, MAX_STR_LEN);

    printf("A segunda string apos copiar os primeiros %d caracteres da primeira e: ", MAX_STR_LEN);
    puts(str2);

    return 0;
}