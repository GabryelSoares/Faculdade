#include <stdio.h>
#include <locale.h>
int num,cont;
main()
{
    printf("3- Receba um numero inteiro e mostre os numeros pares de 2 ate esse inteiro. Utilize o laco do while.\n");
    printf("\n\n");
    printf("\n\nNumero: ");
    scanf("%i", & cont);
    do{
    num=num+2;
    printf("\n\nNumero %i", num);
    }while(num<=cont);
}
