#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Aluno {
 char nome[100];
 int faltas;
 float nota;
 }aluno_t;



int main(){

aluno_t *aluno1 = (aluno_t*)malloc(sizeof(aluno_t));
aluno1->faltas = 4;
strcpy(aluno1->nome,"Henrique Dantas Faria");
aluno1->nota = 6.9;


printf("Nome: %s\n",aluno1->nome);
printf("Faltas: %d\n",aluno1->faltas);
printf("Nota: %f\n",aluno1->nota);

if(aluno1->nota>= 7 && aluno1->faltas<=6){
printf("\nAprovado!");
}
else
printf("\nReprovado!");
    return 0;
}