#include <stdio.h>

int main(){
int arr[5]={1,2,4,5,6};
int low,mid,high,search;
low=0;
high=4;

search=1;
while(low<=high)
{
    mid=(low+high)/2;
    if(arr[mid]==search)
    {
        printf("element is found at:%d",mid+1);
        break;
    }
   else if(arr[mid]<search)
    {
        low=mid+1;
    }
    
    else
    {
        high=mid-1;
    }
}
return 0;
}
