// An array is a data structure containing a number of data values (all of which are of the same type)
// Data structure is a format for organizing and storing data
// Also, each data structure is designed to organize data to suit a specific purpose.
// E.g. Array is a data structure which you can visualize as follows:
// Imagine an array as a large chunk of memory divided into smaller block of memory and each block is capable of storing a data value of some type.

// Declaration and definition of 1D array
// Syntax: data_type name of the array [no. of elements];
// E.g. an array of integers can be declared as follows:
// int arr[5];
// Compiler will allocate a contiguous block of memory of size = 5 * sizeof(int)
// Specifying the length of an array using macro is considered to be an excellent practice.

// Initialization 1D array
// Method 1:
// arr[5] = {1, 2, 5, 67, 32};
// Method 2:
// arr[] = {1, 2, 5, 67, 32};
// Method 3:
/**int arr[5];
   arr[0] = 1;
   arr[1] = 2;
   arr[2] = 5;
   arr[3] = 67;
   arr[4] = 32;**/
// Method 4:
/**int arr[5];
   for(i=0; i<5; i++){
    scanf("%d", &arr[i]);
   }**/

// Q: What if number of elements are lesser than the length specified?
// int arr[10] = {45, 6, 2, 78, 5, 6};
// Ans: The remaining locations of the array are filled by value 0.
// int arr[10] = {45, 6, 2, 78, 5, 6, 0, 0, 0, 0};

/**int arr[10];
   for(i=0; i<10; i++)
   {                                A more preferred code: int arr[10] = {0};
    arr[i] = 0;
   }
