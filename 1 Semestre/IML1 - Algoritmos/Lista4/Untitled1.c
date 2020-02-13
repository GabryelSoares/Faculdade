#include <stdio.h>
#include <locale.h>
    float raio;

Esfera()
{
    float v;
    float Pi=3.14;

    v= 4*3.14*raio*raio*raio/3;

    return v;
}

main()
{
    int cont;
    printf("1. Crie a função Esfera que receba da função main o valor do raio e calcule o volume da esfera.\n");
    printf("O seu volume (v = 4/3*Pi*R3). \n");
    printf("Exiba o resultado obtido no interior da função main.\n\n");

    printf("Informe o valor do raio: ");
    scanf("%f",& raio);


    printf("\n\nO volume da esfera e: %f",Esfera());

}
