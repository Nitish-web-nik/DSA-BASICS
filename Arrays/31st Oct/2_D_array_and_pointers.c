#include<stdio.h>
int main()
{
    int a[3][3] = {6, 2, 5, 0, 1, 3, 4, 9, 8};
    int* p;
    p = a[0];// or p = &a[0][0] or &a[0]
    printf("   %d %d %d %d %d %d", p, a, &a[0][0], &a, *a, a[0]); // all prints the base address of the array
    printf("\n\n   %d %d %d %d %d %d ", a + 1, &a[1], *(a+1), a[1], &a[1][0], *a[1]);// all prints address of 2nd row first element and only *a[1] will print value
    printf("\n\n   %d %d %d %d ", *(a+1) + 2, *(*(a+1)+2), a[1][2], *(a[1]+2)); // third element address of 2nd row, 3, 3, 3
    // i.e a[i][j] = *(*(a+i) + j) = *(a[i] + j)
    printf("\n\n   %d %d %d", *(*a + 1), **a, *p); // 2 6 6
    printf("\n\n   %d %d ", a[1] +1 , &a[1] + 1);
    return 0;
}
