#include <stdio.h>

int PowNum(int n,int x);

int main() {

  int num,x;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("enter power");
  scanf("%d",&x);
 printf("answer is %d",PowNum(num,x));
  return 0;
}

int PowNum(int n, int x){
    if(x==0){
        return 1;
    }
    return n*PowNum(n,x-1);
}