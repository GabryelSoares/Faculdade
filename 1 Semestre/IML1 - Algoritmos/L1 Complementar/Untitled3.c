#include <stdio.h>
main()
{
    /*
    3. Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
    */
    int n;
    printf("\nInforme um numero qualquer: ");
    scanf("%i", & n);

    if(n % 2 ==0)
    {
        printf("\n O numero e par!");
    }
    else
    {
        printf("\n O numero e impar!");
    }

}
