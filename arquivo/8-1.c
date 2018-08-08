#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[25];
    int i,tam;
    FILE *fp;// cria ponteiro para aquivo
    printf("digite o texto ");
    scanf("%s,palavra");
    tam=strlen(palavra);
    fp= fopen("arq01.txt","w");
    for (i=0;i<tam;i++);{
        fputc(palavra[i],fp);
    }
    fclose(fp);
    return(0);
}
