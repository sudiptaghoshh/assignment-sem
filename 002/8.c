#include<stdio.h>
int main(){
    int n,a;
    printf("enter number of row ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        a=i-1;
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=1;l<i;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}