#include<stdio.h>
struct employee{
    char name[50];
    int age;
    int salary;
};
int main(){
    struct employee n;
    printf("enter employee name  ");
    scanf("%s",n.name);
    printf("enter employee age  ");
    scanf("%d",&n.age);
    printf("enter employee salary in lpa ");
    scanf("%d",&n.salary);

    printf("\t EMPLOYEE DETAILS \n");
    printf("name : %s\n",n.name);
    printf("age : %d\n",n.age);
    printf("salary : %d lpa\n",n.salary);

    return 0;

}