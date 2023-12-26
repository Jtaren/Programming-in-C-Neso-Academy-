// switch is a great replacement to long else if constructs.
// Example:
#include <stdio.h>

/**int main(){
    int x = 2;

    if (x == 1)
        printf("x is 1");
    else if(x == 2)
        printf("x is 2");
    else if(x == 3)
        printf("x is 3");
    else
        printf("x is a number other than 1, 2 and 3");
}**/

/**int main(){
    int x = 2;

    switch(x)
    {
        case 1: printf("x is 1");
                break;
        case 2: printf("x is 2");
                break;
        case 3: printf("x is 3");
                break;
        default: printf("x is a number other than 1, 2, and 3");
                break;
    }
}**/

// Facts related to switch
// You not called to add duplicate cases.
// Only those expressions are allowed in switch which results in an integral constant value
// Float value is not allowed as a constant value in case label. Only integer constants/constant expression are allowed in case label.
// Variable expressions are not allowed in case labels. Although macros are allowed.
// Default can be placed anywhere inside switch. it will still get evaluated if no match is found.
