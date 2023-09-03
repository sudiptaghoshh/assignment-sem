#include<stdio.h>
int main(){
    char name[100],sur[100],final[100];
    char *ptr1=name;
    char *ptr2=sur;
    printf("Enter 1st string\n");
    scanf("%s",name);
    printf("enter 2nd string\n");
    scanf("%s",sur);
    while(*ptr1){
       *ptr1++;
       
    }
    while(*ptr2!='\0'){
       *ptr1=*ptr2;
       ptr1++;
       ptr2++;
    }
    *ptr1='\0';
    puts(name);
    return 0;
}