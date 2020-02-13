#include <stdio.h>
main()
    {
    float h,a,s,p,inss;

     do{
         printf("Informe o valor da hora aula para calcular o salario do professor: ");
         scanf("%f" , & h);
            if(h<=0)
            {
            printf("Valor invalido!");
            printf("\n");
            }
         }while(h<=0);

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

     }

/*

         printf("O sa foi de: %.2f",d);
         printf("\nO valor com desconto ficou em %.2f",n-d);

         printf("\n");

         printf("\nO Antecessor de %f",n);
         printf(" e %f",n-1);

         printf("\nO Sucessor de %f",n);
         printf(" e %f",n+1);


         printf("\n");


        celsius -> farenheit

        }
*/
