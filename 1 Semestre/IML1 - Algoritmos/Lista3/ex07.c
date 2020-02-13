#include <stdio.h>
#include <locale.h>
int N=1;
main()
{
    printf("7)	Leia um número inteiro representado pela variável N até que N seja igual a zero.\n");
    printf("Exiba uma mensagem informando se o número é par ou ímpar.\n");

    while(N!=0)
    {
        printf ("Digite um numero inteiro:");
        scanf ("%d",&N);
        if(N%2==0 && N!=0)
        {
            printf("\nPar: %d \n\n", N);
        }
        if(N%2!=0 && N!=0)
        {
            printf("\nImpar: %d \n\n", N);
        }

    }




}
