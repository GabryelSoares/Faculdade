#include <stdio.h>
#include <locale.h>
int quant;

float MediaFibonacci()
{
    float media=0;

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    for(i = 0; i < quant; i++) {
        media=media+a;
        auxiliar = a + b;
        a = b;
        b = auxiliar;
    }
    media=media/quant;
    return media;
}

main()
{
setlocale(LC_ALL, "Portuguese");
    printf("7. Crie a funcao MediaFibonacci que receba da funcao main um valor do tipo inteiro e maior que zero que  represente a quantidade de termos da sequencia e calcule a media dos termos da sequencia.\n");
    printf("Exiba na funcao main o resultado obtido na função MediaFibonacci. \n\n");


    do
    {
        printf("\n Digite a quantidade de termos: ");
        scanf("%i",&quant);

    if(quant<=0)
    {
        printf("\n Numero invalido! \n");
    }
    }
    while(quant<=0);

    printf(" Media: %.2f\n", MediaFibonacci());

}
