#include <stdio.h>
#include<math.h>

int Prime(int n);
int Armstrong(int n);
int Perfect(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  Prime(num);
  Armstrong(num);
  Perfect(num);
  return 0;
}

int Prime(int n){
  int count =0;
  for(int i=2;i<n/2;i++){
    if(n%i==0){
      count++;}
  }
  if(count){
    printf("Not Prime\n");
  }
  else
  printf("Prime\n");
}

int Armstrong(int n){
  int rem,count=0,x=n,sum=0;
  while(x){
   x=x/10;
    count++;
  }
  x=n;
  while(x){
    rem=x%10;
    sum=sum+pow(rem,count);
    x=x/10;
  }
  
  if(n==sum){
    printf("Armstrong Number\n");
  }
  else{
    printf("Not armstrong\n");
  }
}

int Perfect(int n){
  int sum=0;
  for(int i=1;i<=n/2;i++){
    sum=sum+i;
  }
  if(sum==n){
    printf("Perfect number \n");
  }
  else{
    printf("Not Perfect number\n");
  }
}