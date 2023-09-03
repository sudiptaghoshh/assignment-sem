#include <stdio.h>
int rem,sum=0;
int Reverse(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Reverse of %d number is %d",num,Reverse(num));
  return 0;
}

int Reverse(int n) {
    
  if(n!=0){
    rem=n%10;
    sum=sum*10+rem;
    Reverse(n/10);
  }
  else
  return 0;

  return sum;
}