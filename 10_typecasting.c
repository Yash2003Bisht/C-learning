#include <stdio.h>

int main(){
    /* -------------- TypeCasting -------------- */
    // covert a data type to another datatype
    float a = 8.0;
    int b = (int) a;
    printf("%f is a float value and %d is covert into int\n", a, b);

    // more example
    float ans1 = 10/3; // ---> this will evaluate as integer
    float ans2 = (float) 10/3;
    // or 
    // float ans2 = 10.0/3.0;
    printf("ans1: %f\n", ans1);
    printf("ansd: %f\n", ans2);

    return 0;
}