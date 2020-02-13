#include <stdio.h>
#include <locale.h>
int k,i,z,q,par,num;
main()
{
    printf("5- Receba K numeros. Exiba a quantidade de numeros pares negativos e quantas vezes o numero zero foi digitado.\n");
    printf("Obs1: K representa a quantidade de numeros digitados pelo usuario.\n");
    printf("Obs2: A variavel Num representa cada numero digitado pelo usuario.\n");
    printf("\nDigite a quantidade de numeros desejada:");
    scanf("%d",&k);
    while(k<0)
    {
        for(i=0; i<k; i++)
        {
            printf("\nDigite um numero:");
            scanf("%d",&num);
            par = num%2;
            if(num==0)
            {
                z=z+1;
            }
            else if(par==0 && num<0)
            {
                q=q+1;
            }
        }
        printf("\nA quantidade de zeros e: %d",z);
        printf("\nA quantidade de negativos pares e: %d",q);
    }
}
