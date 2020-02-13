#include <stdio.h>


main(){

int cont=0;
float a[10],menor;

for(cont;cont<10;cont++){
 printf("\nInforme um numero: ");
 scanf("%f",& a[cont]);
    if(cont==0){
            menor=a[cont];

    }else if(a[cont]<menor){
    menor=a[cont];

    }
}

 printf("\nO menor numero e: %.2f",menor);

}
