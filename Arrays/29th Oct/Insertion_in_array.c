#include <stdio.h>

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
    printf("\nEnter the element to insert into array:- ");
    scanf("%d", &num);
    printf("\nEnter the position to insert the element:- ");
    scanf("%d", & pos);
    if(pos <= 0 || pos > size + 1)
    {
        printf("Invalid Position");
    }
    else
    {
        for(i = size - 1; i >= pos - 1; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = num;
        size++;
    }
    printf("\nAfter insertion the new array is:- ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
