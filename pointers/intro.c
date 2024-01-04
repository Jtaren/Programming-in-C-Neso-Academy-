// pointers in C
// Pointer is a variable capable of storing the initial address of the object it wants to point to.
// Pointer is a special variable that is capable of storing some address.
// It points to a memory location where the first byte is stored.

// Declaring and initializing a Pointer
// General syntax: data_type *pointer_name ...here data Type refers to the type of the value that the pointer will point to.
// E.g. int *ptr; points to integer value, char *ptr; points to character value, float *ptr; points to float value.

// One way to initialize a pointer is to assign address of some variable.
// E.g. int x = 5; int *ptr; ptr = &x; >> this means assign address of variable x to the pointer variable
// int x = 5; int *ptr; ptr = &x; is equivalent to int x - 5, *ptr = &x;

// Value of operator/indirection operator/dereference operator is an operator that is used to access the value stored at the location pointed by the pointer.
// int x = 5; int *ptr; ptr = &x; printf("%d", *ptr); ...*(value of operator) says go to the address of object and take what is stored in the object.
// we can also change the value of the object pointed by the pointer.
// E.g. int x = 10; int *ptr = &x; *ptr = 4;
// Never apply the indirection operator to the uninitislized pointer. E.g. int *ptr; printf("%d", *ptr);...its illegal
// Assigning value to an uninitialized pointer is dangerous. E.g. int *ptr; *ptr = 1; Output: segmentation fault
// Usually segmentation fault is caused by program trying to read or write an illegal memory location.
