#include<stdio.h>
int main()
{
    int a[5], i;
    int* q = a;
    for(i = 0; i< 5; i++)
    {
        scanf("%d", q+i);// q+i or &a[i] or a+i or i+a;
    }
    for(i = 0; i< 5; i++)
    {
        printf("%d ", *(q +i)); //*(q +i) or a[i] or *(a+i) or *(i+a)
    }
    return 0;
}
