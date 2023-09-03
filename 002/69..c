#include<stdio.h>
int main(){
    int n;
    float sum;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    
    return 0;
}