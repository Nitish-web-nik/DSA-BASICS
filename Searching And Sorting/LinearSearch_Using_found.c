#include<stdio.h>
int main()
{
    int arr[6],data,i;
    int found = 0;
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
            found =1;
            break;
        }
    }
    if(found ==0)
    {
        printf("Element not found in the array");
    }
    return 0;
}
