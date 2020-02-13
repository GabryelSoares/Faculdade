#include <stdio.h>
main()
{
    /*
    Faça um programa que receba o numero de horas trabalhadas e o valor do salario minimo.
    Calcule e mostre o salario a receber seguindo as regras abaixo:
    a) A hora trabalhada valor a metade do salario mínimo.
    b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor do salário hora.
    C) O imposto equivale a 3% do salário bruto.
    d) O salário a receber equivale ao salário bruto menos o imposto.
    */
    float valorhora,horatrabalhada,salario,p,inss,salariominimo;

    do
    {
        printf("Informe o valor do salario minimo: ");
        scanf("%f", & salariominimo);
        valorhora=salariominimo/2;
        if(valorhora<=0)
        {
            printf("Valor invalido!");
            printf("\n");
        }
    }
    while(salariominimo<=0);

    do
    {
        printf("Informe quantas horas o funcionario trabalhou: ");
        scanf("%f", & horatrabalhada);
        if(horatrabalhada<=0)
            printf("Valor invalido!");
        printf("\n");
    }
    while(horatrabalhada<=0);

    salario=valorhora*horatrabalhada;

    printf("O salario do funcionario e: %.2f",salario);
    printf("\n");

    salario=(salario/100)*97;

    printf("\n");
    printf("O salario com desconto do imposto e: %.2f",salario);
    printf("\n");

}
