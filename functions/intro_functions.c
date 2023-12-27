// Definition: Function is basically a set of statement that takes inputs, perform some computation and produces output.
// Syntax: Return_type function_name(set_of_inputs);
// Return_type is the type of output returned by the function
// function_name is the name of the function
// Inputs provided to the function

// Why functions
// Reusability: Once the function is defined, it can be reused over and over again.
// Abstraction: If you are just using the function in your program then you don't have toworry about how it works inside. E.g. scanf function.

#include <stdio.h>

int areaOfRect(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}
int main()
{
    int i = 10, b = 5;
    int area = areaOfRect(i, b);
    printf("%d\n", area);

    i = 50, b = 20;
    area = areaOfRect(i, b);
    printf("%d\n", area);

}
