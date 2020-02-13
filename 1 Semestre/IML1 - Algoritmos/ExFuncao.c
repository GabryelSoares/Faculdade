#include <stdio.h>
#include <locale.h>
int k=0,i,par;
float A[9];

Maior()
{
    int cont=0,maior;
    for(cont; cont<k; cont++)
    {
        if(cont==0)
        {
            maior=A[cont];
        }
        else if(A[cont]>maior)
        {
            maior=A[cont];
        }

    }
    return maior;
}

int QuantPar()
{
    int cont=0,contpar=0;
    for(cont; cont<k; cont++)
    {
        if((int)A[cont]%2==0)
        {
            contpar++;
        }
    }
    return contpar;
}

main()
{
    int cont;
    printf("Armazene no vetor A no minimo 5 numeros quaisquer e no maximo 10.\n");
    printf("A variavel vetor e do tipo global e a variavel K tambem e global.\n");
    printf("Crie a funcao Maior() para verificar e exibir  no interior da funcao main() o maior numro armazenado no vetor A.\n");
    printf("Crie a funcao Quantpar() para calcular e exibir na funcao main() a quantidade de numeros pares.\n\n");
    while(k<5 || k >10)
    {
        printf ("informe a quantidade desejada:");
        scanf ("%d",&k);
        if(k<5 || k>10)
        {
            printf("Numero invalido!\n");
        }
    }
    printf("\n");

    for(cont; cont<k; cont++)
    {

        printf ("Digite um numero: ");
        scanf ("%f",&A[cont]);
    }

    printf("\n\nA quantidade de numeros pares e: %i",QuantPar());
    printf("\n\nO maior numero e: %d",Maior());

    for(cont; cont<k; cont++)
    {
        printf ("Numero %d",A[cont]);
    }

}
