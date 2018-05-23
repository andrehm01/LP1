#include <stdio.h>

int main(){
  int n1;
  int n2;
  int*p;
  printf("entre com um numero:");
  scanf("%d",&n1);
  printf("entre com um numero:");
  scanf("%d",&n2);
  
  if (n1>n2){
    p = &n1;
  }
  else{
    p = &n2;
  }
  *p-=50;
  printf("%d %d \n", n1,n2);
return 0;
}
