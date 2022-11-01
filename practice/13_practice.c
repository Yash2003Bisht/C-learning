#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const * argv[]) {
    /*
        ----------------------- COMMAND LINE ARGUMENT PRACTICE -----------------------
        - We have to create a command line utility to add/subtract/divide/multiple two numbers
          first command line argument must be the operation. The next arguments beinf two numbers.
          For example:
          >> file_name.c add 50 45
          >> 95
    */

    // ----------------------- MAIN CODE -----------------------
    int a, b;
    
    // sscanf(argv[2], "%d", &a);
    // sscanf(argv[3], "%d", &b);

    // -------- OR

    a = atoi(argv[2]);
    b = atoi(argv[3]);


    
    // -------- ADD
    if (!strcmp(argv[1], "add")) printf("%d\n", a+b);
    
    // -------- SUBTRACT
    else if (!strcmp(argv[1], "sub")) printf("%d\n", a-b);

    // -------- DIVIDE
    else if (!strcmp(argv[1], "div")) printf("%f\n", (float) a/b);

    // -------- MULTIPLE
    else if (!strcmp(argv[1], "mul")) printf("%d\n", a*b);

    // -------- INVALID ARGUMENT
    else printf("Invalid argument\n");
    
    // NOTE: strcmp returns 0 when both the strings are equal.



    return 0;
}