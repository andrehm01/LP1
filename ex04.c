#include <stdio.h>

float limite_vel(float x){
	x = x/1.6;
	if ( x<80) {
		printf ("velocidade %2.fkm/h acelere.\n",x);
	} else if (x >101) { 
		printf ("velocidade %2.fkm/h desacelere.\n",x);
	} else {
		printf ("velocidade %2.fkm/h mantenha.\n",x);
	}
}

int main (void){
	float velocidade;
	printf ("informe a velocidade em (mph): ");
	scanf ("%f", &velocidade);
	velocidade = limite_vel(velocidade);

	
	return 0;
}
