#include <stdio.h>
main()
{
    /*
    2) Gere e exiba cada uma das seqüências abaixo com uma quantidade k de termos determinados pelo usuário.
    a) 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
    b) 4/8, 1, 36/24, 2, 100/40, 144/48,...
    */
    int num,k,dois=0,cinco=0;

    printf("Gera e exibe cada uma das sequencias com uma quantidade K de termos determinados pelo usuario.\n");

    printf("Informe a quantidade desejada: \n");
    scanf("%i", & k);
    printf("Sequencia desejada com %i termos: \n",k);

    for(num=1; num<=k; num++)
    {
        printf("Termo %i: ", num);
        dois=dois+2;
        printf("%i/", dois);
        cinco=cinco+5;
        printf("%i \n", cinco);

    }

}
