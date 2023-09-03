#include<stdio.h>
int main(){
    int n;
    float sum,avg;
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
    avg=sum/n;
    printf("the average is %f",avg);
    return 0;
}