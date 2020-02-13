#include <stdio.h>

int main(){
float calcularAreaRetang(float x,float y);
float area,x,y;
printf("Informe a base: ");
scanf("%f",&x);
printf("Informe a altura: ");
scanf("%f",&y);
area=calcularAreaRetang(x,y);
printf("A area do retangulo e: %.2f",area);
}

float calcularAreaRetang(float base, float altura){
float area=base*altura;
return area;
}

