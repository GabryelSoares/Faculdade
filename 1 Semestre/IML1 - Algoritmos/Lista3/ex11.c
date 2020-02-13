#include <stdio.h>


main()
{
    int k=0,cont;
    float Salario[cont],menor,maior,soma=0;

    printf("\n11- Receba a quantidade de salarios de K individuos.");
    printf("\nK representa essa quantidade e deve ser digitada pelo usuario.");
    printf("\nA variavel Salario armazena cada uma dos K salarios digitados.");
    printf("\nCalcule e mostre a somatoria dos salarios superiores a 3 salarios minimos e inferior ou igual a 7 salarios minimos.");
    printf("\nExiba tambem o maior e o menor salario encontrado.");
    printf("\nUtilize o laco while para a entrada da quantidade K e um laco while para efetuar os calculos e as comparacoes solicitadas.\n\n");

    while(k <= 0)
    {
        printf("\nInforme a quantidade: ");
        scanf("%i",&k);
    }


    while(cont<k)
    {
        printf("\n\nInforme quantos salarios minimos o funcionario recebe: ");
        scanf("%f",& Salario[cont]);
        printf("\nO Salario e: %.2f", Salario[cont]);
        if(Salario[cont]>3 && Salario[cont]<=7)
        {
            soma=soma+Salario[cont];
        }

        if(cont==0)
        {
            menor=Salario[cont];
        }
        else if(Salario[cont]<menor)
        {
            menor=Salario[cont];
        }

        if(cont==0)
        {
            maior=Salario[cont];
        }
        else if(Salario[cont]>maior)
        {
            maior=Salario[cont];
        }

        cont++;
    }


    printf("\n\nA Quantidade e: %i", k);
    printf("\nO maior numero e: %.2f",maior);
    printf("\nO menor numero e: %.2f",menor);
    printf("\nA somatoria dos salarios superiores a 3 salarios minimos e inferiores ou iguais a 7 salarios minimos e: %.2f", soma);
    printf("\n\n");
}
