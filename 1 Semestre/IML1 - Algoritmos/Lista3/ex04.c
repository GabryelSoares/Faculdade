#include <stdio.h>
#include <locale.h>
int num,cont,nota,mseis,media;
main()
{
    printf("4- Pergunte ao usuario quantos alunos tem na sala dele. \n");
    printf("Em seguida, atraves de um laco do while, peca ao usuario para que entre com as notas dos alunos, uma por vez. \n");
    printf("Exiba a media da turma e quantas notas foram digitadas maiores ou iguais a 6.\n");
    printf("\n\nQuantidade de alunos: ");
    scanf("%i", & cont);
    do
    {
        printf("\n\nNota: ");
        scanf("%i", & nota);
        num=num+1;
        media=media+nota;
        if(nota>6)
        {
            mseis++;
        }
    }
    while(num<cont);
    media=media/cont;
    printf("\nA media da sala foi: %i", media);
    printf("\nA quantidade de alunos com nota acima se 6 foi: %i", mseis);
}
