//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
// 	LISTA 1, QUEST�O 1: 
//  A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
//  coletando dados sobre o sal�rio e o n�mero de filhos. A prefeitura deseja 
//  saber:
//  a) m�dia salarial da popula��o;
//  b) m�dia do n�mero de filhos;
//  c) maior sal�rio;
//  d) percentual de pessoas com sal�rio at� R$ 100,00.
//  O final da leitura de dados se dar� com a entrada de um sal�rio negativo.

#include <stdio.h>
#include <stdlib.h>

int main(){
//INICIACAO DE VARIAVEIS
	float maiorSal, mediaFilhos, mediaSal, recebeAteCem, salario;
//INIA��O COM VARIAVEIS INT DE VALOR JA DEFINIDO ZERO	
    int populacao = 0, filhos = 0;
//IMPRESSAO DO CABE�ALHO DO PROGRAMA    
	printf("===== PESQUISA ENTRE OS HABITANTES DE UMA CIDADE SOBRE O SALARIO E O NUMERO DE FILHOS ===== \nObs: nao precisa informar quantas pessoas responderao a pesquisa, apenas digite \num salario negativo para informar que nao terao mais pessoas.\n");
//IMPRESSAO DA CONDICAO DO VALOR DO SALARIO COM UMA OBSERVACAO PARA O SALARIO NEGATIVO FINALIZAR O PROGRAMA, SE NAO FOR NEGATIVO, O PROGRAMA E EXECUTADO
    printf("Informe seu salario: \n");	
//CONDI��O PARA SABER SE O SALARIO VAI SER POSITIVO OU NEGATIVO PARA CONTINUAR O PROGRAMA
	while(salario > 0){	
//SCANF DO PEDIDO DO SALARIO    
    scanf("%f",&salario);
//CONDICAO PARA O VALOR DO SALARIO MAIOR QUE ZERO    
    if(salario > 0){	
//IMPRESSAO NA TELA DA SOLICITACAO DO NUMERO DE FILHOS    	
    printf("\nInforme quantos filhos voce tem: \n");
//SCANF DO PEDIDO DA QUANTIDADE DE FILHOS    
    scanf("%d",&filhos);
//LIMPA TELA DE SISTEMA    
    system("cls");
//REIMPRESSAO DO CABE�ALHO DO PROGRAMA    
	printf("===== PESQUISA ENTRE OS HABITANTES DE UMA CIDADE SOBRE O SALARIO E O NUMERO DE FILHOS ===== \nObs: nao precisa informar quantas pessoas responderao a pesquisa, apenas digite \num salario negativo para informar que nao terao mais pessoas.\n");
//SOMA DE TODOS OS DADOS PARA DEPOIS CALCULAR AS MEDIAS
	if(salario > maiorSal){
	maiorSal = salario;
    }
    if(salario < 101){
	recebeAteCem ++;
    }
    mediaSal += salario;
    mediaFilhos += filhos;
    populacao ++;
    }
}
//LIMPA TELA DE SISTEMA    
    system("cls");
//REIMPRESSAO DO CABE�ALHO DO PROGRAMA    
	printf("===== PESQUISA ENTRE OS HABITANTES DE UMA CIDADE SOBRE O SALARIO E O NUMERO DE FILHOS ===== \nObs: nao precisa informar quantas pessoas responderao a pesquisa, apenas digite \num salario negativo para informar que nao terao mais pessoas.\n\n");
//CALCULO DAS MEDIAS DE SALARIO  
    mediaSal = mediaSal / populacao;
//CALCULO DAS MEDIAS DE FILHOS     
    mediaFilhos = mediaFilhos / populacao;
//CALCULO DO PERCENTUAL DE PESSOAS QUE RECEBEM ATE CEM     
    recebeAteCem = (recebeAteCem * 100) / populacao;
//IMPRESSAO DA MEDIA SALARIAL    
    printf("Media salarial: %.2f",mediaSal);
//IMPRESSAO DA MEDIA  DE FILHOS   
    printf("\nMedia filhos: %.2f",mediaFilhos);
//IMPRESSAO DO MAIOR SALARIO
    printf("\nMaior salario: %.2f",maiorSal);
//IMPRESSAO DO PERCENTUAL DE PESSOAS QUE RECEBEM ATE 100  
    printf("\nPercentual de pessoas que recebem ate R$100: %.2f", recebeAteCem);
    return 0;
}
 

