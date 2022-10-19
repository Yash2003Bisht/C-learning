#include <stdio.h>
#include <stdlib.h>

int* returnPointer(){
    int a = 94;
    return &a;
}

int main(){
    /*
        ---------------------- WHAT IS A DANGLING POINTER ----------------------
        - A pointer pointing to a freed memory location or the location whose content
          deleted is called a dangling pointer.
        - Dangling pointer arise during object destruction when an object that has an
          incomming reference is deleted or deallocated, without modifying the value of
          the pointer, so that pointer still points to the memory location of the deallocated memory.

        ---------------------- CAUSES OF DANGLING POINTER ----------------------
        - Deallocation of memory
        - Returning local variables in function calls
        - Variable out of scope

        ---------------------- DEALLOCATION OF MEMORY ----------------------
        - When memory is deallocated, the pointer keeps pointing to the freed space.
        - for ex.
            int* ptr = (int *) malloc(sizeof(int));
            free(ptr); // ptr now becomes a dangling pointer
            ptr = NULL; // ptr no longer dangling

        ---------------------- RETURNING LOCAL VARIABLES IN FUNCTION CALLS ----------------------
        int *myFunc(){
            // a is local variable and goes out of scope on function return over.
            int a = 56;
            return &a;
        }

        int main(){
            int *ptr = myFunc(); // ptr points to invalid location now its a dangling pointer
            printf("%d", *ptr);
            return 0;
        }

        ---------------------- VARIABLE GOING OUT OF SCOPE ----------------------
        int main(){
            int *ptr;
            
            { // scope starts
                
                int i=0;
                ptr = &i;

            } // scope ends

            // ptr is now a dangling pointer
            printf("%d", *ptr);
            return 0;
        }

        ---------------------- IS DANGLING POINTER A GOOD THING TO HAVE? ----------------------
        - Dangling pointers can introduce nasty bugs in our C programs.
        - Dangling pointer bugs frequently become security holes at times.
        - We can avoid issues caused by dangling pointers by initializing pointers to NULL. After de-allocating memory
          pointer will be no longer dangling.
        - Assigning NULL value means pointer is NULL pointer now.
    */

    // ---------------------- CODE EXAMPLE ----------------------
    // CASE 1: de-allocation of memory

    int* ptr1 = (int *) malloc(3*sizeof(int));
    ptr1[0] = 10;
    ptr1[1] = 20;
    ptr1[2] = 30;

    printf("The value of ptr1 at index 0 is %d\n", ptr1[0]);
    free(ptr1);  // ptr1 is now a dangling pointer
    printf("The value of ptr1 at index 0 after free the memory is %d\n", ptr1[0]);

    // CASE 2: returning local variables in function calls

    int* ptr2 = returnPointer();  // ptr2 is a dangling pointer
    printf("The value inside ptr2 memory is %d\n", *ptr2);

    // CASE 3: variable out of scope
    /*
        TODO: Write a better example
    */
    int* ptr3;

    { // scope starts
                
        int x = 50;
        ptr3 = &x;

    } // scope ends

    printf("The value inside ptr3 memory is %d\n", *ptr3);


    return 0;
}