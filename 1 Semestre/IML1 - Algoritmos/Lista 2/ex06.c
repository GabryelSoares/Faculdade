#include <stdio.h>
main()
{
    int cont,num,k=0,multiplos=0;
    printf("6. Receba K numeros positivos. Cada numero recebido devera ser \n");
    printf("   armazenado na variavel Num e a variavel K representa a quantidade \n");
    printf("   de numeros solicitada pelo usuario. Exiba a quantidade de multiplos 7. \n");

    do
    {
        printf("\nInforme a quantidade desejada: \n");
        scanf("%i", & k);
        if(k<=0)
        {
            printf("\nNumero invalido! \n");
        }
    }
    while(k<=0);

    for(cont=1; cont<=k; cont++)
    {
        do
        {
            printf("\nInforme um numero: \n");
            scanf("%i", & num);
            if(num<=0)
            {
                printf("\nNumero invalido! \n");
            }
        }
        while(num<=0);

        if(num%7==0)
        {
            multiplos++;

            if(multiplos==0)
            {
                printf("\nNao existem multiplos de 7! \n");
            }

        }

    }
    printf("\nExistem %i multiplos de 7! \n",multiplos);
}
