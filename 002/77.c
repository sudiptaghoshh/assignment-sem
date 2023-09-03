#include <stdio.h>
int MaxMin(int a,int b);
int main() {

  int x,y;
  printf("Enter two positive integer: ");
  scanf("%d%d",&x,&y);
  MaxMin(x,y);
  return 0;
}

int MaxMin(int a,int b){
    if(a>b){
        printf("%d is maximum and %d is minimum",a,b);
    }
    else{
         printf("%d is maximum and %d is minimum",b,a);
    }
}