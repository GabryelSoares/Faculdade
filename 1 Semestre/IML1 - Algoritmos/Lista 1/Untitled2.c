#include <stdio.h>
main()
    {
    float n,r;

     do{
         printf("Informe um valor para saber o seu reajuste: ");
         scanf("%f" , & n);

     }while(n<=0);
         r=n*0.10;
         printf("O Reajuste foi de: %.2f",r);
         printf("\nO valor reajustado ficou em %.2f",n+r);

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
