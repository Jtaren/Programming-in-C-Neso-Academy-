// Never try to return the address of an automatic variable
// E.g.
#include <stdio.h>
/**int *fun()
{
    int i=10;
    return &i;
}
int main()
{
    int *p = fun();
    printf("%d", *p);
}**/

// to find out the mid of the array here is the program
int *findMid(int a[], int n)
{
    return &a[n/2];
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a, n);
    printf("%d", *mid);
    return 0;
}

