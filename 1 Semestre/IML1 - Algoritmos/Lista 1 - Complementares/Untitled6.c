#include <stdio.h>
main()
{
    /*
    Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura
    e a altura que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos
    degraus o usuario precisar� subir para alcan�ar o seu objetivo, sem se preocupar com a altura do usu�rio.
    */
    float alturadegraus=0,alturadesejada=0,quantidadedegraus=0;
    printf("Programa para calcular altura da escada\n ");
    printf("\nNo Brasil, a norma NBR-9077 admite degraus entre 16cm e 18cm.\n ");
    do
    {
        printf("\nInforme a altura dos degraus da escada em centimetros: ");
        scanf("%f", & alturadegraus);
        if(alturadegraus<16 || alturadegraus>18)
        {
            printf("Altura invalida! ");
        }
    }
    while(alturadegraus<16 || alturadegraus>18);

    do
    {
        printf("\nInforme a altura que deseja alcancar subindo a escada em metros: ");
        scanf("%f", & alturadesejada);
        if(alturadesejada<=0)
        {
            printf("Altura invalida! ");
        }
    }
    while(alturadesejada<=0);
    alturadesejada = alturadesejada*100;
    quantidadedegraus=(alturadesejada/alturadegraus);

    printf("\nPara chegar o usuario precisa subir %.2f degraus. \n", quantidadedegraus);

}
