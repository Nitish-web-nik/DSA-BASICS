#include<stdio.h>
int main()
{
    int a[] = { 1 , 2, 3};
    int b = 10;
    int* p;
    p = &b;
    int* q;
    q = a;
    printf("%d %d", p , &b); //= address of b
    printf("\n%d %d", *p, b); //= 10 10
    printf("\n%d %d ",a, q); //base address of array
    printf("\n%d",a + 1); // address of 2nd element(or element at index 1)
    printf("\n%d", &a + 1); //address of end of the array
    printf("\n%d", a + a[1]); //allowed(output sum of addresses)
    printf("\n%d", &a[0] + 1); //address of 2nd element
    printf("\n%d", a[0] + 1); // 2 will be printed
    printf("\n%d", q++); // allowed (base address)
    //printf("\n%d", a++); //not allowed
    printf("\n%d %d %d ", *a , *(a + 1) , *a + 1); //1st element , 2nd element , first element + 1
    printf("\n%d", *q); // value of a
    printf("\n%d", *(q+1)); // 2 will be printed
    printf("\n%d %d %d %d", a[2], *(a+2), 2[a], *(2+a)); //3 will be printed
    //in all cases as a[i] = *(a+i) = i[a] = *(i+a)
    // we can say a = &a but q != &q

    return 0;
}
