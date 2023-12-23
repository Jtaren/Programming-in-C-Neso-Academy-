// increment operator is used to increment the value of a variable by one.
// Similarly, decrement operator is used to decrement the value of a variable by one.
// increment: int a = 5; a++; a = 6    a++; is same as a = a + 1;
// decrement: int a =5; a--; a = 4     a--; is same as a = a - 1;
// Both are unary operators, because they are applied on single operand.
// pre-increment operator: ++a; pre-decrement operator: --a;
// post-increment operator: a++; post-decrement operator: a--;
// you cannot use rvalue before or after increment/decrement operator. E.g. (a + b)++; ++(a + b);
// lvalue(left value): simply means an object that has an identifiable location in memory(i.e. having an address).
/**-in any assignment statement "lvalue" must have the capacity to hold the data
   -lvalue must be a variable because they have the capacity to store the data
   -lvalue cannot be a function, expression (like a+b) or a constant (like 3,4 etc).**/
// rvalue*(right value): simply means an object that has no identifiable location in memory.
/**-anything which is capable of returning a constant expression or value.
   Expressions like a+b will return some constant value.**/
// pre - means first increment/decrement then assign it to another variable.
// post - means first assign it to another variable then increment/decrement.



