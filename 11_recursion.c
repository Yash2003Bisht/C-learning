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
    
    
    // ---------------------- IN A NUT SHELL ----------------------
    // - Recursins is a good approach when it comes to problem solving
    // - However, programmer needs to evaluate the need amd impact of using recursive/iterative
    //   approach while solving a particular problem
    // - In case of factorial calculation, recursion saved a lot of lines of code.
    // - However in case of Fibonacci series, recursion resulted in some extra
    //   unnecessary function cals which was an extra overhead!
    // - Running time for fibonnacci series grows exponentially with input case of recursive approach!
    

    // ---------------------- CODE EXAMPLE ----------------------
    long int f = fact(5);
    printf("%ld\n", f);

    return 0;

}