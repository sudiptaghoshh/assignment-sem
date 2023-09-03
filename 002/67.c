#include<stdio.h>
int main(){
    int n,count=1;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n],fr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        fr[i]=count;
        count=1;}
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            printf("no of %d element is %d\n",arr[i],fr[i]);
        }
    }
    return 0;
}