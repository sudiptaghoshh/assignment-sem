#include <stdio.h>

int sumDigit(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum of digit is = %d",sumDigit(num));
  return 0;
}

int sumDigit(int n) {
    int sum=0;
  if(n!=0){
    return sum=n%10+sumDigit(n/10);
  }
  else
  return 0;
  
}