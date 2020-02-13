#include <stdio.h>
main()
    {
    float c,f,t;

        // celsius -> farenheit
        // y=a*1.8+32;

         printf("Informe a temperatura em graus celsius: ");
         scanf("%f" , & c);

            f=c*1.8+32;

            printf("\n A temperatura em graus Farenheint e: %.2f",f);


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
