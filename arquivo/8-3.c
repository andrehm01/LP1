#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int j;
    int tam;

    char str[10][26];
    for (i=0;i<10;i++){
        printf("escreva a string %d ", i+1);
        scanf("%s",str[i]);
    }

    FILE * file = fopen ("esc8-3.txt","w");
    for (i=0; i<10; i++){
        tam = strlen(str[i]);

        for(j=0; j<tam; j++){
            fputc(str[i][j],file);
        }
    }
    fclose(file);
    return 0;
}
