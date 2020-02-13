#include <stdio.h>
#include <locale.h>
int num;
int main ()
{
    int fatorial();
    do
    {
        printf("Digite um numero inteiro: ");
        scanf(" %d", &num);
    }
    while (num <= 0);
    printf("\n\tO fatorial de %d e %d.\n\n", num, fatorial());
}

int fatorial()
{
    int x=1, soma = 0;
    if (num == 1)
    {
        soma = 1;
    }
    else
    {
        for ( x = 1; x < num; x++)
        {
            if (soma != 0)
            {
                soma = soma * (num -x);
            }
            else
            {
                soma = (num -x) * num; /* se der erro muda este 'x' por '1'*/
            }
            printf("Etapa = %d \t Conta * %d = %d\n", x, (num- x), soma);
        }

        return soma;
    }
}
