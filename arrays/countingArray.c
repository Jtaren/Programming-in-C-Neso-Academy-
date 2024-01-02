// int a[[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// sizeof(a);
// There are total 10 integers. Assume that each integer requires 4.
// sizeof(a) = 4 x 10 = 40 bytes
// sizeof(name_of_arr)/sizeof(name_of_arr[0])
// size of 1 array element x number of elements = size of whole array
// number of elements = size of whole array / size of 1 array element
#include <stdio.h>

int main()
{
    int a[] = {3, 4, 6, 7, 8, 9, 10, 12, 13, 11, 56, 76, 80, 90, 66, 55, 44, 33, 33, 69};
    printf("%d", sizeof(a)/sizeof(a[0]));
}
