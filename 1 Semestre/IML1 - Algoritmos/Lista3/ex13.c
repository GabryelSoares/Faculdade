#include <stdio.h>


main()
{
    int N=0,cont,ps=0,quant=0;
    float P[cont],menor,maior,media=0;

    printf("\n12- Receba a quantidade de pesos de N pessoas. ");
    printf("\nN representa essa quantidade e deve ser digitada pelo usuário.");
    printf("\nA variável P representa cada peso digitado.");
    printf("\nCalcule e mostre a media dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos.");
    printf("\nExiba também o menor e o maior peso encontrado.");
    printf("\nUtilize o laço while para a entrada da quantidade N e um laço do while para efetuar os cálculos e as comparações solicitadas.\n\n");

    while(N <= 0)
    {
        printf("\nInforme a quantidade de pessoas: ");
        scanf("%i",&N);
    }


    do
    {
        printf("\nInforme o peso: ");
        scanf("%f",& P[cont]);

        if(P[cont]>=75)
        {
            ps++;
        }

        if(P[cont]>=70 && P[cont]<=85.5)
        {
            media=media+P[cont];
            quant++;
        }

        if(cont==0)
        {
            menor=P[cont];
        }
        else if(P[cont]<menor)
        {
            menor=P[cont];
        }

        if(cont==0)
        {
            maior=P[cont];
        }
        else if(P[cont]>maior)
        {
            maior=P[cont];
        }

        cont++;
    }while(cont<N);

    media=media/quant;
    printf("\n\nA Quantidade de pessoas que apresentam pesos superiores a 75 quilos e: %i", ps);
    printf("\nO maior peso encontrado e: %.2f",maior);
    printf("\nO menor peso encontrado e: %.2f",menor);
    printf("\nA media dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e: %.2f", media);
    printf("\n\n");
}
