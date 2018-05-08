#include <stdio.h>
void maior_numero (int x, int y);

int main (void){
	int n1;
	int n2;
	printf ("digite o primeiro numero: ");
	scanf ("%d", &n1);
	printf ("digite o segundo numero: ");
	scanf ("%d", &n2);
	maior_numero(n1, n2);
	return 0;
}
void maior_numero(int n1, int n2){//definindo função
	
	if (n1>n2){
		printf("o numero %d é maior", n1);
	}
	else if (n2>n1){
		printf("o numero %d é maior", n2);
	}
	else{
		printf("o valores são iguais");
	}
}
