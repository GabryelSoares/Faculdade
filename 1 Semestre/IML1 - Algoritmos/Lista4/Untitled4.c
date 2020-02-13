#include <stdio.h>
#include <locale.h>
float s;

float ReajSalNovo()
{
    float l,i,p;

    if(s<800)
    {
        s= s + (s*0.15);
    }
    if(s>=800 && s<=1000)
    {

        s= s + (s*0.10);
    }
    if(s>1000)
    {

        s= s + (s*0.05);
    }


    return s;
}

main()
{
    int valor;
    printf("4. Crie a funcao ReajSalNovo que receba da funcao main o valor do salario e efetue o calculo do reajuste de salario cada funcionario.");
    printf("Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.\n\n");
    printf("Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%.");
    printf("Exiba na função main o salário antigo e novo salário obtido na função.");


    do
    {
        printf("\n Digite o salario: ");
        scanf("%f",&s);

    if(s<=0)
    {
        printf("\n Numero invalido! \n");
    }
    }
    while(s<=0);
    printf(" Salario %.2f\n", ReajSalNovo());

}
