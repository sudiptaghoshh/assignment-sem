#include <stdio.h>

int fib(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
 printf("the fibonaci series is : \n");
  for(int i=0;i<num;i++){
    printf("%d\t",fib(i));
  }
  
  return 0;
}

int fib(int n) {
  if (n == 0)
    return 0;
  else if(n==1)
  return 1;
  else {
    return fib(n-1)+fib(n-2);
  }
    // return n;
}