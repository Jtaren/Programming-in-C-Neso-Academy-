// Program to find the largest and smallest element in an array
/**int a[] = {23, 45, 6, 98};
int min, max;
min = max = a[0];
for i = 1 to 3;
if a[i] < min then
    min = a[i]
if arr[i] > max then
max = a[i]**/

#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for (i=1; i<len; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("minimum value in the array is: %d and Maximum value is: %d", min, max);
    return 0;
}
