#include <stdio.h>
main()
{
    /*
    3. Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.
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
