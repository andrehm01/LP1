#include <stdio.h>
#include <string.h>

int main(){
    char string[26];
    int i=0;
    FILE* f = fopen ("escrever.txt","r");
    string[i]=fgetc(f);
    while(string[i]!= -1){
        i++;
        string[i] = fgetc(f);

    }
    string[i]='\0';
    fclose(f);
    printf("%s",string);
    return 0;
}

