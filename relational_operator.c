// equal to: ==, not equal to: !=, less than or equal to: <=, greater than or equal to: >=, lass than: <, greater than: >
// Used for comparing two values
// All relational operators will return either True or False.
// 4 == 5 is equivalent to "is 4 == 5?"  answer: False
// 4 != 5 is equivalent to "is 4 != 5?"  answer: True

#include <stdio.h>

int main(){
    int a = 300, b = 2090;
    if (b <= a)
    {
        printf("Bingo! you are in");
    }
    else
    {
        printf("Oops! you are out");
    }
}
