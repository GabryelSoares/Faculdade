#include <stdio.h>
#include <locale.h>
int i,num,n1,n2,pares,impares=1;
main()
{
    printf("10)	Receba dois numeros. Calcule e mostre:\n");
    printf("a)	A soma dos numeros pares desse intervalo, incluindo os numeros digitados;\n");
    printf("b)	A multiplicaçao dos numeros impares desse intervalo de numeros incluindo os numeros digitados.\n");
    printf("\n\n");

    while(n1<=0)
    {
        printf ("Digite um numero:");
        scanf ("%d",&n1);
    }
    printf("\n");

    num=n1;

    while(n2<=0)
    {
        printf ("Digite um numero:");
        scanf ("%d",&n2);
    }
    printf("\n");

    for(i=n1; i<=n2; i++)
    {

        if(num%2==0)
        {
            pares=pares+num;
            printf("\nPar: %d", num);
        }
        if(num%2!=0)
        {
            impares=impares*num;
            printf("\nImpar: %d", num);
        }

        num++;
    }

    printf("\n\nA soma dos numeros pares e: %d", pares);
    printf("\n\nA multiplicacao dos numeros impares e: %d", impares);
    printf("\n\n");
}
