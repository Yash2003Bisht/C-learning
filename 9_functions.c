#include <stdio.h>

// ============== FUNCTIONS ==============

void sum1(){
    printf("Function without parameter: %d\n", 5+10);
}

void sum2(int a, int b){
    int x = a+b;
    printf("Function with parameter: %d\n", x);
}

int sum3(){
    int x = 5+10;
    return x;
}

int sum4(int a, int b){
    int x = a+b;
    return x;
}

// function declared at the top of the main function
void table(int n);


int main(){
    // --------------- FUNCTIONS ---------------
    // - Funcitons are used to divide a large c programe into samller pieces
    // - A function can be called multiple times to provide reusability and modularity to the C programme
    // - Implement's DRY(Do Not Repeat Yourself) conpects
    // - Also called procedure or subroutine


    // --------------- BASIC SYNTAX ---------------
    /*
        return_type function_name(data_type parameter, data_type parameter){
            ************ DO SOME STUFF HERE ************
        }
    */

    
    // --------------- TYPE OF FUNCITONS ---------------
    // - Library Functoins: Functions included in c headers file
    // - User define functions: Functions created by programmer


    /* --------------- CODE EXAMPLE --------------- */
    sum1();
    sum2(5, 10);
    
    int a = sum3();
    printf("Function with return value and without parameter: %d\n", a);

    int b = sum4(5, 10);
    printf("Function with return value and parameter: %d\n", b);
    
    table(5);


    return 0;
}

/* ----------> If we define any function below the main function we have to declare it on the top, for ex. */
void table(int n){
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}

