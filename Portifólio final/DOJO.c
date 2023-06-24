/*
Grupo: Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima, Hygor Gabriel Meireles, Gabriel Ornelas 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    // Recebe o nome de usuário
    printf("Digite o nome de usuario: ");
    gets(username);

    // Recebe a senha
    printf("Digite a senha: ");
    gets(password);

    // Verifica se o nome de usuário e a senha são válidos
    if (strcmp(username, "Mateus") == 0 && strcmp(password, "senha") == 0) {
        printf("Usuario autenticado com sucesso!\n");
        } else {
            printf("Nome de usuario ou senha invalidos.\n");
        }

    /*Faz a comparação do conteúdo de duas strings, porém, deve ser especificado o tamanho a ser comparado.
    Possíveis valores de retorno:
    
    0: Conteúdo das strings são iguais
    menor que 0: conteúdo da string1 é menor do que string2
    maior que 0: conteúdo da string1 é maior do que string2*/

    return 0;
}