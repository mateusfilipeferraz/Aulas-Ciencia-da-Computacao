#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
int numalunos,i;
//declaração do vetor para 60 notas
float notas[60];
setlocale(LC_ALL, “Portuguese”);
//recebe o número de alunos na turma
printf(“ Digite o número de alunos na turma:”);
scanf(“%i”,&numalunos);
printf(“\n”);
//preenche o número de posições correspondentes aos alunos
for(i=0;i<numalunos;i++)
{
printf(“ Digite a %iª nota: “,i+1);
scanf(“%f”,&notas[i]);
}
printf(“\n”);
//imprime as posições correspondentes preenchidas
for(i=0;i<numalunos;i++)
{
printf(“ Nota do %iº aluno: %f\n”,i+1,notas[i]);
}
return 0;
}