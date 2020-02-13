#include <stdio.h>
main()
{
    /* 9.
    Faça um programa que receba a altura e o peso de uma pessoa. De acordo
    com a tabela da lista e mostre qual a classificação dessa pessoa.
    */
    float peso,altura;
    char classificacao;
    printf("Programa para calcular calssificacao de peso da pessoa ");
    do
    {
        printf("\nInforme a altura da pessoa em centimetros: ");
        scanf("%f", & altura);
        if(altura<=0 || altura >=300)
        {
            printf("Altura invalida! ");
        }
    }
    while(altura<=0 || altura >=300);


    do
    {
        printf("\nInforme o peso: ");
        scanf("%f", & peso);

        if(peso<=0)
        {
            printf("Peso invalido! ");
        }
    }
    while(peso<=0);

    if(altura<120)
    {
        if(peso<=60)
        {
            classificacao='A';
        }
        if(peso>60 && peso <=90)
        {
            classificacao='D';
        }
        if(peso>90)
        {
            classificacao='G';
        }
    }

    if(altura>=120 && altura <=170)
    {
        if(peso<=60)
        {
            classificacao='B';
        }
        if(peso>60 && peso <=90)
        {
            classificacao='E';
        }
        if(peso>90)
        {
            classificacao='H';
        }
    }

    if(altura>170)
    {
        if(peso<=60)
        {
            classificacao='C';
        }
        if(peso>60 && peso <=90)
        {
            classificacao='F';
        }
        if(peso>90)
        {
            classificacao='I';
        }
    }
    printf("A classificacao de peso e: %c \n",classificacao);
}
