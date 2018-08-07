#include <stdio.h>
struct Posicao{
    int x;
    int y;
};
struct Personagem{
    int imagem;
    int pont;
    struct Posicao pos;
};
void posicao(struct Posicao *p){
    printf("informe a posicao no eixo x que o pesonagem se encontra:\n ");
    scanf ("%d", &((*p).x));
    printf("informe a posicao no eixo y que o pesonagem se encontra:\n ");
    scanf ("%d", &((*p).y));
}

void preenche(struct Personagem *p){
    printf("informe o caracter para imagem do personagem:\n ");
    scanf("%d",&((*p).imagem));
    posicao(& (*p).pos);


}
int main(){
    int i=0;
    int j;
    int l=10;
    int c=10;
    int mapa[10][10] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };
    struct Personagem heroi[10];
    for (i=0;i<10;i++){

        preenche(&heroi[i]);
        mapa [heroi[i].pos.x][heroi[i].pos.y]= heroi[i].imagem;

    }
        for (j=0; j<10; j++){
        printf("%d ",j);
    }
    printf("\n");
    for (i=0; i<10; i++){
        printf("%d ",i);
        for (j=0; j<10; j++){
            if (mapa[i][j]== 0){
                printf("* ");
            } else {
                printf("%d ", mapa[i][j]);
            }
        }
        printf("\n");
    }
    return(0);
}
