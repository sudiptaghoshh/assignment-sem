#include<stdio.h>
int main(){
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    int *ptr=&arr[0];
    int *ptr2=&arr2[0];
    printf("enter elements of array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&*(ptr+i));
    }
    for(int i=0;i<n;i++){
       *(ptr2+i)=*(ptr+i);
        }
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr2+i));
        }
    return 0;
}