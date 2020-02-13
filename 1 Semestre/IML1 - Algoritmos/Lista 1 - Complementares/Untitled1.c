#include <stdio.h>
main()
{
    /*
    1.	Escrever um algoritmo que leia dois valores inteiros distintos e informe qual é o maior.
    */
    int n1,n2;
    printf("\nInforme o primeiro numero: ");
    scanf("%f", & n1);

    printf("\nInforme o segundo numero: ");
    scanf("%f", & n2);

    if(n1==n2)
    {
        printf("\nOs dois numeros sao iguais ");
    }
    else
    {
        if(n1>n2)
        {
            printf("\nO primeiro numero e maior! ");
        }
        else
        {
            printf("\nO segundo numero e maior! ");
        }
    }
}
