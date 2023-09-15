#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    /* int i, vetor[10], x;
     // código para impressão de forma correta na tela
     setlocale(LC_ALL, "Portuguese");

     // atribuição do valor 18 à variável X
     x = 18;
     for (i = 0; i <= 10; i++)
     {
         vetor[i] = i;
         // impressão dos endereços acessados para o vetor

         printf("Armazenado o valor %i na posição %p \n", i, &vetor[i]);
     }
     // impressão do conteúdo de X
     printf("\nValor contido na variável X: % i \n", x);

     // impressão do endereço de X (&)

     printf("Endereço da variável X: %p \n", &x);


    int x;
    // código para impressão de forma correta na tela
    setlocale(LC_ALL, "Portuguese");
    // atribuição do valor 18 à variável X
    x = 18;
    // impressão do conteúdo de X
    printf("Valor contido na variável X: %i \n", x);
    // impressão do endereço de X (&)
    printf("Endereço da variável X: %p \n", &x);

    */

    int x, *px;
    x = 5;
    px = &x;
    // código para impressão de forma correta na tela
    setlocale(LC_ALL, "Portuguese");
    // impressão do valor que está na variável apontada pelo ponteiro.
    printf("Valor na variavel apontada (com operador indireto): %i\n", *px);
    // impressão do endereço contido no ponteiro.
    printf("Endereço de memoria contido em px: %p\n ", px);
}
