#include <stdio.h>

void preenche (int vs[2][3]){
	int i;
	int j;
	for (i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("informe os valores do array:");
			scanf("%d",&vs[i][j]);

		}
	}

}
int media_vs (int v [2][3]){
    int soma =0;
    int media;
    int i, j;
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            soma = soma + v[i][j];
        }
    }
    media = soma/6;

    return media;
}

int main (void){
    int i,j;
	int v[2][3];
	int media;
	preenche(v);
	media = media_vs(v);
    printf("os valores do vetor\n");
	for (i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d\n",v[i][j]);
		}
	}
    printf("a media dos elementos do vetor e %d", media);

return 0;
}
