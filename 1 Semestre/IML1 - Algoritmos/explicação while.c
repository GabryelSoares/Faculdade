#inlcude <stdio.h>
main()
{
    int k=0,num=0,cont=0;
    do
    {
        printf("Digite um Numero>0\n");
        scanf("%i",&k);
        if(k<=0)
        {
            printf("Quant. > 0");
        }
        While(k<=0);
        do
        {
            num=num+2;
            printf("%i",num);
            cont=cont++;

            }While(cont!=k);
        }
    }

}
