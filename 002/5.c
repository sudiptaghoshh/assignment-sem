#include<stdio.h>
int main(){
    int n,m,o;
    printf("enter number: ");
    scanf("%d",&n);
    m=n;
    o=n;
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
    for(int i=n;i<=1;i--){
       for(int j=o;j<=i;j--){
        printf(" ");
       }
       for(int k=n;k<=i*2-1;k--){
        printf("*");
       }
       printf("\n");
       o++;
    }
    return 0;
}