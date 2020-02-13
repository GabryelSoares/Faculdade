#include <stdio.h>
main()
{
    /*8.	O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação
    sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / (altura). Elabore um algoritmo que
    leia o peso e a altura de um adulto e mostre sua condição de acordo com as condições abaixo:
    a.	Condição Abaixo de 18,5
    b.	Abaixo do peso Entre 18,5 e 25
    c.	Peso normal Entre 25 e 30
    d.	Acima do peso Acima de 30 obeso
    */
    float peso,altura,imc;

    printf("Programa para calcular IMC da pessoa ");

    do
    {
        printf("\nInforme a altura da pessoa em centimetros: ");
        scanf("%f", & altura);
        if(altura<=0 || altura >=300)
        {
            printf("Altura invalida! ");
        }
        else
        {
            altura=altura/100;
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
    altura=altura*altura;
    imc=(peso/altura);
    printf("O imc e: %.2f! \n",imc);

    if(imc<18.5)
    {
        printf("Condição Abaixo de 18,5");
    }
    if(imc>=18.5 && imc<25)
    {
        printf("Abaixo do peso: entre 18,5 e 25");
    }
    if(imc>=25 && imc<=30)
    {
        printf("Peso normal: entre 25 e 30");
    }
    if(imc>30)
    {
        printf("Acima do peso: acima de 30 obeso");
    }


}
