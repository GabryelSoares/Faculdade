#include <stdio.h>
#include <locale.h>
int x,i,y,z,t,a,b=1,c;
main()
{
    printf("4- Calcule e mostre a m�dia dos K primeiros pares e m�ltiplos de cinco.\n");
    printf("OBS: K representa a quantidade de n�meros pares solicitados via teclado pelo usu�rio.\n");
    printf("Os n�meros pares dever�o ser gerados pelo programador.\n");
    printf("2, 4, 6, 8, 10,...\n");
    printf ("Digite a quantidade de pares e multiplos de 5 desejado:");
    scanf ("%d",&x);
    printf("\n\n");
    z = x*10;
    z = z/2;
    for(i=0; i<z; i++)
    {
        t = t +2;
        printf("%d ", t);
    }
    for(i=0; i<x; i++)
    {
        a = a + (b*10);
        b++;
    }
    printf("\n\nA soma de todos o multiplos de 5 sao: %d", a);
    a = a/x;
    printf("\n\nA media e: %d", a);
}
