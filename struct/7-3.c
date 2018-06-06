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
    struct Personagem heroi[i];
    for (i=0;i<10;i++){

        preenche(&heroi[i]);
        printf("\nPersonagem: %d - posicao  (%d,%d)\n", heroi[i].imagem, heroi[i].pos.x, heroi[i].pos.y);
    }

}
