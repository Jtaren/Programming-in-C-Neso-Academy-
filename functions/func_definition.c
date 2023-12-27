// What is function definition ?
// Function definition consists of block of code which is capable of performing some specific task.
// For E.g.

#include <stdio.h>
int add(int, int);

int main()
{
    int m = 20, n = 30, sum;
    sum = add(m, n);
    printf("sum is: %d", sum);
}
int add(int a, int b)
{
    return (a + b);
}
