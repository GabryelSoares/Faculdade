#include <stdio.h>
main()
    {
    float vf,l,i,p;

        do{
         printf("\nInforme valor de fabrica do veiculo: ");
         scanf("%f",&vf);
            if(vf<=0){printf("\nValor invalido!");}
        }while(vf<=0);
                    do{
                     printf("\nInforme o percentual de lucro: ");
                     scanf("%f",&l);
                        if(l<=0){printf("\nValor invalido!");}
                    }while(l<=0);
                                do{
                                 printf("\nInforme o percentual de impostos: ");
                                 scanf("%f",&i);
                                    if(i<=0){printf("\nValor invalido!");}
                                }while(i<=0);
         l=(l*vf)/100;
         i=(i*vf)/100;
         p=vf+l+i;
         printf("\nO Valor final do veiculo e: %f",p);
         printf("\nO Lucro na venda do veiculo e: %f",l);
         printf("\nO veiculo tera impostos no valor de: %f",i);
         printf("\n");


     }
/*
         do{
             printf("Informe quantas aulas foram realizadas pelo professor: ");
             scanf("%f" , & a);
                if(a<=0)
                printf("Valor invalido!");
                printf("\n");
     }while(a<=0);
        s=h*a;
        printf("O salario do professor e: %.2f",s);
        printf("\n");

        do{
         printf("\n");
         printf("Informe a porcentagem descontada para o INSS: ");
         scanf("%f" , & p);
            if(p<=0)
            {
            printf("Valor invalido!");
            printf("\n");
            }
         }while(p<=0);
         inss=(s*p)/100;
            printf("O valor descontado para o INSS e: %.2f",inss);
            printf("\n");
            s=s-inss;
            printf("\n");
            printf("O salario do professor com desconto e: %.2f",s);
            printf("\n");
*/

/*

         printf("O sa foi de: %.2f",d);
         printf("\nO valor com desconto ficou em %.2f",n-d);

         printf("\n");

         printf("\nO Antecessor de %f",n);
         printf(" e %f",n-1);

         printf("\nO Sucessor de %f",n);
         printf(" e %f",n+1);


         printf("\n");


        }
*/
