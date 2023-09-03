#include <stdio.h>

int Odd(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  Odd(num);
  return 0;
}
int Odd(int n){
    if(n%2==0){
        printf("%d is even ",n);
    }
    else
    printf("%d is odd",n);
}