#include <stdio.h>
#include <locale.h>
int k,N,MI,q,i=0,x,z=9999;
main()
{
    printf("8)	Receba K números inteiros quaisquer.\n");
    printf("K representa a quantidade de termos solicitada pelo usuário.\n");
    printf("Cada termo pode ser representado pela variável N.\n");
    printf("Exiba a quantidade de números positivos recebidos e a média dos números ímpares.\n");
    printf("Utilize o laço do while para a entrada da quantidade K e um laço while para efetuar os cálculos solicitados.\n");
    printf("\n\n");


    do
    {
        printf ("Digite a quantidade de termos desejada:");
        scanf ("%d",&k);
    }while(k<=0);

    printf("\n\n");

    while(i<k)
    {
        printf ("Digite um numero:");
        scanf ("%d",&N);

        if(N>0 && N%2!=0)
        {
            printf("\nO numero e positivo e impar! \n\n");
        }
        else
        {
            if(N>0)
            {
                printf("\nO numero e positivo! \n\n");
            }
            if(N%2!=0)
            {
                printf("\nO numero e impar! \n\n");
            }
        }
        if(N%2!=0)
            {
                MI=MI+N;
                q++;
            }

        i++;
    }

    MI=MI/q;
    printf("\nA media dos numeros impares e: %d \n\n", MI);
}
