#include <stdio.h>

typedef struct cadastro
{
    int numero;
    char nome [20][20];
}Cadastro;

int main ()
{
    FILE *arq;
    Cadastro b;
    arq=fopen("arq.txt", "a");

    if (arq==NULL){
        printf ("ERRO");
        exit(1);
    }


    printf ("digite seu nome: ");
    fflush(stdin);
    fgets(b.nome,50,stdin);


    printf ("digite seu numero: ");
    fflush(stdin);
    scanf ("%d",&b.numero);

    while (b.numero!=0){

    fprintf(arq, "%s %d \n", b.nome, b.numero);

    printf ("digite seu nome: ");
    fflush(stdin);
    fgets(b.nome,50,stdin);


    printf ("digite seu numero: ");
    fflush(stdin);
    scanf ("%d",&b.numero);

   // fwrite(&b,sizeof(Cadastro),1,arq);


    }

    fclose(arq);

}
