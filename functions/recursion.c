// Recursion is a process in which a function calls itself directly or indirectly
/**for example
    int fun()
{
    fun();
}**/
#include <stdio.h>
/**int fun(int n)
{
    if(n==1)
        return 1;
    else
        return 1 + fun(n-1);
}
int main()
{
    int n = 3;
    printf("%d", fun(n));
    return 0;
}**/

// What is the output of the following C program:
/**int fun(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return 7 + fun(n-2);
}
int main()
{
    printf("%d", fun(4));
}**/

// Calculate the factorial of a number.
int fact(int n)
{
    if(n == 1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of a number %d is %d", n, fact(n));
}

