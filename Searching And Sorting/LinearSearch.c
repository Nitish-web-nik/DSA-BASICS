#include <stdio.h>
int main()
{
    int arr[6],data,i;
    printf("Enter 6 Elements:- \n");
    for(i=0; i<6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the data to search in the array ");
    scanf("%d", &data);
    for(i= 0; i<6;i++)
    {
        if(arr[i]== data)
        {
            printf("Element found at index %d ",i);
            break;
        }
    }
    if(i==6)
    {
        printf("Element not found in the array");
    }
    return 0;
}
