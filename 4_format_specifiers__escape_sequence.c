#include <stdio.h>
#define y 5

int main(){
    // format specifiers for int and float
    int a = 5;
    float b = 9.7;
    printf("This is a int format specifier %d and this is a float format specifier %f\n", a,b);

    // more in float specifiers
    printf("%0.2f\n", b); // gives two decimal places enter the number for decimal places
    printf("%10.2f\n", b); // take 10 characters from start
    printf("%-10.2f hello\n", b); // take 10 characters from end
    printf("%4.2f\n", b); // take 4 characters from start which is equal to actual output, that's why you can't see any difference
    printf("%-4.2f\n", b); // take 4 characters from end which is equal to actual output, that's why you can't see any difference
    
    // most important format specifiers
    // - %c -> used to print the value of char;
    // - %d -> used to print the value of int;
    // - %l -> used to print the value of long;
    // - %ld -> used to print the value of long int;
    // - %f -> used to print the value of float;
    // - %lf -> used to print the value of double;
    // - %Lf -> used to print the value of long double;
    // - %s -> used to print the value of char string;

    // constant
    // we can't change or reassign constant variables
    // there are two ways to define a constant
    // 1 - usind cont keyword
    // 2 - using preprocessor command

    // 1 - using const keyword
    const int x = 9;
    printf("%d\n", x);

    // x = 97;  // error: assignment of read-only variable ‘x’

    // 2 - using preprocessor command
    // see on the top for this
    printf("%d\n", y);
    
    // y = 9;  // error: lvalue required as left operand of assignment

    
    // Escape sequence characters
    printf("\n");  // new line
    printf("\t hello");  // tab
    printf("\n");  // ignore this
    printf("hello\b");  // space
    printf("\n"); // ignore this

    // To see more escape sequence characters -> escape_sequence.png


    return 0;
}