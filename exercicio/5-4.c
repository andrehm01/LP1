#include <stdio.h>
void troca(int* p1, int* p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}
int main(){
 int x=10;
 int y=20;
 printf ("%d %d\n", x,y);
 troca(&x,&y);
 printf("%d %d", x, y);

}
