// ler uma imagem .pgm e imprimir na tela 
#include <stdio.h>
#include <string.h>

int main(){
	char linha[10],linha2[55];
	FILE *fp;
	fp = fopen ("originalPgmP5.pgm","rb");
	int c,i,j,l,p; //coluna linha 
	unsigned char str[10];
	if (fp == NULL){
		printf("ERRO arquivo não existe");
	}
	fscanf(fp,"%s",linha); 
	printf("%s\n", linha);
	
	fgetc(fp);
	fgets(linha2,55,fp);
	printf("%s", linha2);
	fscanf(fp,"%d",&c);
	printf("%d ", c);
	fscanf(fp,"%d",&c);
	printf("%d\n", c);
	fscanf(fp,"%d",&p);
	printf("%d\n", p);
	
	for (i=0;i<10;i++){
		fread(str,10,1,fp);
		printf("\n");
		for (j=0;j<10;j++){	
			printf("%u ",str[j]);
		}
	}
	printf("\n");
	fclose(fp);
	return 0;
}

	
	
