#include<stdio.h>
struct distance{
    int feet;
    int inch;
};

int main(){
    struct distance d1,d2,final;
    printf("enter first distance in feet and inches \n");
    scanf("%d%d",&d1.feet,&d1.inch);
    printf("enter second distance in feet and inches \n");
    scanf("%d%d",&d2.feet,&d2.inch);
    final.feet=d1.feet+d2.feet;
    final.inch=d1.inch+d2.inch;
    if(final.inch>=12){
        final.feet++;
        final.inch-=12;
    }
    printf("The total distance is %d feet %d inch",final.feet,final.inch);
    return 0;
 }