#include <stdio.h>
#include <string.h>

void escreva_string(FILE *f, char *s){
    int tam = strlen(s);
    int i;
    f = fopen ("esc8-4.txt","w");
    for (i=0;i<tam;i++){
        fputc(s[i],f);
}
    fclose(f);
}
int main(){
    int i;
    char str[26];
    printf("digite a string: ");
    scanf("%s",&str);
    FILE *file;
    escreva_string(file,str);
    
    return 0;
}
