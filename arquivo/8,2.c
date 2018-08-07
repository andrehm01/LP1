#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char texto[25];
    FILE*fp;
    fp=open("arq01.txt","r");

    while(fgets(texto,25,fp)!=NULL){
		printf("%s",texto);
	}

	fclose(fp);

	 return 0;
  }
