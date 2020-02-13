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
    printf("2. Crie a função Verifica que receba da funcao main um valor do tipo inteiro e declarado localmente na funcao main.");
    printf("Na funcao verifica  verifique e exiba se o valor e positivo ou negativo ou zero.\n\n");

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
