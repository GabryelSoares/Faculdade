#include <stdio.h>
main()
{
    /*
        7.	Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre
        o seu peso ideal, utilizando as seguintes fórmulas:
    a.	Para homens (72 * h) – 58
    b.	Para mulheres (62,1* h) – 44.7
    */
    float pesoideal,alturapessoa;
    char sexo;

    printf("Programa para calcular peso ideal da pessoa ");


    do
    {
        printf("\nInforme a altura da pessoa em cm: ");
        scanf("%f", & alturapessoa);
        if(alturapessoa<=0)
        {
            printf("Altura invalida! ");
        }
        else
        {
            alturapessoa=alturapessoa/100;
        }
    }
    while(alturapessoa<=0);


    do
    {
        printf("\nInforme o sexo (m) para mulher e (h) para homem: ");
        scanf("%s", & sexo);

        if(sexo!='m' && sexo!='h')
        {
            printf("Letra invalida! ");
        }
    }
    while(sexo!='m' && sexo!='h');

    if(sexo=='h')
    {
        pesoideal=(alturapessoa*72) - 58;
        printf("O peso ideal dele e: %.2f! ",pesoideal);
    }
    else
    {
        pesoideal=(alturapessoa*62.1) - 44.7;
        printf("O peso ideal dela e: %.2f! ",pesoideal);
    }


}
