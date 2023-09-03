#include <stdio.h>

int main() {

    char ch ='*';
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    
    for(int i=1;i<n+1;i++){
        for(int j=0;j<i;j++){
        printf("%c",ch);
        }
        printf("\n");
    }


    return 0;
}