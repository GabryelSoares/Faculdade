#include <stdio.h>
main()
    {
    int an,aa,i;

        do{
         printf("\nInforme o ano de nascimento: ");
         scanf("%d",&an);
            if(an<=0)
            {
            printf("\nValor invalido, informe um numero inteiro!");
            }
        }while(an<=0);


        do{
         printf("\nInforme o ano atual: ");
         scanf("%d",&aa);
            if(aa<=an)
            {
            printf("\nValor deve ser maior que o ano de nascimento!");
            }
        }while(aa<=an);


         i=aa-an;
         printf("\nA idade e: %d",i);

         printf("\nA idade em 2020 sera: %d",i+1);


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
