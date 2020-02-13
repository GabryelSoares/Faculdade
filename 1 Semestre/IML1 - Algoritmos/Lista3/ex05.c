#include <stdio.h>
#include <locale.h>
int num,num1,soma,saida=0,cont;
main()
{
    printf("5- Solicite ao usuario numeros quaisquer ate que a soma desses numeros digitados seja inferior a 20. Utilize o laco while.\n");

    printf("\n\nInforme o primeiro numero: ");
    scanf("%i", & num1);
    while(saida==0)
    {
        printf("\n\nInforme outro numero: ");
        scanf("%i", & num);
        if(cont==0){
            soma=num1+num;
        }if(cont!=0){
            soma=soma+num;
        }
            cont++;
             if(soma<20)
        {
            saida=1;
        }
        printf("\nO valor da soma e: %i", soma);
    }
}
