/*Implementar uma fun��o, que cria um vetor de dez posi��es
e os preenche com valores aleat�rios, imprime os valores, e
depois para esse vetor oara quem chamar a fun��o*/

//AULA DO DIA 20/05/2023

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *gerarRandomico(){
    static int r[10];
    int a;

    for(a = 0; a < 10; ++a){
        r[a] = rand();
        printf("r[%d] = %d\n",a,r[a]);
    }
}

int main(void)
{
    int *p;
    int i;
    
    p = gerarRandomico();
    for (i = 0; i < 10; i++){
        printf("\np[%d] = %d",i,*(p + i));
    }

    return 0;
}
