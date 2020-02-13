#include <stdio.h>
#include <locale.h>
int k,N,MN,q,i,x,z=9999;
main()
{
    printf("9- Receba K números quaisquer.\n");
    printf("K representa a quantidade de termos solicitada pelo usuário e cada termo pode ser representado pela variável N.\n");
    printf("Exiba o maior número digitado.\n");
    printf("Utilize o laço do while para a entrada da quantidade K e um laço for para exibir o maior número.\n");
    printf("\n\n");



    do
    {
        printf ("Digite a quantidade de termos desejada:");
        scanf ("%d",&k);
    }
    while(k<=0);

    printf("\n\n");

    for(i=0; i<k; i++)
    {
        printf ("Digite um numero:");
        scanf ("%d",&N);

        if(N>MN){MN=N;}

    }

    printf("\nO maior numero digitado e: %d \n\n", MN);
}
