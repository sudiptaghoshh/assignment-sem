#include<stdio.h>
int main(){
    int n,temp;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}