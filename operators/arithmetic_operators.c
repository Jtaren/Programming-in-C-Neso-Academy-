// addition: +, subtraction: -, multiplication: *, division: /, modulus: %
// All are binary operators: means two operands are required to perform operation

#include <stdio.h>
/**int main(){
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("a / b = %d\n", a/b);
    printf("a %% b = %d", a%b);
    return 0;
}**/

int main(){
    int a = 2, b = 3, c = 4, d = 5;
    printf("a * b / c = %d\n", a*b/c);
    printf("a + b - c = %d\n", a+b-c);
    printf("a + b * d - c %% a = %d", a+b*d-c%a);
    return 0;
}

