#include <stdio.h>

int avg(int x, int y){
    return (x+y) / 2;
}

void avg_greet(int (*fptr)(int, int), int a, int b){
    printf("Hello, the avg of %d and %d is %d\n", a, b, fptr(a,b));
}

void avg_gm(int (*fptr)(int, int), int a, int b){
    printf("Good Morning, the avg of %d and %d is %d\n", a, b, fptr(a, b));
}

int main(){
    /*
        --------------------- FUNCTION POINTERS ---------------------
        - We can have pointers pointing to functions as well.
        - Function pointers point to code and not data.
        - Functions pointers are useful to implement callback functions.
        - Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

        --------------------- CALLBACK FUNCTIONS ---------------------
        - Function pointers are used to pass function to a function.
        - This passed function can then be called again (hence the name callback function).
        - This provides programmer to write less code to do more stuff.
    */

    // --------------------- CODE EXAMPLE ---------------------
    int x = 456, y = 757;
    int (*function_pointer)(int, int) = avg;  // not compulsory to add '&' operator

    // ----------- passing function to an function -----------
    avg_greet(function_pointer, x, y);

    avg_gm(function_pointer, x, y);

    return 0;
}