#include<stdio.h>
int sum(int *a,int *b);
int main(){
    int a,b;
    printf("enter two number : ");
    scanf("%d%d",&a,&b);
    printf("sum is %d",sum(&a,&b));
 return 0;
}

int sum(int* a, int* b){
    return *a+*b;
    
}