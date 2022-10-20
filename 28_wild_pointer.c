#include <stdio.h>

int main(){
    /*
        ----------------- WHAT IS WILD POINTER -----------------
        - Uninitailized pointers are known as wild pointers.
        - These pointers point to some arbitrary location in memory and may cause a program to crash or behave badly.
        - Dereferecing wild pointers can cause nasty bugs.
        - It is suggested to always initialize unused pointers to NULL.
        - In the following program, ptr is a wild pointer until it is given the address of a.
            int a = 3;
            int* ptr; // wild pointer
            ptr = &a; // ptr no longer wild pointer 
    */

    // ----------------- CODE EXAMPLE -----------------
    int x = 10;
    int* ptr; // wild pointer
    
    // *ptr = 56; // this line will throw an error
    
    ptr = &x; // ptr is no longer wild pointer

    printf("This is the value of x using pointer %d\n", *ptr);


    return 0;
}