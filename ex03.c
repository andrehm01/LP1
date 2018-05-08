#include <stdio.h>
float conversor_real(float x){//definindo função
	x= x*3.17;
	return x;	
}

int main (void){
	float valor;
	printf ("informe o valor de celular em dollar: ");
	scanf ("%f", &valor);
	valor = conversor_real(valor);
	printf("\n"" o valor em reais:%f",valor);
		if (valor<1000){
		printf("bom negocio!!!");
	}else{
		printf("mal negocio");
	}
	
	return 0;
}

