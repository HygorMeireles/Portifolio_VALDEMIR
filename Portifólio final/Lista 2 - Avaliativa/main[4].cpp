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

int main() {

    char str1[20], str2[20];

        printf("===Nome===\n");

        printf("Insira seu primeiro nome: \n");
        gets(str1);

        printf("Insira seu sobrenome: \n");
        gets(str2);

        strcat(str1, " ");

        strncat(str1, str2, 50);
        
        puts(str1);
   
   
   
   
   
   
   return 0;
}