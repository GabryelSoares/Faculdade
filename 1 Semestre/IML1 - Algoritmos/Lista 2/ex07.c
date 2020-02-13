#include <stdio.h>
#include <locale.h>
int x,h,i;
float p=1;
main()
{
    printf("7. Receba via teclado um numero X, onde este numero representa a quantidade de termos que o usuario deseja. \n");
    printf("H representa cada um desses numeros, calcule o produto dos X numeros.\n");
    printf("OBS: H deve ser maior ou igual a 15.\n");
    printf("\nDigite a quantidade de numeros desejada: ");
    scanf("%i", &x);
    for(i=0; i<x; i++)
    {
        scanf("%d",&h);
        if(h>=15)
        {
            p=p*h;
        }
        else
        {
            printf ("O numero deve ser maior que 15!\n");
            i=i-1;
        }
    }
    printf ("O produto dos numeros digitados e: %.2f",p);
}
