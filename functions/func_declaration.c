// What is function declaration ?
// As we already know, when we declare a variable, we declare its properties to the compiler.
// For example: int var;
// Properties: Name of variable: var, Type of variable: int
// Similarly, function declaration (also called function prototypes) means declaring the properties of a function to the compiler.
// For example: int fun(int, char);
// Properties: Name of function: fun, Return Type of function: int, Number of parameters: 2, Type of parameter 1: int, Type of parameter 2: char
// IMPORTANT!: It is not necessary to put the name of the parameters in function prototype.
// For example: int fun(var1, var2); not neccesary to mention var1 and var2.

#include <stdio.h>
char fun(); // function prototype
int main()
{
    char c = fun();
    printf("character is: %c", c);
}
char fun()
{
    return 'a';
}
