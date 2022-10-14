#include <stdio.h>
#include "24_extern_example.c"

int global_sum;

// ---------- external variable
extern int num;


int total(int a, int b){
    // int sum = a + b;
    // or
    auto int sum = a + b;

    printf("Global variable default value: %d\n", global_sum);

    // changing global variable inside a function
    global_sum = 10;

    return sum;
}

int increment_n(){
    static int n = 5; // static keyword freeze the variable
    n++;
    return n;
}

int main(){
    /*
        ------------------- WHAT IS A STORAGE CLASS? -------------------
        - A storage class defines scope, default initial value & lifetime of a variable.
        - In previous lecture, we saw that Dynamic Memory Allocation is a way in which the size of
          a data structure can be chagned during the runtime.
        - Memory assigned to a program in a typical architecture can be broken down into for segments:
            - Code
            - Static/Globla variables
            - Stack
            - Heap
        - A storage class defines following attributes about a variable in C:
            - Scope
            * Where will this variable be available? (global scope or local scope)

            - Default initial value
            * If we don't initial a varialbe explicitly, what will be the value inside the variable?

            - Lifetime
            * Life of that variable

        ------------------- STORAGE CLASSES IN C -------------------
        - Automatic Variables
        - External Variables
        - Static Varibles
        - Register Variables

        ------------------- AUTOMATIC VARIABLES: AUTO STORAGE CLASS -------------------
        - Scope: local to the function body ther are defined in.
        - Default Value: garbage value (a random value).
        - Lifetime: Till the end of the function block they are defined in.
        - A variable defined without any storage class sepcification is by default an automatic variable.
        - int var and auto int var are same.

        ------------------- EXTERNAL VARIABLES: EXTERNAL STORAGE CLASS -------------------
        - They are same as global variables.
        - Scope: Global to the program the are define in.
        - Default Value: 0
        - Lifetime: These variables are declred outside any function. They are available throughout the lifetime
          of the program.
        - A global variable can be changed by any function in the program.
        - int var written outside any function will tell compiler that var is a global variable.
        - It is recommended to minimize the use of unnecessary global variables in a program.
        - There is a detail article of extern -> https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/

        ------------------- EXTERNAL VARIABLES: EXTERN KEYWORD -------------------
        - Extern is used to inform our C compiler that a given variable is declare somewhere else.
        - Using extern will not allocate space for the variable.
        - Extern variable says to compiler  ”go outside my scope and you will find the definition of the variable that I declared.”
        - for ex.
            main1.c                         |       main2.c
            int main(){                     |       #include "main1.c";
                int var = 90;               |       extern int var;
                printf("%d\n", var);        |       int main(){
            }                               |           var = 56;
                                            |           printf("%d\n", var);
                                            |       }

        ------------------- STATIC VARIABLES: STATIC STORAGE CLASS -------------------
        - Scope: Local to the block they are defined in.
        - Default Value: 0
        - Lifetime: They are available throughout the lifetime of the program.
        - A static variable remain under existence for use within the function for entire program run.
        - static int var written inside any function will tell compiler that harry is a static variable.
        - it is recommended to minimize the use of unneccessary static variables in a program.

        ------------------- REGISTER VARIABLES: REGISTER STORAGE CLASS -------------------
        - Scope: Local to the function they declared in.
        - Default Value: Garbage value
        - Lifetime: They are available til the end of the function block, in which the variable is defined.
        - Register variable requests the compiler to store the variable in the CPU register instead of storing in the
          memory to have faster access.
        - Generally this is done for the variables which are being used frequently.

        // Declaration - Telling the compiler about the variable (No space reserved)
        // Definition - Declaration + space reservation

    */

    // ------------------- CODE EXAMPLE -------------------
    int sum = total(5,5);
    printf("Function return value: %d\n", sum);

    printf("Global variable value after change: %d\n", global_sum);

    printf("External file variable value: %d\n", num);

    for (int i=0; i<5; i++){
        printf("Static variable value at %d interation is: %d\n", i+1, increment_n());
    }

    register int storage = 53;  // for faster accessing
    printf("This variable is store in CPU register: %d\n", storage);
    
    return 0;
}