// Look and feel: ? :
// Conditional operator is the only ternary operator available in the list of operators in C language
// As in Expression1 ? Expression2 : Expression3. expression1 is the boolean expression. if we simply write 0
// instead of some boolean expression than that simply means FALSE and therefore Expression3 will get evaluated.
// E.g: int result;  result = 0 ? 2 : 1

#include <stdio.h>
/**int main(){
    char result;
    int marks;

    if (marks > 33)
    {
        result = 'p';
    }
    else
    {
        result = 'f';
    }

//  result = (marks > 33) ? 'p' : 'f';
// (marks > 33) is a boolean expression, therefore it will return either TRUE or FALSE
// (marks > 33) ? 'p' : 'f' is a conditional expression, which is after all an expression, therefore it is an r-value and result is l-value.
}**/
int main(){
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;

    printf("%d", num);
    return 0;
}

