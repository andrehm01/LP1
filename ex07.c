#include <stdio.h>
#include <string.h>

struct cadastro{// declarando struct do tipo cadastro
	char nome[15];
	int pontos;
}campeonato[20];//vetor campeonato do tipo struct

void cadastro(int x);
void busca();
int main(){

	int n;
	printf("informe o numero de times no campeonato: \n");
	scanf ("%d",&n);
	cadastro (n);
	return 0;
}
void busca(){
	int k;
	
	printf("digite a posicao de classificacao da tabela ");
	scanf("%d",&k);
	printf ("o time nessa posicao e %s com %d pontos", campeonato[k-1].nome, campeonato[k-1].pontos);
	printf("\n");

}
void cadastro(int x){
	int i,vit;
	int emp, de;
	int aux;
	char time[15];
	for(i=0;i<x;i++){
			printf("digite o nome do %d time: ",i+1);
			getchar();
			fgets(campeonato[i].nome,20,stdin);
			printf("informe o numero de vitorias: ");
			scanf("%d",&vit);
			printf("informe o numero de empates: ");
			scanf("%d",&emp);
			printf("informe o numero de derrotas: ");
			scanf("%d",&de);
			campeonato[i].pontos = vit*3 +emp;
			
			printf("\n");
	}
	for (i=0;i<x;i++){
		if (campeonato[i].pontos< campeonato[i+1].pontos){
			aux = campeonato[i+1].pontos;
			campeonato[i+1].pontos= campeonato[i].pontos;
			campeonato[i].pontos = aux;
			strcpy(time, campeonato[i+1].nome);
			strcpy(campeonato[i+1].nome, campeonato[i].nome);
			strcpy(campeonato[i].nome, time);
		}
		
		busca();
	}
}
