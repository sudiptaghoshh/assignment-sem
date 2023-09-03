#include<stdio.h>
int main(){
    int x=7,y=5;
    x= y++ + x++,
    y=++y + ++x ;
    printf("x=%d y=%d",x,y);
    return 0;
}