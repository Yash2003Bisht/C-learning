#include <stdio.h>

int main()
{
    /* Datatypes in c */
    // 1) Basic datatypes: int, long, char, float, double etc.
    // 2) Derived datatypes: array, pointer, structure, union etc.
    // 3) Enumeration datatypes: enum
    // 4) Void datatypes: void -> Null
    /* Datatypes chart */
    /*
    NOTE: 1 byte is equal to 8 bits
    Type Name   32–bit Size   64–bit Size
      char        1 byte        1 byte
      short       2 bytes       2 bytes
      int         4 bytes       4 bytes
      long        4 bytes       8 bytes
      long long   8 bytes       8 bytes
      float       4 bytes       4 bytes
      double      8 bytes       8 bytes
      long double 16 bytes      16 bytes
    */
    
    // printing sizeof of datatype
    printf("char take: %ld\n", sizeof(char));
    printf("integer take: %ld\n", sizeof(int));
    printf("float take: %ld\n", sizeof(float));
    printf("long take: %ld\n", sizeof(long));
    printf("double take: %ld\n", sizeof(double));
    return 0;
}
