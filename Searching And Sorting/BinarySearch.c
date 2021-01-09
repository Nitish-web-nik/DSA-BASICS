#include<stdio.h>
int main()
{
    int arr[8] = {12,23,45,56,73,87,89,92};
    int i,data, left = 0, right = 7;
    printf("Enter the data to search in the array ");
    scanf("%d", &data);
    while(left<=right)
    {
        int mid = left + ((right - left)/2);
        if(arr[mid] == data)
        {
            printf("Element found at index %d",mid);
            break;
        }
        else if(arr[mid] > data)
        {
            right = mid-1;
        }
        else
        {
            left = mid +1;
        }
    }
    if(left > right )
    {
        printf("Element not found in the array");
    }
    return 0;
}
