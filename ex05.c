#include <stdio.h>
int soma_de_numeros(int x){
	int soma=x;
	while (x!=0){
		printf ("Digite um número: ");
		scanf ("%d", &x);
		soma = soma + x;
		}
		return soma;
}
int main () {
	int n;
	printf("enquanto o numero digitado for diferente de 0\n");
	printf ("Digite um número: ");
	scanf ("%d", &n);
	n = soma_de_numeros(n);
	
	printf (" A soma de todos os números e: %d\n", n);
	return 0;
}
