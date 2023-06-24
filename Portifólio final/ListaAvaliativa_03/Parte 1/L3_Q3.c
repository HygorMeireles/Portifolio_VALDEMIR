/*
Curso: Ciência da Computação

Turma: GPE02M0392 - Algoritmos e Programação Estruturada

Nomes: Gabriel Damásio de Ornelas, Hygor Gabriel Meireles, Leonardo Duarte Veiga Ferreira, Mateus Bittencourt Camandaroba, Mateus Salvador de Lima.

Professor: Valdemir dos Santos

Data: 03/03/2023

Tema: Vetores, Matrizes, Strings, Ponteiros.

3) Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem
cadastrados são: nome, matrícula, endereço, sexo, os nomes das 3 disciplinas e as 3
notas de cada disciplina que ele está cursando.
 Os dados devem ser cadastrados em um vetor e/ou matriz.
 Após o cadastro informe:
 a)Os dados dos alunos cadastrados e a sua situação ("aprovado" ou
"reprovado") em cada disciplina.
 b)Os dados do aluno com maior média em "LPI".
 c)A média geral dos alunos na disciplina "Algoritmo".
 d)A quantidade de alunos(as) reprovados em qualquer disciplina.
OBS.:1) Usar uma estrutura switch para mostrar os resultados calculados.
 2) Para o aluno ser aprovado a média das notas deve ser >= 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct alunos
{
  char nome[80];
  char sexo;
  char endereco[200];
  int matricula;
  char disciplinas[3][50];
  float notas[3][3]; 
};
void Cabecalho()
{
  printf("==============================\n");
  printf("===== CADASTRO DE ALUNOS =====\n");
  printf("==============================\n\n");
}
void CadastrarAlunos(struct alunos alunos[]){
  char buffer[100];
  printf("***Cadastro de Alunos***\n\n");

  for(int i = 0; i < 5; i++){
      /* Funções usadas:
      strcspn = usada p/ encontrar o final da entrada de dados
      strncpy = copiar os dados de buffer p/ a struct alunos
      strtol = converter string p/ long int      */
    
      printf("Aluno %d\n",(i+1));
      printf("Nome: ");
      fgets(buffer, sizeof(buffer), stdin);
      buffer[strcspn(buffer, "\n")] = '\0'; 
      strncpy(alunos[i].nome, buffer, sizeof(alunos[i].nome));
      
      printf("Matricula: ");
      fgets(buffer, sizeof(buffer), stdin);
      alunos[i].matricula = strtol(buffer, NULL, 10);
      
      printf("Endereco: ");
      fgets(buffer, sizeof(buffer), stdin);
      buffer[strcspn(buffer, "\n")] = '\0'; 
      strncpy(alunos[i].endereco, buffer, sizeof(alunos[i].endereco));
      
      printf("Sexo: ");
      fgets(buffer, sizeof(buffer), stdin);
      alunos[i].sexo = buffer[0];

      for(int j = 0; j < 3; j++){
        printf("\nNome da disciplina %d: ", j+1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0'; 
        strncpy(alunos[i].disciplinas[j], buffer, sizeof(alunos[i].disciplinas[j]));
            
        for (int k = 0; k < 3; k++) {
        printf("Nota %d da disciplina %d: ", k+1, j+1);
        fgets(buffer, sizeof(buffer), stdin);
        alunos[i].notas[j][k] = strtof(buffer, NULL);
        }
      }
    printf("\n");
    system("clear");
  }
}

void ImprimirAlunos(struct alunos alunos[]){
  for(int i = 0; i < 5; i++)
    {
      printf("**** DADOS DOS ALUNOS ****\n");
      printf("Aluno %d\n",i+1);
      printf("Nome: %s\n", alunos[i].nome);
      printf("Matricula: %d\n", alunos[i].matricula);
      printf("Endereco: %s\n",alunos[i].endereco);
      printf("Sexo: %c\n",alunos[i].sexo);

      for(int j = 0; j < 3; j++)
        {
          printf("\nDisciplina %d: %s\n",j+1,alunos[i].disciplinas[j]);

          float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;

          printf("Media: %.1f\n",media);
          if(media < 6.0){
            printf("Situacao: REPROVADO\n");
          }else{
            printf("Situacao: APROVADO\n");
          }
        }
      printf("\n");
    }
}
void MediaLPI(struct alunos alunos[])
{
  float MaiorMedia = 0.0;
  int indiceAluno = -1;
  
  for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          if(strcmp(alunos[i].disciplinas[j], "LPI")==0)
          {
            float mediaLPI = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;
            if(mediaLPI > MaiorMedia)
            {
              MaiorMedia = mediaLPI;
              indiceAluno = i;
            }
          }
        }
    }
  if(indiceAluno != -1)
  {
    printf("Aluno com maior média em LPI:\n");
    printf("Nome: %s\n", alunos[indiceAluno].nome);
    printf("Matricula: %d\n", alunos[indiceAluno].matricula);
    printf("Endereco: %s\n", alunos[indiceAluno].endereco);
    printf("Sexo: %c\n", alunos[indiceAluno].sexo);
    printf("Média em LPI: %.2f\n\n", MaiorMedia);
    }else{
      printf("Nenhum aluno cadastrado.\n\n");
    }
}

void mediaAlgoritmo(struct alunos alunos[])
{
  float somaNotas = 0.0;
  int cont = 0;

  for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          if(strcmp(alunos[i].disciplinas[j], "Algoritmo")==0)
            {
              somaNotas += alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2];
              cont += 3;
            }
        }
    }

  if(cont > 0)
  {
    float MediaGeral = somaNotas / cont;
    printf("Media dos alunos em Algoritmo: %.1f\n\n", MediaGeral);
  }else{
    printf("Nenhum aluno cadastrado.\n\n");
  }
}

void Reprovados(struct alunos alunos[])
{
  int rep = 0;
  
  for(int i = 0; i < 5; i++)
    {
      for(int j = 0; j < 3; j++)
        {
          float media = (alunos[i].notas[j][0] + alunos[i].notas[j][1] + alunos[i].notas[j][2]) / 3.0;

          if(media < 6.0)
          {
            rep++;
            break;
          }
        }
    }
  printf("Numero de alunos reprovados em qualquer disciplina: %d",rep);
}

int main() {
  struct alunos alunos[5];
   
  //Principal
  system("clear");
  Cabecalho();
  CadastrarAlunos(alunos);

  int op = -1;

  do{
    printf("\n**** MENU ****\n\n");
    printf("O que deseja fazer a seguir?\n");
    printf("1 - Imprimir dados dos alunos\n");
    printf("2 - Aluno com maior media em LPI\n");
    printf("3 - Media geral dos alunos em Algoritmo\n");
    printf("4 - Quantidade de alunos reprovados\n");
    printf("Digite 0 para sair\n");
    scanf("%d",&op);
    printf("\n");
    switch(op){
      case 1:
        system("clear");
        Cabecalho();
        ImprimirAlunos(alunos);
        break;

      case 2:
        system("clear");
        Cabecalho();
        MediaLPI(alunos);
        break;

      case 3:
        system("clear");
        Cabecalho();
        mediaAlgoritmo(alunos);
        break;

      case 4:
        system("clear");
        Cabecalho();
        Reprovados(alunos);
        break;

      case 0:
        system("clear");
        printf("Encerrando...\n\n");
        break;

      default:
        system("clear");
        printf("ERRO: OPCAO INVALIDA. TENTE NOVAMENTE.\n");
        break;
    }
  }while(op != 0);
  return 0;
}