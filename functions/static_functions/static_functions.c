// In C, functions are global by default.
// This means if we want to access the function outside from the file where it is declared, we can access it easily.
// Now if we want to restrict this access, then we make our function static by simply putting a keyword "static" in front of the function.

//main.c
#include <stdio.h>
#include <stdlib.h>
int fun(int, int);
int main()
{
    int sum = fun(3, 4);
    printf("%d", sum);
    return 0;
}
