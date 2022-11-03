#include <stdio.h>
#include <stdlib.h>

int main(){
    /* 
        ------------- FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION IN C -------------
        - In Dynamic memory allocation, the memory is allocated at runtime from the heap segment
        - We have four functions that help us achieve this task:
                - malloc
                - calloc
                - realloc
                - free

        ------------- MALLOC (MEMORY ALLOCATION) -------------
        - malloc() stands for memory allocation
        - It reserves a block of memory with the given amount of bytes.
        - The return value is a void pointer to the allocated space.
        - Therefore the void pointer needs to be casted to the appropriate type as per the requirements.
        - However, if the space is insufficient, allocation of memory fails and it returns NULL pointer.
        - All the values at allocated memory are initialized to garbage values.
        - Syntax:
                int* pointer;
                pointer = (pointer_type*) malloc(n * size_in_bytes);

        ------------- CALLOC (CONTIGUOUS ALLOCATION) -------------
        - calloc() stands for contiguous allocation
        - It reserves n blocks of memory with the given amount of bytes.
        - The return value is a void pointer to the allocated space.
        - Therefore the void pointer needs to be casted to the appropriate type as per the requirements.
        - However, if the space is insufficient, allocation of memory fails and it returns NULL pointer.
        - All the values at allocated memory are initialized to 0.
        - Syntax:
                int* pointer;
                pointer = (pointer_type*) calloc(n, size_in_bytes);

        ------------- REALLOC (REALLOCATION) -------------
        - realloc() stands for reallocation
        - If the dynamically allocated memory is insufficient we can change the size of
            previously allocated memory using realloc() function
        - Syntax:
                int* pointer;
                pointer = (pointer_type*) realloc(pointer, size_in_bytes);

        ------------- FREE (FREE THE ALLOCATED MEMORY) -------------
        - free() is used to free the allocated memory.
        - If the dynamically allocated memory is not required anymore, we can free it using free function.
        - This will free the memory being used by the program in the heap.
        - Syntax
                free(pointer);

    */  

    // ------------- CODE EXAMPLE -------------
    int* pointer, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);


    // ------------- use of malloc

    // allocate size dynamically
    pointer = (int *)  malloc(n * sizeof(int));

    for (int i=0; i < n; i++){
        printf("Enter the value for %d: ", i+1);
        scanf("%d", &pointer[i]); // similar to -> (pointer + i)
    }

    for (int i=0; i < n; i++){
        printf("%d ", pointer[i]);
    }
    printf("\n");


    // ------------- use of calloc

    // allocate size dynamically
    pointer = (int *)  calloc(n, sizeof(int));  // calloc initialized all values with 0.

    for (int i=0; i < n; i++){
        printf("Enter the value for %d: ", i+1);
        scanf("%d", &pointer[i]); // similar to -> (pointer + i)
    }

    // ---------- OR ----------
    // comment out the above input for loop and see calloc automatically initialized all value with 0.
    

    for (int i=0; i < n; i++){
        printf("%d ", pointer[i]);
    }
    printf("\n");


    // ------------- use of realloc
    int new_n;
    printf("Enter the new size of array: ");
    scanf("%d", &new_n);

    // reallocate size dynamically
    pointer = (int *)  realloc(pointer, new_n*sizeof(int));

    for (int i=n; i < new_n; i++){
        printf("Enter the value for %d: ", i+1);
        scanf("%d", &pointer[i]); // similar to -> (pointer + i)
    }

    for (int i=0; i < new_n; i++){
        printf("%d ", pointer[i]);
    }
    printf("\n");


    // ------------- use of free

    // free up space after use
    free(pointer);

    return 0;
}