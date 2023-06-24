//  UNIVERSIDADE CAT�LICA DE BRAS�LIA
//  CURSO BACHAREL EM CI�NCIAS DA COMPUTA��O
//  DISCIPLINA: ALGORITMOS E PROGRAMA��O ESTRUTURADA - GPE02M0392
//  DOCENTE: VALDEMIR DOS SANTOS SILVA
//  DISCENTE: HYGOR GABRIEL MEIRELES - UC22100580
//	AULA DIA 21/03/2023

// 	QUEST�O #12: Uma empresa de vendas tem tr�s corretores. A empresa paga ao corretor uma 
//	comiss�o calculada de acordo com o valor de suas vendas. Se o valor da venda de 
//	um corretor for maior que R$ 50.000.00 a comiss�o ser� de 12% do valor vendido. Se 
//	o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo 
//	extremos) a comiss�o ser� de 9.5%. Em qualquer outro caso, a comiss�o ser� de 7%. 
//	Escreva um algoritmo que gere um relat�rio contendo nome, valor da venda e 
//	comiss�o de cada um dos corretores. O relat�rio deve mostrar tamb�m o total de 
//	vendas da empresa. 

#include <stdio.h>
#include <stdlib.h>

int main() {
//DECLARA��O DAS VARI�VEIS	
    char nome1[50], nome2[50], nome3[50];
    float venda1, venda2, venda3, comissao1, comissao2, comissao3, totalVendas;
// IMPRESS�O DA SOLICITA��O DO NOME DO PRIMEIRO CORRETOR
    printf("Digite o nome do primeiro corretor: ");
    scanf("%s", nome1);
//IMPRESS�O DA SOLICITA��O DO VALOR DA VENDA DO PRIMEIRO CORRETOR    
    printf("Digite o valor da venda do primeiro corretor: ");
    scanf("%f", &venda1);
// IMPRESS�O DA SOLICITA��O DO NOME DO SEGUNDO CORRETOR    
    printf("Digite o nome do segundo corretor: ");
    scanf("%s", nome2);
//IMPRESS�O DA SOLICITA��O DO VALOR DA VENDA DO PRIMEIRO CORRETOR     
    printf("Digite o valor da venda do segundo corretor: ");
    scanf("%f", &venda2);
// IMPRESS�O DA SOLICITA��O DO NOME DO TERCEIRO CORRETOR    
    printf("Digite o nome do terceiro corretor: ");
    scanf("%s", nome3);
//IMPRESS�O DA SOLICITA��O DO VALOR DA VENDA DO TERCEIRO CORRETOR    
    printf("Digite o valor da venda do terceiro corretor: ");
    scanf("%f", &venda3);
// CALCULO DA COMISS�O DE CADA CORRETOR
    if (venda1 > 50000.00) {
        comissao1 = 0.12 * venda1;
    } else if (venda1 >= 30000.00 && venda1 <= 50000.00) {
        comissao1 = 0.095 * venda1;
    } else {
        comissao1 = 0.07 * venda1;
    }
    if (venda2 > 50000.00) {
        comissao2 = 0.12 * venda2;
    } else if (venda2 >= 30000.00 && venda2 <= 50000.00) {
        comissao2 = 0.095 * venda2;
    } else {
        comissao2 = 0.07 * venda2;
    }
    if (venda3 > 50000.00) {
        comissao3 = 0.12 * venda3;
    } else if (venda3 >= 30000.00 && venda3 <= 50000.00) {
        comissao3 = 0.095 * venda3;
    } else {
        comissao3 = 0.07 * venda3;
    }
//CALCULO DO TOTAL DE VENDAS
    totalVendas = venda1 + venda2 + venda3;
//IMPRESS�O DE TODO O RELAT�RIO
    printf("\n-----------------------------------------------\n");
    printf("Relatorio de vendas da empresa\n");
    printf("-----------------------------------------------\n");
    printf("Nome do corretor\t\tVenda\t\tComissao\n");
    printf("-----------------------------------------------\n");
    printf("%-20s\t%.2f\t%.2f\n", nome1, venda1, comissao1);
    printf("%-20s\t%.2f\t%.2f\n", nome2, venda2, comissao2);
    printf("%-20s\t%.2f\t%.2f\n", nome3, venda3, comissao3);
    printf("-----------------------------------------------\n");
    printf("Total de vendas da empresa: R$ %.2f\n", totalVendas);

    return 0;
}
