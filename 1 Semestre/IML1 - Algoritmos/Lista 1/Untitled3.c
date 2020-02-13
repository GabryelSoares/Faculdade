#include <stdio.h>
main()
    {
    float n,d;

     do{
         printf("Informe o valor do produto para gerar o desconto: ");
         scanf("%f" , & n);

     }while(n<=0);
         d=n*0.09;
         printf("O desconto foi de: %.2f",d);
         printf("\nO valor com desconto ficou em %.2f",n-d);

         printf("\n");
     }

/*

         printf("\nO Antecessor de %f",n);
         printf(" e %f",n-1);

         printf("\nO Sucessor de %f",n);
         printf(" e %f",n+1);


         printf("\n");

        }
*/
