#include <stdio.h>
int soma_de_numeros(int x){
	int soma=x;
	while (x!=0){
		printf ("Digite um n�mero: ");
		scanf ("%d", &x);
		soma = soma + x;
		}
		return soma;
}
int main () {
	int n;
	printf("enquanto o numero digitado for diferente de 0\n");
	printf ("Digite um n�mero: ");
	scanf ("%d", &n);
	n = soma_de_numeros(n);
	
	printf (" A soma de todos os n�meros e: %d\n", n);
	return 0;
}
