#include <stdio.h>

int main(){
    
    // --------------- POINTER ARITHMETIC ---------------
    // * There are four arithmetic operators that can be used on pointers:
    //     1. ++
    //     2. --
    //     3. +
    //     4. -

    
    // --------------- ARRAYS AND POINTERS ---------------
    // * In C array, by intself, without any index subscription, can be assgined to an interger pointer.
    //   for ex. arr[i] == *(arr + i)
    // * When we create a pointer of an array, it points to the first index of that array, and to get the next element
    //   we just need to increase the pointer by the size of the array type.
    // * Pointer arithmetic can be used to write powerful C programs.


    // --------------- HEXADECIMAL NUMBERS AMD TABLE ---------------
    /*
        #################### NUMBERS ####################
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E and F
        

        #################### TABLE ####################
        Decimal Numbers | 4-bit Binary Number |	Hexadecimal Number
            0	        |       0000	      |        0
            1	        |       0001	      |        1
            2	        |       0010	      |        2
            3	        |       0011	      |        3
            4	        |       0100	      |        4
            5	        |       0101	      |        5
            6	        |       0110	      |        6
            7	        |       0111	      |        7
            8	        |       1000	      |        8
            9	        |       1001	      |        9
            10	        |       1010	      |        A
            11	        |       1011	      |        B
            12	        |       1100	      |        C
            13	        |       1101	      |        D
            14	        |       1110	      |        E
            15	        |       1111	      |        F
        
        
        To see more about it -> https://en.wikipedia.org/wiki/Hexadecimal

    */


    // POINTER ARITHMETIC
    int a = 5;
    int* pointer_a = &a;

    printf("%p\n", pointer_a);  // address of a
    printf("%p\n", pointer_a++);  // increased by 4 bytes (on my architecture int take 4 bytes)
    printf("%p\n", pointer_a--);  // decreased by 4 bytes (on my architecture int take 4 bytes)
    // or
    printf("%p\n", pointer_a+4);
    printf("%p\n", pointer_a-4);

    printf("%ld\n", sizeof(int));

    // ARRAYS AND PONITERS
    int arr[] = {1, 2, 3, 4};
    printf("This is the address of array in index 0: %p\n", arr);  // at index 0
    printf("This is the address of array in index 1: %p\n", arr + 1);  // at index 1 (adding 1 to array means add
                                                                       //               size of int base on architecture)
    printf("This is the address of array in index 3: %p\n", arr+3);  // at index 3
    // or
    printf("This is the address of array in index 0 using & operator: %p\n", &arr[0]);
    printf("This is the address of array in index 1 using & operator: %p\n", &arr[0] + 1);

    // USING DEREFRENCE OPERATOR
    printf("This is the value of array in index 0: %d\n", *(arr));
    printf("This is the value of array in index 1: %d\n", *(arr + 1));
    printf("This is the value of array in index 0 using & operator: %d\n", *(&arr[0]));
    printf("This is the value of array in index 1 using & operator: %d\n", *(&arr[0] + 1));

    // NOTE: arr is a constant we can not directly do arr++ -> this will throw an error;
    // arr++;


    return 0;
}