#include <stdio.h>

void compra (int* conta, int valor){
    *conta -= valor;
}

int main(){
    int valor;
    int conta1, conta2;
    int*p;
    printf("digite saldo de primeira conta ");
    scanf("%d",&conta1);
    printf("digite saldo da segunda conta" );
    scanf("%d",&conta2);
    if (conta1 > conta2){
        p =&conta1;
    }else{
        p = &conta2;
    }
    printf("informe o valor da compra");
    scanf("%d",&valor);
    compra(p,valor);
    printf("%d\n",*p);
return 0;
}
