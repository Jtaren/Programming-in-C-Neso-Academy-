// Wanna know the sizeof programmatically ?
// Use "sizeof" operator
// Sizeof integer is 4 bytes in my machine. May be it is 2 bytes in your machine
// 2 bytes = 16 bits, 4 bytes = 32 bits the more the size, the more contents it can hold.
// Note: sizeof is a unary operator and not a function.

#include <stdio.h>
int main(){
	printf("%d", sizeof(int));
	return 0;
}

// Range: upper and lower limit of some set of data
// for example: {0, 1, 2, 3, 4} has a range: 0 to 4
// Decimal number system: Human understandable number system. Also called as base 10 number system with range 0 to 9.
// Binary number system: Machine understandable number system. Also called as base 2 number system. Range: 0 to 1
// Range of 4 bit data is 0 to 15. formula: 2^2 -1(unsigned range) for 2's complement range: -(2^n-1) to +(2^n-1 - 1)
