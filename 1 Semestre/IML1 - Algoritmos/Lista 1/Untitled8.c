#include <stdio.h>
main()
    {
    float s,l,i,p;
        do{
         printf("\n Digite o salario: ");
         scanf("%f",&s);
       if(s<800){
            s= s + (s*0.15);
            }
       if(s>=800 && s<=1000){

           s= s + (s*0.10);
       }
       if(s>1000){

           s= s + (s*0.05);
       }
       if(s<=0){printf("\n Numero invalido! \n");}

       }while(s<=0);
        printf(" Salario %.2f\n", s);
     }
