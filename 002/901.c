#include <stdio.h>

struct company
{
    char name[20],address[50];
    int phone,noOfEmployee;
};

int main(){
   
    struct company C1;
    printf("enter the details of the company\n");
    printf("enter name of the company");
    scanf("%s",C1.name);
    printf("enter address of the company");
    scanf("%s",C1.address);
    printf("enter phone no. ");
    scanf("%d",&C1.phone);
    printf("enter no of employee of the company");
    scanf("%d",&C1.noOfEmployee);
    printf("Details of the company\n");
    printf("company name=%s \n company address=%s \n company phone=%d \n company noOfEmployee=%d ",C1.name,C1.address,C1.phone,C1.noOfEmployee);
}