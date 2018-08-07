//gcc 5.4.0

#include <stdio.h>
#include <string.h>

int strlen2(char*p){
    int i=0;
    int qt=0;
    while(p[i]!= '\0'){
        qt= qt+1;
        i=i+1;
    }
    return qt;
}
void strjoin (char*s1, char*s2, char*dest){
    int tam1, tam2,tam3;
    int i=0;
    int j=0;
    tam1=strlen2(s1);
    tam2 =strlen2(s2);
    tam3 = tam1+tam2;
    for (i=0;i<tam1;i++){
        dest[i]=s1[i];
    }
    for (i=tam1;j<tam3;i++){
        dest[i]=s2[j];
        j++;
    }
    dest[i]='\0';
}
int main(void){
    int tam;
    char s[] ="cadeira";
    char s2[]="chuveiro";
    char dest[]="";
    tam= strlen2(s);
    printf("tamanho da primeira string s eh %d",tam);
    printf("\n");
    strjoin(s,s2,dest);
    printf("string final %s",dest);
    return 0;
}
