#include <stdio.h>
#include <locale.h>
int num,imp,res,cont;
main()
{
    printf("2- Mostre todos os numeros impares de 50 ate 300.Utilize o laco do while.\n");
    printf("\n\n");
    num=51;
    do{
    printf("\n\nNumero %i", num);
    num=num+2;
    }while(num<=300);
}
