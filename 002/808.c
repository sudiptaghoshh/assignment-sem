#include<stdio.h>
int main(){

    char target[100],final[100];
    printf("enter string :\n");
    scanf("%s",target);
    int i=0;
    while(*(target+i)){
        *(final+i) =*(target+i);
        i++;
    }
    
    puts(final);
return 0;
}