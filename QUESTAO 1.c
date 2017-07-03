#include <stdio.h>

int main ()
{
    FILE *arq;
    char ch;
    int cont, i,c;
    arq = fopen("arq.txt", "w");
    if(arq==NULL){
        printf ("ERRO NA ABERTURA/CRIACAO DO ARQUIVO");
        exit (1);
    }

    printf ("CARACTERE: \n");
    fflush (stdin);
    scanf ("%c", &ch);

    while (ch != '0'){
        fputc (ch, arq);
        printf ("CARACTERE: \n");
        fflush (stdin);
        scanf ("%c", &ch);
    }
    fclose(arq);

    arq = fopen("arq.txt", "r");
    if (arq==NULL) exit(1);

    ch=fgetc(arq);
    while (ch!=EOF){
        printf ("%c", ch);
        ch=fgetc(arq);
    }

    fclose(arq);

}
