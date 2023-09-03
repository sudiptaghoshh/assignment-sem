#include<stdio.h>
int main(){
    int n,m;
    printf("enter number of line : ");
    scanf("%d",&n);
    m=n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++){
            printf("*");
        }
        printf("\n");
        m--;
    }
    return 0;
}