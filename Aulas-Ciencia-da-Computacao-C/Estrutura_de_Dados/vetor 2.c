#include <stdio.h>
#include <locale.h> // Inclua a biblioteca para usar setlocale

int main()
{
    int i, vetor[10], x;

    // Configure o local para impressão correta
    setlocale(LC_ALL, "Portuguese");

    // Atribuição do valor 18 à variável X
    x = 18;

    for (i = 0; i < 10; i++)
    { // Corrija o limite do loop para i < 10
        vetor[i] = i;
        // Impressão dos valores armazenados no vetor e seus endereços
        printf("Armazenado o valor %i na posição %p\n", vetor[i], &vetor[i]);
    }

    // Impressão do conteúdo de X
    printf("\nValor contido na variável X: %i\n", x);
    // Impressão do endereço de X (&)
    printf("Endereço da variável X: %p\n", &x);

    return 0;
}