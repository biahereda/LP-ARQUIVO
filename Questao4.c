#include <stdio.h>

int main ()
{
    FILE *arq;
    char arquivo [50], palavra [30], str [50];
    int num=0;

    printf ("Digite o nome do arquivo desejado: \n");
    gets (arquivo);
    printf ("Digite a palavra a ser procurada: \n");
    gets (palavra);

    arq =fopen(arquivo, "r");
    if (arq==NULL){
        printf ("ERRO");
        exit (1);
    }

   while(!feof(arq)){
		fscanf(arq, "%s", str);
		if (strcmp(str, palavra)==0){
			 num++;
		}
	}
	printf("A palavra aparece %d vezes", num);

    fclose(arq);
}
