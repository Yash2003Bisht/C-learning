#include <stdio.h>
#include <time.h>


/*
    ---------------- Fibonacci Series ----------------
    In mathematics, the Fibonacci numbers, commonly denoted Fₙ, form a sequence, the Fibonacci sequence,
    in which each number is the sum of the two preceding ones. The sequence commonly starts from 0 and 1,
    although some authors omit the initial terms and start the sequence from 1 and 1 or from 1 and 2.

    ----------------> In this programme fibonacci sequence start from 1 and 2 <----------------
*/


int fib_r(int n){
    if (n==0 || n==1){
        return 1;
    } else{
        return fib_r(n-1) + fib_r(n-2);
    }
}


int fib_i(int n){
    int a = 1;
    int b = 2;
    for (int i=1; i<n-1; i++){
        b = a+b;
        a = b-a;
    }
        return b;
}


int main(){

    // fibonacci using recursion
    clock_t t_r;
    t_r = clock();
    int fib_number = 5;

    printf("The fibonacci of 45 using recursion is %d\n", fib_r(fib_number));
    t_r = clock() - t_r;
    double time_r = ((double)t_r)/CLOCKS_PER_SEC;
    printf("Time taken to calculate the fibonacci series using recursion %f\n", time_r);
    
    printf("\n");

    // fibonacci using iteration
    clock_t t_i;
    t_i = clock();
    printf("The fibonacci of 45 using iteration is %d\n", fib_i(fib_number));
    t_i = clock() - t_i;
    double time_i = ((double)t_i)/CLOCKS_PER_SEC;
    printf("Time taken to calculate the fibonacci series using iteration %f\n", time_i);

    return 0;
}
