#include <stdio.h>


main()
{

    int cont=0,k;
    float a[10],soma,menor;
    do
    {
        printf("Digite a quantidade que dever se >=3 e <=10\n");
        scanf("%d",&k);
        if(k<3||k>10)
        {
            printf("Quantidade invalida\n");
        }
    }
    while(k<3||k>10);

    for(cont; cont<k; cont++)
    {
        printf("Digite um numero qualquer:\n");
        scanf("%f",&a[cont]);
        if(cont==0)
        {
            menor=a[cont];
        }
        else if(a[cont]<menor)
        {
            menor=a[cont];
        }
        soma=soma+a[cont];
    }
    printf("O menor numero encontrado e %.2f\n",menor);
    printf("A some e %f   \n",soma);

    printf("Exiba o conteudo do vetor \n");
    for(cont=0; cont<k; cont++)
        printf("a[%d]=%.2f\n",cont,a[cont]);

    printf("Exiba em que posicoes o menor numero apareceu\n");
    for(cont=0; cont<k; cont++)
        if(a[cont]==menor)
            printf("Posicao: %d\n",cont);
}
