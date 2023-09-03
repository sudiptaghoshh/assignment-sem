#include<stdio.h>
int main(){
    static int arr1[100];
    static int arr2[100];
    int sum[100],n,m,j;

    printf("enter size of 1st array");
    scanf("%d",&n);
    printf("enter 1st array ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter size of 2nd array");
    scanf("%d",&m);
    printf("enter 2nd array ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    if(n>m){
        j=n;
    }
    else{
        j=m;
    }
    for(int i=0;i<j;i++){
        sum[i]=arr1[i]+arr2[i];
    }
    printf("the result array is:");
    for(int i=0;i<j;i++){
        printf("%d\n",sum[i]);
    }
    return 0;
}