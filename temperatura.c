#include <stdio.h>

int main(){
    int temp[5];
    int soma=0;
    int i;
    int media;
    int cont=0;

    for (i=0;i<5; i++){
        printf("digite o valor da temperatura: ");
        scanf("%d", &temp[i]);
        while(temp[i]< -100 || temp[i] >100){
            printf("o valor da temperatura deve estar entre -100 e 100 por favor entre com novo valor de temperatura: ");
            scanf("%d",&temp[i]);
        }
        soma = soma + temp[i];

    }
    media =soma/5;
    for (i=0; i<5;i++){
        if(temp[i]> media){
            cont=+1;
        }
    }
    printf("\nO valor total das temperaturas %d", soma);
    printf("\nA media das temperaturas %d", media);
    printf("\nO numero de temperaturas acima da media %d",cont);
    return 0;
}
