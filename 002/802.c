#include<stdio.h>
int refswap(int *a,int *b);
int main(){
    int a,b;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    printf("before swapping values a=%d , b=%d\n",a,b);
   refswap(&a,&b);
    printf("after swap call by Reference in Main function a=%d,b=%d\n",a,b);
 return 0;
}

int refswap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after call by Reference the value is a=%d, b=%d\n",*a,*b);
    

}