#include <stdio.h>
#include <locale.h>
int k,num,pares,multiplos,i,x,media,z=9999;
main()
{
    printf("6- Calcule e mostre a media dos K primeiros pares e multiplos de cinco.\n");
    printf("OBS: K representa a quantidade de numeros pares solicitados via teclado pelo usuario.\n");
    printf("Os numeros pares deverao ser gerados pelo programador.\n");
    printf("Utilize o laco while para a entrada da quantidade K e um laco for para o calculo da media.\n");
    printf("2, 4, 6, 8, 10,...\n\n");

    while(k<=0)
    {
        printf ("Digite a quantidade de pares e multiplos de 5 desejado:");
        scanf ("%d",&k);
    }
    printf("\n\n");

    for(i=0; i<z; i++)
    {
        num++;
        if(num%5==0 || num%2==0)
        {
            x++;
        }
            if(num%5==0)
            {
                multiplos++;
                printf("\nMultiplo: %d \n\n", num);
            }
            if(num%2==0)
            {
                pares++;
                printf("\nPar: %d \n\n", num);
            }

        if(x==k){i=z;}

    }

}
