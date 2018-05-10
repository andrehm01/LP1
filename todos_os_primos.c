#include <stdio.h>

int eh_primo(int n){
    int i;
    int div =0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            div++;
        }
    }
        if (div==2 || n == 2){
            return 1;
        }
        else{
            return 0;
        }

}
int todos_os_primos(n){
    int j;
    printf("os primos entre 1 e %d s\306o: ",n, "\n");
    for (j=1;j<=n;j++){
        if (eh_primo(j)==1){
            printf ("\n%d",j);
        }

    }
}
int main(){
    int n;
    printf("digite o n\243mero para verific\306o: ");
    scanf("%d",&n);
    todos_os_primos(n);
}
