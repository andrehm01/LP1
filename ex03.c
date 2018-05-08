
#include <stdio.h>
float conversor_real(float x){//definindo funçao
	x= x*3.17;
	return x;	
}

int main (void){
	float valor;
	printf ("informe o valor de celular em dollar: ");
	scanf ("%f", &valor);
	valor = conversor_real(valor);
	printf("o valor do celular em reais:%.2f",valor);
	printf("\n");
		if (valor<1000){
		printf("bom negocio!!!");
	}else{
		printf("mal negocio");
	}
	
	return 0;
}
