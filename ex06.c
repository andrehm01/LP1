#include <stdio.h>
int soma_quadratica (int x){
	int soma=0;
	int i=1;
	while (i<=x){
		soma = soma + (i*i);
		i+=1;
	}
	return soma;
}
int main () {
	int n;
	printf ("Escreva um número: ");
	scanf ("%d",&n);	
	n = soma_quadratica(n);

	printf ("valor do somatorio: %d\n",n);
	return 0;
}
