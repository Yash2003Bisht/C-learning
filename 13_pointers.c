#include <stdio.h>

int main(){
    /*
        ------------------ POINTERS ------------------
        * Variables which stores the address of another variable.
        * Can be of type int, char, array, function, or any other pointer.
        * Size depends on the architecture. Ex 2 bytes for 32 bit.
        * Pointer in C programming language can be be declared using * (asterisk symbol).
    
        ------------------ '&' AND '*' OPERATORS ------------------
        * '&' returns the address of a variable
        * '*' is the dereference operator (also called indirection operator) used to get the value at a given address.
        
        ------------------ NULL POINTERS ------------------
        * A pointer that is not assigned any value but NULL in known as the NULL pointer.
        * In computer programming, a null pointer is a pointer that does not point to any object or function.
        * We can use it to initialize a pointer variable when that pointer variable isn't assigned any valid memory address yet.
        * int *pointer = NULL;
    
        ------------------ USES OF POINTERS ------------------
        * Dynamic memory allocation
        * Arrays, Funcitons and Structures
        * Return multiple values from a function
        * Pointer reduces the code and improves the performance

    */


    // POINTERS
    int x = 8;
    int* pointer_x = &x;  // --> pointer_x is points to x

    printf("The value of x is: %d\n", x);
    printf("The value of x using pointer is: %d\n", *pointer_x);  // --> dereference or indirection of pointer
    printf("The address of x is: %p\n", &x);
    printf("The address of x using pointer is: %p\n", pointer_x);
    printf("The address of pointer is: %p\n", &pointer_x);


    // NULL POINTERS
    int* pointer1 = NULL;

    printf("The is the value of pointer1 %p\n", pointer1);



    return 0;
}