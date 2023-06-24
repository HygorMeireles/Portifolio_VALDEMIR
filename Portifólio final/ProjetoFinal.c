/* ----- Projeto final -----
Curso: Ciência da Computação
Turma: GPE02M0392 - Algoritmos e Programação Estruturada
Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira,
Mateus Bittencourt Camandaroba e Mateus Salvador de Lima.
Professor: Valdemir dos Santos*/ 

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <unistd.h> /*Biblioteca para trabalhar com a função usleep*/
#define R 25; /*Constante para o valor de R, que vale 25.*/

/*Funcão que calcula o peso da coluna de concreto, seguindo a formula passada pelos engenheiros, onde:
peso = Volume * R; Volume = altura * largura * comprimento e R vale 25.*/
float pes(float alt, float larg, float comp){
    return (alt*larg*comp) * R;
}

/*Esta e a funcão do desenho do guindaste que aparece ao inicio do programa.*/
void desenho_Guindaste(){
	int i;
    char guindaste[25][40] = {
		"    /\\",
        "   /||\\",
        "  / |||\\",
        "====|||=========================",
        "====|||=========================",
        "    |||                        |",
        "    |||                        |",
        "    |||                        |",
        "    |||                       /\\",
        "    |||                      /  \\",
        "    |||                     /    \\",
        "    |||                    ========",
        "    |||                    ========",
        "    |||",
        "    |||",
        "    |||",
        "    |||",
        "    |||",
        "    |||",
        "    |||",
        "    |||                       o",
        "    |||                      /|\\",
        "    |||                      / \\",
        "    |||"
    };

    for (i = 0; i < 24; i++) {
        printf("%s\n", guindaste[i]);
    }
}

//Funcão que cria o desenho do gato que aparece apos cada um dos resultados.
void desenho_gato() {
	int i;
    char cat[5][12] = {
        "\t\t\t /\\_/\\ ",
        "\t\t\t( o.o )",
        "\t\t\t > ^ < "
    };

    for (i = 0; i < 3; i++) {
        printf("%s\n", cat[i]);
    }
}

//Funcão que retorna o caminhao
void desenho_Caminhao() {
	int i;
    char caminhao[6][33] = {
        "\t\t|---------------|_____",
        "\t\t| Da um 10 ai   |""'''|""\\__",
        "\t\t|_______________|||__|__|",
        "\t\t..(@)@)@)""""""****(@)(@)**(@)"  
    };

    for (i = 0; i < 4; i++) {
        printf("%s\n", caminhao[i]);
    }
}

//Função que cria a animação
void animacaoInovaLab() {
    char frase[] = "InovaLab Solutions";
    int tamanho = strlen(frase), larguraTela = 39, iteracoes = (larguraTela - tamanho + 1), i, j;

    for (i = 0; i < iteracoes; i++) {
        // Limpa a tela
        system("cls");

        // Imprime espaços em branco antes da frase
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        // Imprime a frase
        printf("%s\n", frase);

        // Aguarda 150 milissegundos
        usleep(150000);
    }
}

//Funcão main
int main(int argc, char *argv[]) {
    float peso, altura, largura, comprimento;
    int option, i = 0;

   //Tela inicial
   printf("---------------------- SEJA BEM-VINDO ----------------------\n\n");
   printf("============= *** GUINDASTE SIMULATOR 2023 *** =============\n\n\n");
   desenho_Guindaste();
   
   printf("\n------------------------------------------------------------");
   printf("\n\nEnvie qualquer tecla para iniciar o programa: ");
   getchar();
   
   //Funcão da biblioteca stdlib que muda as cores de fundo e de texto.
    system("color 70");
    
    //Funcão para limpar a tela
    system("cls");
    
    /*Recebendo as informacões necessarias para calcular o peso da coluna.*/
    printf("---------------- INFORMACOES SOBRE A COLUNA ----------------\n\n\n");
    printf("Informe a altura da coluna: ");
    scanf("%f", &altura);
    fflush(stdin);
   
    printf("\nInforme a largura da coluna: ");
    scanf("%f", &largura);
    fflush(stdin);
   
    printf("\nInforme a comprimento da coluna: ");
    scanf("%f", &comprimento);
    fflush(stdin);
   
   
    /*Obtendo o peso da coluna UTILIZANDO A FUNCÃO criada antes da funcão main que tem por objetivo
    realizar este calculo.*/
    peso = pes(altura,largura,comprimento);
    system("cls");
   
   
   /*Bloco de repeticão do-while onde se encontra o menu do programa. O usuario podera selecionar
   variadas opcões, ate que o mesmo opte pela saida deste bloco de repeticão.
   ps.: Cada uma das opcões selecionadas usa uma combinacão de cores de fundo e texto diferente.*/
    do{
    	
    	/*O i e uma variavel contadora que serve apenas como parametro para limpar o console e tambem 
		para retornar o mesmo para a cor padrao sempre que o usuario retornar ao menu.*/
        if(i > 0){
            system("cls");
            system("color 70");
        }
        if(i == 0){
            animacaoInovaLab();
        }else {
            printf("\t\t     InovaLab Solutions");
        }

		/*Informando ao usuario quais opcoes do menu ele podera escolher.*/
		printf("\n\n--------------------------- MENU ---------------------------\n\n");
        printf("1 - Confira a altura da coluna.\n");
        printf("2 - Confira a largura da coluna.\n");
        printf("3 - Confira o comprimento da coluna.\n");
        printf("4 - Confira o volume da coluna.\n");
        printf("5 - Confira o peso da coluna.\n");
        printf("6 - Confira o guindaste mais apropriado para a sua situacao.\n");
        printf("7 - Sair.\n");
        
        //Usuario escolhe a opcao
        printf("\nEscolha uma das opcoes: ");
        scanf("%d", &option);
        fflush(stdin);
        
        //Imprimindo o resultado
		printf("\n------------------------- RESULTADO ------------------------\n\n");
		
        switch(option){
                case 1:
                	system("color 70");
                    printf("\nA altura da coluna e: %.2f\n\n", altura);
                    desenho_gato();
                    printf("\n------------------------------------------------------------");
                    printf("\n\nEnvie qualquer tecla para continuar: ");
                    getchar();
                break;
       
                case 2:
                	system("color F1");
                    printf("\nA largura da coluna e: %.2f\n\n", largura);
                    desenho_gato();
                    printf("\n------------------------------------------------------------");
                    printf("\n\nEnvie qualquer tecla para continuar: ");
                    getchar();
                break;

                case 3:
                	system("color 8C");
                    printf("\nO comprimento da coluna e: %.2f\n\n", comprimento);
                    desenho_gato();
                    printf("\n------------------------------------------------------------");
                    printf("\n\nEnvie qualquer tecla para continuar: ");
                    getchar();
                break;

                case 4:
                	system("color 1F");
                    printf("\nO volume da coluna e: %.2f\n\n", (altura*largura*comprimento));
                    desenho_gato();
                    printf("\n------------------------------------------------------------");
                    printf("\n\nEnvie qualquer tecla para continuar: ");
                    getchar();
                break;

                case 5:
                	system("color 2F");
                    printf("\nO peso da coluna e: %.2f\n\n", peso);
                    desenho_gato();
                    printf("\n------------------------------------------------------------");
                    printf("\n\nEnvie qualquer tecla para continuar: ");
                    getchar();
                break;


        /*Criando as condicionais que informarao ao usuario qual o guindaste mais apropriado para a
        coluna.*/
            case 6:
                if(peso < 200){
                	system("color 05");
                    printf("\nO guindaste mais apropriado para esta situacao e o G1.\n");
                    desenho_gato();
                    printf("\n------------------------------------------------------------");
                    printf("\n\nEnvie qualquer tecla para continuar: ");
                    getchar();
                }else {
                    if(peso > 600){
                    	system("color 05");
                        printf("\nO guindaste mais apropriado para esta situacao e o G3.\n");
                        desenho_gato();
                        printf("\n------------------------------------------------------------");
                        printf("\n\nEnvie qualquer tecla para continuar: ");
                        getchar();
                    }else {
                    	system("color 05");
                        printf("\nO guindaste mais apropriado para esta situacao e o G2.\n");
                        desenho_gato();
                        printf("\n------------------------------------------------------------");
                        printf("\n\nEnvie qualquer tecla para continuar: ");
                        getchar();
                    }
                }
            break;
                   
            case 7:
            	system("color 03");
                printf("\nFim do programa.\n\n");
                desenho_gato();
                printf("\n------------------------------------------------------------\n\n");
                desenho_Caminhao();
            break;

            default:
            	system("color 04");
                printf("\nOpcao invalida! Tente novamente.\n\n");
                desenho_gato();
                printf("\n------------------------------------------------------------");
                printf("\n\nEnvie qualquer tecla para continuar: ");
                getchar();
            break;
        }

        i++;

    }while(option != 7);
   
    return 0;
}
