#include <stdio.h>
#include <locale.h>
int k,N,MN,q,i,x,z=9999;
main()
{
    printf("9- Receba K n�meros quaisquer.\n");
    printf("K representa a quantidade de termos solicitada pelo usu�rio e cada termo pode ser representado pela vari�vel N.\n");
    printf("Exiba o maior n�mero digitado.\n");
    printf("Utilize o la�o do while para a entrada da quantidade K e um la�o for para exibir o maior n�mero.\n");
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
