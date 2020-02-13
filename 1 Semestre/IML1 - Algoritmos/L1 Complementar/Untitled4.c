#include <stdio.h>
main()
{
    /*
    4.	Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
    Observações:
    a.	Garantir que cada lado é menor que a soma dos outros dois lados.
    b.	O triângulo é equilátero quando todos os lados são iguais.
    c.	O triângulo é isóscele quando apenas dois lados são iguais.
    d.	O triângulo é escaleno quando todos os lados são diferentes.
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
