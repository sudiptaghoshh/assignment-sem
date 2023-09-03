#include<stdio.h>
int main(){
    int n,temp;
    printf("enter size of array ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    int *ptr=&arr[0];
    int *ptr2=&arr2[0];
    printf("enter elements of 1st array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&*(ptr+i));
    }
    printf("enter elements of 1st array \n");
    for(int i=0;i<n;i++){
        scanf("%d",&*(ptr2+i));
    }
    for(int i=0;i<n;i++){
       temp=*(ptr2+i);
       *(ptr2+i)=*(ptr+i);
       *(ptr+i)=temp;
        }
        printf("1st array is \n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
        }
        printf("2nd array is \n");
        for(int i=0;i<n;i++){
        printf("%d\t",*(ptr2+i));}
    return 0;
}