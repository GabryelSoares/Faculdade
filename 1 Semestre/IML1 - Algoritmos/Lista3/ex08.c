#include <stdio.h>
#include <locale.h>
int k,N,MI,q,i=0,x,z=9999;
main()
{
    printf("8)	Receba K n�meros inteiros quaisquer.\n");
    printf("K representa a quantidade de termos solicitada pelo usu�rio.\n");
    printf("Cada termo pode ser representado pela vari�vel N.\n");
    printf("Exiba a quantidade de n�meros positivos recebidos e a m�dia dos n�meros �mpares.\n");
    printf("Utilize o la�o do while para a entrada da quantidade K e um la�o while para efetuar os c�lculos solicitados.\n");
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
