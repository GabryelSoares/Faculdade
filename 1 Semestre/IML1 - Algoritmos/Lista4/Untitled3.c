#include <stdio.h>
#include <locale.h>
float n1,n2;

float Divisao()
{
    float div;
    div=n1/n2;
    return div;
}

main()
{
    int valor;
    printf("2. Crie a funcao Divisao que receba da funcao main dois numeros que possibilitem o calculo da divisao do primeiro pelo segundo.");
    printf("Exiba na funcao main os numeros e o resultado obtido na funcao Divisao.\n\n");
do{
    printf("Informe o primeiro numero: ");
    scanf("%f",& n1);
    printf("Informe o segundo numero: ");
    scanf("%f",& n2);
    if(n2>n1 || n1==0 || n2==0){
        printf("Numeros invalidos para a operacao!\n\n");
    }
}while(n2>n1 || n1==0 || n2==0);


    printf("\nO resultado da divisao e: %.2f",Divisao());

}
