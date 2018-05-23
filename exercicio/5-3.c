#include <stdio.h>

void compra (int* conta, int valor){
    *conta -= valor ;
}

int main(){
    int i;
    int compras[]= {100,50,80,30,20};
    int conta1, conta2;
    int* conta_maior;
    printf("digite saldo de primeira conta ");
    scanf("%d",&conta1);
    printf("digite saldo da segunda conta " );
    scanf("%d",&conta2);
    for (i=0; i<5; i++){
        if (conta1 > conta2){
            conta_maior =&conta1;
        }else{
            conta_maior = &conta2;
        }
        compra(conta_maior,compras[i]);
        printf("apos a compra o saldo da conta 1 %d e o saldo da conta 2 %d ",conta1, conta2, "\n" );
        printf("\n");
    }


return 0;
}
