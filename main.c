/* Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma. */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void)
{
    system("color 1f");
    setlocale(LC_ALL, "Portuguese");

    int valor;

    do
    {
        printf("Informe um Valor: ");
        scanf("%d", &valor);

        system("cls");

        printf("Valor: %d = ", valor);

        if (valor > 0)
            printf("Positivo.\n\n");
        else if (valor < 0)
            printf("Negativo.\n\n");
        else
            printf("Zero.\n\n");
    }
    while (valor != 0);

    system("pause");

    return 0;
}
