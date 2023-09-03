#include <stdio.h>
int main()
{

    int size, i, toSearch, found =0;

    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &toSearch);
    
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
         printf("%d is not found in the array", toSearch);
    }
    else
    {
        printf("%d is found at position %d", toSearch, i + 1);
    }

    return 0;
}