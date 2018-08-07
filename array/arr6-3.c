#include <stdio.h>
#include <math.h>
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
float dist[10];
float maior_dist=0;
struct Posicao Mponto = {0,0};
for (i=0;i<10;i++){
        dist[i]= sqrt ( pow(p[i].x - 0,2) + pow(p[i].y-0,2) );
        if (dist[i] >maior_dist){
            maior_dist=dist[i];
            Mponto=p[i];
        }

        
    }

    return Mponto;
};
int main(){
    int i;
    struct Posicao vet[10];
    struct Posicao Mponto;
    for (i=0;i<10;i++){

        preenche (&vet[i]);
        Mponto = Mpontuacao(&vet);
        printf("vetor%d posicao (%d,%d)\n", i+1,vet[i].x, vet[i].y);
    }
    printf("maior distancia (%d,%d)",Mponto.x, Mponto.y);
	return 0;
}
