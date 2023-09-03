#include<stdio.h>
void details(int roll[],char name[][100],char address[][100],int age[],int avgMarks[]);

int main(){
    int roll[2];
    char name[2][100];
    char address[2][100];
    int age[2];
    int avgMarks[2];

    for(int i=0;i<2;i++){
        printf("Enter details of student %d\n\n",i+1);
        printf("enter roll no  ");
        scanf("%d",&roll[i]);
        printf("enter name  ");
        scanf("%s",name[i]);
        printf("enter address  ");
        scanf("%s",address[i]);
        printf("enter age  ");
        scanf("%d",&age[i]);
        printf("enter avg marks  ");
        scanf("%d",&avgMarks[i]);
        }
    details(roll,name,address,age,avgMarks);
    return 0;
    
}

void details(int roll[],char name[][100],char address[][100],int age[],int avgMarks[]){
    printf("Roll no\t name\t address\t age\t avgMarks\n");
    for(int i=0;i<2;i++){
        printf("%d\t %s\t %s\t %d\t %d\n",roll[i],name[i],address[i],age[i],avgMarks[i]);
    }
}
