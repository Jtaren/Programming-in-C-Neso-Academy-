// Values to a variable can be assigned using assignment operator
// An assignment operator is a binary operator. It requires 2 values - L-value and R-value
// This operator copies R-value to L-value. var (L-value) = (assignment operator) 5 (R-value) ;

// Shorthand Assignment Operators
// += First addition then assignment. E.g: a += 1 is equivalent to a = a + 1
// -= First subtraction then assignment
// *= First multiplication then assignment
// /= First division then assignment
// %= First modulus then assignment
// <<= First bitwise left shift then assignment
// >>= First bitwise right shift then assignment
// &= First bitwise AND then assignment
// |= First bitwise OR then assignment
// ^= First bitwise XOR then assignment

#include <stdio.h>

int main(){
    char a = 7;
    a ^= 5;
    printf("%d", printf("%d", a+=3));
    return 0;
} // output: 51
