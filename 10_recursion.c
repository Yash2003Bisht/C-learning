#include <stdio.h>

long int fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    // ---------------------- RECURSION ----------------------
    // - Recursion functions or recursion is a process when a function calls a copy of itself to work on a smaller problem.
    // - Any function which called itself is called recursion function.
    // - There is always a base condition in recursive function to terminate the execution.
    // - Any problem that can solved recursively, can also be solved iteratively.

    // ---------------------- CODE EXAMPLE ----------------------

    long int f = fact(5);
    printf("%ld\n", f);

    return 0;

}