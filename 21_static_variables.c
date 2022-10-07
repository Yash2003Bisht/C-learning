#include <stdio.h>

// global variable accessed any where in the programe
int glob_var = 6;


void func(){
    // local variable
    int local_var = 10;
    printf("This is the global variable %d\n", glob_var);
    printf("This is the local variable %d\n", local_var);
}


// static variable
int func2(int b){
    static int a = 10;
    a *= b;
    return a;
}


int return_5(){
    return 5;
}

int main(){
    /*
        --------------- LOCAL VARIABLES (RECAP) ---------------
        - Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
        - Varibles which are accessed inside a function or a block are called local variables.
        - They can only be accessed by the function they are declared in!
        - They are inaccessible outside the function.

        --------------- GLOBAL VARIABLES (RECAP) ---------------
        - These are the variables define outside the main method.
        - Global variables are accessible throughout the entire program from any function.
        - If a local and global variable has the same name, the local variable will take preference.

        --------------- STATIC VARIABLES ---------------
        - Static variables are variables which have a property of preserving their values even when they go out of scope.
        - They preserve their value from the previous scope and are not initialized again.
        - Static variable remains in memory throughtout the span of the program.
        - Static variables are initialized to 0 if not initialized explicitly.
        - In C, static variables can only be intialized using constant literals.

        --------------- SYNTAX OF DECLARING A STATIC VARIABLE ---------------
        static datatype variable_name = value;
        for ex. static int var = 10;

    */


    // --------------- CODE EXAMPLE ---------------
    func();
    printf("%d is a global variable calling from main function\n", glob_var);
    // printf("%d is a local variable calling from main function\n", local_var); // -> this will give error

    int i=4;
    int x = 2;
    while (i--){
        printf("Value of x is %d iteration is: %d\n", 4-i, func2(x));
    }

    // static int z = return_5(); // this will give error initializer element is not constant
    // In C, static variables can only be intialized using constant literals, because static variable is
    // initialize before initialization of main function


    return 0;
}