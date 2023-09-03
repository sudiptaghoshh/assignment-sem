#include<stdio.h>
int main(){
    char name[100],sur[100],final[100];
    int i=0;
    char *nam,*su;
    printf("Enter 1st string\n");
    scanf("%s",name);
    printf("enter 2nd string\n");
    scanf("%s",sur);
   nam=name;
   su=sur;
    while(*nam=='\0'|| *sur=='\0'){
        if(*nam!=*su){
            break;
        }
        *nam++;
        *su++;
    }

    if(*nam=='\0'&& *su=='\0'){
        printf("Both string same");
    }
    else{
        printf("two string are not same");
    }
    return 0;
}