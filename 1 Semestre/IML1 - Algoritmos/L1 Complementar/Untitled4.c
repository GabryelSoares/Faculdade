#include <stdio.h>
main()
{
    /*
    4.	Receba tr�s n�meros que representam os lados de um tri�ngulo e garantam a exist�ncia de um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.
    Observa��es:
    a.	Garantir que cada lado � menor que a soma dos outros dois lados.
    b.	O tri�ngulo � equil�tero quando todos os lados s�o iguais.
    c.	O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
    d.	O tri�ngulo � escaleno quando todos os lados s�o diferentes.
    */
    int lado1,lado2,lado3,saida=0;

    while(saida==0)
    {
        printf("\nInforme os lados do triangulo para saber seu tipo! \n");

        printf("\nInforme o primeiro lado: \n");
        scanf("%i", & lado1);

        printf("\nInforme o segundo lado: \n");
        scanf("%i", & lado2);

        printf("\nInforme o terceiro lado: \n");
        scanf("%i", & lado3);

        if(lado1==lado2 && lado2==lado3)
        {
            printf("\nTriangulo equilatero \n");
            saida=1;

        }
        if(saida==0)
        {

            if(lado3>lado2+lado1 || lado2>lado1+lado3 || lado1>lado2+lado3 )
            {
                printf("\nNumeros invalidos para formar um triangulo! \n");
                saida=1;
            }

            if(saida==0 )
            {
                if( lado1==lado2 || lado2==lado3 || lado1==lado3)
                {
                    {
                        printf("\nTriangulo Isoceles \n");
                        saida=1;
                    }
                }
                if(lado1!=lado2 || lado2!=lado3 || lado1!=lado3)
                {
                    if(saida==0)
                    {
                        printf("\nTriangulo Escaleno \n");
                        saida=1;
                    }
                }
            }
        }
    }
}
