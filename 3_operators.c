#include <stdio.h>

int main(){
    // * Operator
    // An operator is a symbol used to perform operation between two operands in given programming language

    // * Types of operator in c
    // - Arithmetic operator -> +, -, /, * and %
    // - Relational operator -> >, <, >=, <= etc.
    // - Logical operator -> &&, ! and ||
    // - Bitwise operator -> ^, &, >>, << etc.
    // - Assignment operator -> -=, +=, /=, *= etc.

    /* -------------- Operator Code Example -------------- */
    int a, b;
    a = 23;  // 1100000
    b = 2; //   0000010
    // 101

    // * Arithmetic Operator
    
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    printf("a / b = %d\n",a/b); // print integer value
    // or
    printf("a / b = %f\n",(float)a/(float)b); // print floating point value

    // * Relational Operator
    // ----- return 0 for false and 1 for true

    printf("a is equal to b: %d\n", a==b);
    printf("a is less than b: %d\n", a<b);
    printf("a is greater than b: %d\n", a>b);
    printf("a is not equal b: %d\n", a!=b);

    // * Logical Operator
    // ----- return 0 for false and 1 for true

    int c = 0;
    int d = 0;

    printf("a and b: %d\n", a&&b);
    printf("a and c: %d\n", a&&c);
    printf("a || c: %d\n", a||c);
    printf("c || d: %d\n", c||d);
    printf("c ! d: %d\n", !(c&&d));
    printf("a ! b: %d\n", !(a&&b));

    // * Bitwise operator
    printf("a right shift b: %d\n", a>>b);
    printf("a left shift b: %d\n", a<<b);
    printf("a xor b: %d\n", a^b);
    printf("a & b: %d\n", a&b);
    printf("~b: %d\n", ~b);
    printf("~a: %d\n", ~a);

    // * Assignment Operator
    
    int x = 10;
    x += 5;
    x -= 2;
    x /= 2;
    x *= 4;

    printf("%ld\n", sizeof(int));


    // check operators precedence --> operator_precedence.png



    return 0;
}