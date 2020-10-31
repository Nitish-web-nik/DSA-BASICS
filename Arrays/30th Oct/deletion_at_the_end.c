
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

            printf("\nThe elements in the array are:- ");
            for(i = 0; i< size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    num = arr[size-1];
    arr[size-1] = 0;
    size--;
    printf("\nAfter deletion at the end the new array is:- ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nThe deleted element is %d", num);
    return 0;
}

