#include <stdio.h>

void sum(int a, int b){
    printf("the sum of %d + %d =  %d\n", a,b,a+b);
}

void changeA(int* a){
    *a = 80;  // -> this will change the value of a
}

void change_both(int* a, int* b){
    int a1 = *a+*b;
    int b1 = *a-*b;
    *a = a1;
    *b = b1;
}

int main(){
    /*
        ------------------ ACTUAL AND FORMAL PARAMETERS ------------------
        - When a function is called, the value (expression) that are passed in the call
          are called the arguments or actual parameters.
          for ex.
          int sum(int a, int b){ --> a and b are called arguments/actual parameters
            return a+b;
          }

        - Formal parameters are local variables which are assigned values from the arguments when the function is called.
          for ex.
          sum(5,5)  --> when we pass values for function sum, is known as formal parameters


        ------------------ TYPES OF FUNCTION CALLS IN C PROGRAMMING ------------------
        - In C programming, we can call a function in two different ways, based on how we specify the arguments, and these two ways are:
            
            * Call by value
                - When we call a function by value, it means that we are passing the values of the arguments which are copied into
                  the formal parameter of the function.
                - Which means that the original values reamins unchanged and only the parameters inside the function changes.

            * Call by refrence(using & operator)
                - The call by refrence method of passing arguments to a C function copies the address of the arguments
                  into the formal parameters
                - Addresses of the actual arguments are copied and then assigned to the corresponding formal arguments

    */

    // ------------------ CODE EXAMPLE ------------------

    // Call by value
    sum(5,5);

    // Call by refrence
    int a = 9;
    
    printf("The value of a before passing to a function %d\n", a);
    changeA(&a);
    printf("The value of a after passing to a function %d\n", a);

    // or

    int x=4,y=3;
    change_both(&x, &y);

    printf("The value of x is %d and y is %d\n", x,y);

    return 0;
}