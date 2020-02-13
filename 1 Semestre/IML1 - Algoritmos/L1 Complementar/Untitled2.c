#include <stdio.h>
main()
{
    /*
    Escrever um algoritmo que leia três números quaisquer e informe qual é o
    maior e se eles forem todos igual informe ao usuário e solicite novos dados.
    */
    float n1,n2,n3;
    printf("\nInforme o primeiro numero: ");
    scanf("%f", & n1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", & n2);
    printf("\nInforme o terceiro numero: ");
    scanf("%f", & n3);

        if(n1==n2 && n2==n3)
        {
            printf("\nOs tres numeros sao iguais ");
        }
        if(n1>n2 && n2>n3)
        {
            printf("\nO primeiro numero e maior! ");
        }
        if(n2>n1 && n2>n3)
        {
            printf("\nO Segundo numero e maior! ");
        }
        if(n3>n1 && n3>n2)
        {
            printf("\nO terceiro numero e maior! ");
        }


}
