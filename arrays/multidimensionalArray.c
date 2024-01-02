// Multidimensional arrays can be defined as an array of arrays
// General form of declaring N-dimensional array is as follows:
// data_type name_of_array[size1][size2]...[sizeN];
// E.g. int a[3][4]; // Two Dimensional Array
// E.g. int a[3][4][6]; // Three Dimensional Array
// Size of multidimensional array can be calculated by multiplying the size of all the dimensions.
// E.g. size of a[10][20] = 10 x 20 = 200, 200 x 4 = 800 bytes
// E.g. size of a[4][10][20] = 4 x 10 x 20 = 800, 800 x 4 = 3200 bytes

// How to initialize two dimensional array ?
// mrthod 1:
// int a[2][3] = {1, 2, 3, 4, 5, 6};
// method 2:
// int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

// How to access 2D Array elements ?
// Using row index and column index
// E.g. We can access element stored in 1st row and 2nd column of below array // a[0][1]

// How to print 2D Array Elemnets ?
// 1D array elements can be printed using single for loop
 #include <stdio.h>

 /**int main()
 {
     int a[5] = {1, 2, 3, 4, 5};

     for(i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
 }**/

 // 2D array elements can be printed using two nested for loops
 /**int main()
 {
     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
     for(i=0; i<2; i++)
     {
         for(j=0; j<3; j++)
         {
             printf("%d", a[i][j]);
         }
     }
 }**/


 // Accessing the 3D Array Elements
 // I want to access the element in the 1st row and 3rd column of 1st 2D array
 // E.g. int[2][3][3]; arr[0][0][2] first 0 indicates the first 2D array, 2nd 0 indicates first row, 2 indicates the third column.

 // Initialing 3D array
 // method 1:
 // int a[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
 // method 2:
/** int a[2][2][3] = {
     {
         {1, 2, 3},
         {4, 5, 6}
     }
     {
         {7, 8, 9},
        {10, 11, 12}
     }
 }**/

 // Printing The elements of 3D Array
 // 3D array elements can be printed using three nested for loops
 /**int main(){
     int a[2][2][3] = { {{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}} };
     for(i=0; i<2; i++)
     {
         for(j=0; j<2; j++)
         {
             for(k=0; k<3; k++)
             {
                 printf("%d", a[i][j[k]);
             }
         }
     }
 }**/

