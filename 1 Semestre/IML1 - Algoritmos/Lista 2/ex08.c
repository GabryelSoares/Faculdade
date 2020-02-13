#include <stdio.h>
#include <locale.h>
int x,i,a;
float p,z;
main()
{
    printf("8- Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuario.\n");
    printf("A variavel Peso armazena cada um do N pesos digitados.\n");
    printf("Calcule e mostre a media dos pesos digitados.\n");
    printf("\nDigite a quantidade de pessoas: \n");
    scanf("%d",&x);
    while(x<=0)
    {
        printf("Valor invalido, digite novamente! \n");
        scanf("%d",&x);
    }
    if (x>0)
    {
        for(i=1; i<=x; i++)
        {
            printf("Insira o %d peso: \n",i);
            scanf("%f",&p);
            z=z+p;

        }
        z=z/x;
        printf("A media dos pesos e: \n%2.f\n",z);
    }


}
