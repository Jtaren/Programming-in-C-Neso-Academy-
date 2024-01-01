// Without macro
#include <stdio.h>

/**int main()
{
    int a[10], i;
    for(i=0; i<10; i++) {
        printf("Enter the input for index %d: ", i);
        scanf("%d", a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0; i<10; i++){
        printf("%d", a[i]);
    }
    return 0;
}**/

// With macro
#include <stdio.h>
#define N 10
/**int main()
{
    int a[N], i;
    for(i=0; i<N; i++) {
        printf("Enter the input for index %d: ", i);
        scanf("%d", a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0; i<N; i++){
        printf("%d", a[i]);
    }
    return 0;
}**/

