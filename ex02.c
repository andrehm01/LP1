#include <stdio.h>
void maior_numero(int x, int y){//definindo fun��o
	
	if (x>y){
		printf("o numero %d � maior", x);
	}
	else if (y>x){
		printf("o numero %d � maior", y);
	}
	else{
		printf("o valores s�o iguais");
	}
}

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

