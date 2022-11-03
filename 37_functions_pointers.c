#include <stdio.h>

int add(int x, int y){
    return x + y;
}

int main(){
    /*
        --------------------- POINTERS: RECAP ---------------------
        - A pointer is a variable which stores address of another variables
        - & symbol is used to get the address of the variable.
        - * symbol is used to get the value of the variable that the pointer is pointing to.
        - In C, we can create generic pointer too.
        - Regular C variable stores the value whereas pointer stores the address of the variables.

        --------------------- DYNAMIC MEMORY ALLOCATION: RECAP ---------------------
        - An statically allocated variable or array has a fixed size in memory.
        - Dynamic Memory Allocation is a way in which the size of a data structure
          can be changed during the runtime.
        - Memory assigned to a program ina typical architecture can be broken down into four segments:
            1. Code
            2. Static/Global variables
            3. Stack
            4. Heap

        --------------------- FUNCTION POINTERS ---------------------
        - We can have pointers pointing to a function as well.
        - Function pointers is usefull to implement callback function.
        - Compiler takes one or more source files and convert them to machine code.
    */

    // --------------------- CODE EXAMPLE ---------------------
    
    // ------------ syntax to store address of a function
    int (*function_pointer) (int, int) = NULL;
    function_pointer = &add;

    // ------------ calling function pointer
    int ans = (*function_pointer)(47,53);
    printf("The value of ans is %d\n", ans);

    return 0;
}