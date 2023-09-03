#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=&arr[0];
    for(int i=0;i<n;i++){
        sum=sum+i;
        }
        printf("sum is %d",sum);
        return 0;
}
