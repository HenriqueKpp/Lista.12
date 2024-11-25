#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){

char nome[40];
float frequencia;
float nota;

printf("Nome do aluno: \n");
fgets(nome,40,stdin);
printf("Frenquencia: (0.0 .. 1.0)\n");
scanf("%f",&frequencia);
printf("Nota: \n");
scanf("%f",&nota);

if(nota>= 7.0 && frequencia >=0.75)
printf("Aprovado!");
else
printf("Reprovado!");

    return 0;
}