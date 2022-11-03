#include <stdio.h>

int main(){
    /*
        ------------------- NULL POINTER -------------------
        - Null pointer is a pointer which has a value reserved fot indicating that the pointer or reference
          does not refer to a valid object. In other words, A null pointer is a pointer that points to NULL (nothing).
        - A null pointer is guranteed to compare unequal to any pointer that points to a valid object.
        - Dereferencing a null pointer is undefined behavior in C, and a conforming implementation is
          allowed to assume that any pointer that is dereferenced is not null.
        - Null pointer is a specific pointer which is mentioned in C standard and it has specific purpose.
        - Null pointer gives a functionality to C programmer to check whether a pointer is legitimate or not.
        - A check must be run by the C programmer to know whether a pointer is null before dereferencing it.
        - for ex.
        int x = 10;
        int *p = NULL; // null pointer -> cannot be dereference.
        int *p = &x; // null pointer now holds address of int 'x' -> can be dereference.

        ------------------- USES OF NULL POINTERS -------------------
        - To initialize a pointer variable in cases where pointer variable has not been assigned any valid
          address yet.
        - To check for legitimate address location before accessing any pointer variable.
        - By doing so, we can perform error handling while using pointers with C.
        - Example of such error handling can be: dereference pointer variable only if it's not NULL.
        - To pass a null pointer to a function argument when we don't want to pass any valid memory address.

        ------------------- MORE ON NULL POINTERS -------------------
        - NULL macro is defined as ((void *)0) in header files of most of the C compiler implementations.
        - NULL pointer vs Uninitialized pointer - An uninitialized pointer contains as undefine value.
        - A null pointer stores a defined value, which is the one decided by the environment to not be a valid memory
          address for any object.
        - NULL pointer vs Void Pointer - Null pointer is a value where as void pointer is a type.
        
    */

    // ------------------- CODE EXAMPLE -------------------
    int x = 165;
    // int* ptr = &x;
    int* ptr = NULL;

    // printf("The value of null pointer is %d\n", *ptr);  // this will give you an error

    if (ptr != NULL){
        printf("The address store in pointer is %d\n", ptr);
        printf("The value store in address of pointer is %d\n", *ptr);
    } else{
        printf("Pointer is null pointer\n");
    }

    return 0;
}