#include <stdio.h>
#include <locale.h>
int num,imp,res,cont;
main()
{
    printf("1- Mostre todos os numeros impares de 1 ate 100. Utilize o laco while.\n");
    printf("\n\n");
    num=1;
    while(num<=100){
    printf("\n\nNumero %i", num);
    num=num+2;
    }
}
