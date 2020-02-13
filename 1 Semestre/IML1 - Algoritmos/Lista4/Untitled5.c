#include <stdio.h>
#include <locale.h>
int n;

char* ParImpar()
{

    if(n%2==0){
        printf("par.");
    }else{
        printf("impar.");
    }
    return 0;
}

main()
{
    int valor;
    printf("5. Crie a funcao ParImpar que receba da funcao main um valor do tipo inteiro e maior que zero que verifique  se o numero e para ou impar. ");
    printf("Exiba na funcao main o numero e o resultado obtido na funcao ParImpar.\n\n");


    do
    {
        printf("\n Digite o primeiro numero: ");
        scanf("%i",&n);

    if(n==0)
    {
        printf("\n Numero invalido! \n");
    }
    }
    while(n<=0);
    printf("O numero %i e ",n);
    printf("%c",ParImpar());

}
