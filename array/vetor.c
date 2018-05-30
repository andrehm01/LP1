#include<stdio.h>

void preenche(int* vet, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Digite o  valor: \n");
        scanf("%d",&vet[i]);
   }
}

int media(int* vet, int n){
    int i;
    int soma;
    float media = 0;
    soma =0;
    for(i = 0; i < n; i++){
        soma = soma + vet[i];
    }

   media = soma / n;

   return media;
}

int main(void){
    int v[3];

    preenche(v,3);
    printf("A media e %d\n", media(v,3));

    return 0;
}

