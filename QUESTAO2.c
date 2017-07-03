#include <stdio.h>

int main ()
{
    char arquivo[50];
    FILE *p;
    int num=0;
    char ch;

    printf ("Digite o nome do arquivo que voce deseja: \n");
    gets (arquivo);
    //printf ("%s", arquivo);
    p= fopen (arquivo, "r");
    if (p==NULL){
        printf ("ERRO");
        exit (1);
    }

    while ((ch=fgetc(p))!= EOF){
        if (ch=='\n') num++;
    }
    printf ("Existem %d linha(s)", num);
    fclose (p);
}
