#include<stdio.h>
int main()
{
    int arr[50], size, i, num, pos;
    printf("Enter the size of the array:- ");
    scanf("%d", &size);
    if(size > 50)
    {
        printf("Overflow Condition");
    }
    else{
            printf("Enter the elements of the array:-\n");
            for(i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }
                printf("The elements in the array are:- ");
            for(i = 0; i< size; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    printf("\nEnter the number to insert at the end of the array:- ");
    scanf("%d", &num);
    arr[size] = num;
    size++;

    printf("\nAfter insertion the new array is:- ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
