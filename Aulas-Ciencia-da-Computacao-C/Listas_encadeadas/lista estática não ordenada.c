#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanhoLista 5
int lista[tamanhoLista]; /*Declaração da Lista*/
int qtde = 0;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int val, op = 10;
    while (op != 0)
    {
        system("cls");
        imprimeLista();
        printf("O que deseja fazer? \n\n1-Inserir (Início) \n2-Inserir(Fim)"
               "\n3-Esvaziar Lista \n4-Retirar da Lista \n"
               "0-Finalizar Cadastro:\n\nDigite o código da opção:");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            printf("Digite o valor a ser inserido na lista:");
            scanf("%i", &val);
            inserirInicio(val);
            break;
        case 2:
            printf("Digite o valor a ser inserido na lista:");
            scanf("%i", &val);
            inserirFim(val);
            break;
        case 3:
            esvaziaLista();
            break;
        case 4:
            printf("Digite o Elemento que deseja retirar:");
            scanf("%i", &val);
            retiraElemento(val);
            break;
        }
        system("pause");
    }
    return 0;
}

void imprimeLista()
{
    printf("\nA lista está assim:\n\n");
    if (qtde == 0)
    {
        printf("Vazia!\n\n");
    }
    else
    {
        int i;
        for (i = 0; i < qtde; i++)
            printf(" %i |", lista[i]);
        printf("\n\n");
    }
}
void esvaziaLista()
{
    qtde = 0;
    printf("\nA lista foi esvaziada:\n");
}

void inserirFim(int valor)
{
    if (qtde < tamanhoLista)
    {
        lista[qtde] = valor;
        qtde = qtde + 1;
        printf("O valor %i foi inserido no final da lista!\n\n", valor);
    }
    else
        printf("A lista está cheia!\n\n");
}

void inserirInicio(int valor)
{
    int i;
    if (qtde < tamanhoLista)
    {
        for (i = qtde; i > 0; i--)
        {
            lista[i] = lista[i - 1];
        }
        lista[i] = valor;
        qtde = qtde + 1;
        printf("O valor %i foi inserido no final da lista! \n\n ", valor);
    }
    else
        printf("A lista está cheia!\n\n");
}

int consultarElementoLista(int valor)
{
    int i;
    for (i = 0; i < qtde; i++)
        if (valor == lista[i])
        {
            return i;
        }
    return -1;
}

void retiraElemento(int pos)
{
    int i;
    for (i = pos; i < qtde - 1; i++)
    {
        lista[i] = lista[i + 1];
    }
    qtde = qtde - 1;
    printf("O valor foi retirado com sucesso!\n\n");
}