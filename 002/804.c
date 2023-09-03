#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n];
    int *ptr=&arr[0];
    printf("enter elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&*(ptr+i));
    }
    
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
        }
        return 0;
}