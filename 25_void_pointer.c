#include <stdio.h>

int main(){
    /*
        -------------- VOID POINTER --------------
        - A void pointer is a pointer that has no data type associated with it.
        - A void pointer can be easily typecast to any pointer type.
        - It is not possible to dereference void pointers.
        - Pointers arithmetic is not allowed in C standards with void pointers.
        - Hence it is not recommended to use pointer arithmetic with void pointes.
        - In simple language it is a general purpose pointer variable.
        - syntax of void pointer
        - int x = 10;
        - char y = 'x';
        - void *p = &x;  // void pointer stores address of int 'x'
        - p = &y;  // void pointer now holds address of char 'y'

        -------------- USES OF VOID POINTERS --------------
        - In dynamic memory allocation, malloc() and calloc() return (void *) type pointer.
        - This allow these dynamoc memory funtions to be used to allocated memory of any data type.
          This is because these pointers can be typecasted to any pointer type.

    */

    // -------------- CODE EXAMPLE --------------
    int x = 5;
    float y = 7.45;
    char z = 'h';

    // void pointer
    void *pointer;

    pointer = &x; // storing address of x

    // printf("The vlaue of x using dereference operator %d", *pointer);  // this will return an error because pointer is a void pointer
    printf("The vlaue of x using dereference operator %d\n", *((int *)pointer));  // to dereference a null pointer, first typecast it.
    
    pointer = &y;
    printf("The vlaue of y using dereference operator %f\n", *((float *)pointer)); 
    
    pointer = &z;
    printf("The vlaue of z using dereference operator %c\n", *((char *)pointer)); 

    return 0;
}