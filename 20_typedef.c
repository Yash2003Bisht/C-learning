#include <stdio.h>

// ---------------- TYPEDEF IN STRUCTURES ----------------
typedef struct long_struct_name{
    int id;
    int age;
} data;

int main(){

    // ---------------- TYPEDEF ----------------
    // - we can use typedef to give a data type a new name.
    // - for ex. if we want to define a char but we don't want to use "char" keyword instead we use CH
    // - After this type definition, the identifier CH can be used as an abbreviation for the data type char.

    // ---------------- SYNTAX ----------------
    // typedef <previous_name> <alias name>;
    // for ex.
    // typedef long ul;
    // ul l1, l2;

    // ---------------- CODE EXAMPLE ----------------
    typedef long ul;
    ul l1, l2;

    l1 = 1234567890;
    l2 = 9876543210;

    printf("%ld\n", l1);
    printf("%ld\n", l2);

    data d1, d2;
    
    d1.id = 0;
    d2.id = 1;

    printf("id of d1 %d\n", d1.id);
    printf("id of d2 %d\n", d2.id);

    // ---------------- TYPEDEF IN POINTERS ----------------
    int* a, b; // here only a is a pointer and b is integer;
    int c = 5;
    a = &c;
    // b = &c; // this will give an error

    typedef int* pointer;
    pointer x, y;
    int z = 5;
    x = &z;
    y = &z; // this will run without any error



    return 0;
}