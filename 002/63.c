#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for( int i=1;i<n;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("the maximum value is %d",arr[0]);
    return 0;
}