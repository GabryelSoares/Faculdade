#include <stdio.h>
main()
    {
    float n1,n2,n3,n4,m;
     printf("\n Calculo de media\n");
        do{
            printf("\n Digite a primeira nota: ");scanf("%f",&n1);
            if(n1<0||n1>10){printf("\n Numero invalido! \n");}
       }while(n1<0||n1>10 );

        do{
            printf("\n Digite a segunda nota: ");scanf("%f",&n2);
            if(n2<0||n2>10){printf("\n Numero invalido! \n");}
       }while(n2<0||n2>10 );

        do{
            printf("\n Digite a terceira nota: ");scanf("%f",&n3);
            if(n3<0||n3>10){printf("\n Numero invalido! \n");}
       }while(n3<0||n3>10 );

        do{
            printf("\n Digite a quarta nota: ");scanf("%f",&n4);
            if(n4<0||n4>10){printf("\n Numero invalido! \n");}
       }while(n4<0||n4>10 );

        m=(n1+n2+n3+n4)/4;
       if(m<5){printf("\n O Aluno foi REPROVADO com media: %.2f\n", m);}
       if(m>=5){printf("\n O Aluno foi APROVADO com media: %.2f\n", m);}
     }
