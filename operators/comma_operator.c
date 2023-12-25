// Comma operator can be used as a "seperator".
// E.g. int a = 3, b = 4, c = 8; is same as int a = 3; int b = 4; int c = 8;
// Comma operator can be used as an "operator"
// Comma operator returns the rightmost operand in the expression and it simply evaluates the rest
// of the operands and finally reject them.
// E.g. int a = (3, 4, 8); printf("%d", a); output: 8
// E.g. int var = (printf("%s\n", "HELLO!"), 5; printf("%d", var); output: HELLO! 5 it will simply not reject the
// first variable. first evaluate and then reject. This value will be returned to var after evaluating the first operand.
// Comma operator is having least precedence among all the operators available in c Language.
// int a; a = 3, 4, 8; printf("%d", a); is the same as int a; (a = 3), 4, 8; printf("%d", a); printf("%d", a); output: 3

#include <stdio.h>
int main() {
    int var;
    int num;

    num = (var = 15, var+35);
    printf("%d", num);
    return 0;

    // output: 50
}
