#include <stdio.h>
struct Posicao{
 int x;
 int y;
};
void preenche (struct Posicao *p){
    printf("informe a posicao X: ");
    scanf("%d",&p->x);
    printf("informe a posicao Y: ");
    scanf("%d",&p->y);
}
struct Posicao Mpontuacao (struct Posicao *p){
int i;
struct Posicao Mponto = {0,0};
for (i=0;i<10;i++){
    if (p[i].x >= Mponto.x && p[i].y >= Mponto.y){
        Mponto = *p;
    }
}
    return Mponto;
};
int main(){
    int i;
    struct Posicao vet[10];
    struct Posicao Mponto;
    Mponto = Mpontuacao(&vet);
    for (i=0;i<10;i++){

        preenche (&vet[i]);
        printf("vetor%d posicao (%d,%d)\n", i+1,vet[i].x, vet[i].y);
    }
    printf("maior distancia %d,%d",Mponto.x, Mponto.y);
	return 0;
}
