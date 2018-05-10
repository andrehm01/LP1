#include <stdio.h>

// primo divisivel n/1 e n/n
int eh_primo(int x){
   int n2;
   n2=x;
   for ( ;n2>0; n2--){
        if (x%n2 ==0 && x!= n2 || x ==1){
            return 0;
            break;
        }
        else if (n2==2){
                return 1;

        }
   }
}

int main(){
    int n;
    printf("digite o n\243mero para verific\306o: ");
    scanf("%d",&n);
    eh_primo(n);
    if (eh_primo(n)==1){
        printf ("O n\243mero %d \202 primo.",n);
    }
    else {
        printf("O n\243mero %d n\306o \202 primo",n);

    }
}

