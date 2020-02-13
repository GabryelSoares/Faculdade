#include <stdio.h>
main()
{
    float n1,n2,n3,n4,q1,q2,q3,q4,s;
    do
    {
        do
        {
            printf("\n Digite o primeiro numero: ");
            scanf("%f",&n1);
            if(n1<10||n1>25)
            {
                printf("\n Numero invalido! \n");
            }
        }
        while(n1<10||n1>25);

        do
        {
            printf("\n Digite o segundo numero: ");
            scanf("%f",&n2);
            if(n2<0)
            {
                printf("\n Numero invalido! \n");
            }
        }
        while(n2<0);

        n3=n1+n2;
        printf("\n O terceiro numero e: %.2f",n3);

        n4=n1*n2*n3;
        printf("\n O quarto numero e: %.2f",n4);

        q1=n1*n1;
        q2=n2*n2;
        q3=n3*n3;
        q4=n4*n4;

        printf("\n Soma dos quadrados:\n");

        printf("\n O quadrado do primeiro numero e: %.2f",q1);
        printf("\n O quadrado do segundo numero e: %.2f",q2);
        printf("\n O quadrado do terceiro numero e: %.2f",q3);
        printf("\n O quadrado do quarto numero e: %.2f",q4);

        s=q1+q2+q3+q4;

        printf("\n A soma dos quadrados e: %.2f",s);
        if(s>50000)
        {
            printf("\n Refaca a operacao ate conseguir um numero abaixo de 50.000");
        }

    }
    while(s>50000);

}
