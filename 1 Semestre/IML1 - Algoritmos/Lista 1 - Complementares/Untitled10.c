#include <stdio.h>
main()
{
    /* 10.
    Faça um algoritmo que receba o a idade, o sexo (1 para masculino e 2 para feminino) e
    salário fixo de um funcionário. Mostre o sexo, a idade e o salário obtido após o acréscimo do abono:

    */
    float idade,sexo,salario;
    printf("Programa para calcular acrescimo do abono. ");
    do
    {
        printf("\nInforme a idade da pessoa: ");
        scanf("%f", & idade);
        if(idade<=0 || idade >=200)
        {
            printf("Idade invalida! ");
        }
    }
    while(idade<=0 || idade >=200);


    do
    {
        printf("\nInforme o sexo (1 para masculino e 2 para feminino): ");
        scanf("%f", & sexo);

        if(sexo!=1 && sexo !=2)
        {
            printf("Opcao invalida! ");
        }
    }
    while(sexo!=1 && sexo !=2);

    do
    {
        printf("\nInforme o salario: ");
        scanf("%f", & salario);

        if(salario<=0)
        {
            printf("Salario invalido! ");
        }
    }
    while(salario<=0);

    if(sexo==1)
    {
        if(idade>=30)
        {
            salario=salario+200;
        }
        else
        {
            salario=salario+120;
        }
    }

    if(sexo==2)
    {
        if(idade>=30)
        {
            salario=salario+220;
        }
        else
        {
            salario=salario+130;
        }
    }
    printf("O salario e: %.2f \n",salario);
}
