#include <stdio.h>
#include "30_support_file.c"  // including file using quotation marks
#define PI 3.14  // define directive
#define MAX(x, y) x>y ? x:y  // define a macro

int main(){
    /*
        ------------------- THE # INCLUDE DIRECTIVE -------------------
        - The #include directive causes the preprocessor to fetch the contents of some other file to be included in the
          present file.
        - This file may in turn #include some other file(s) which may in turn do the same.
        - Most commonly the #include files have a ".h" extension, indicating that they are header files.

        ------------------- TWO COMMON #INCLUDE FORMATS -------------------
        - In C programming there are two common formats for #includes:
            - #include <headerFile.h> // The angle brackets say to look in the standard system directories.
            - #include "myFile.h" // The quotation marks say to look in the current directory.
        - Disk drive full path is allowed, bur discouraged since it is not portable:
            - #include <D:\documents\C\somefile.h> // Too specific
            - #include <sys/file.h> // Relative and portable path to the standard locations.

        ------------------- THE #DEFINE DIRECTIVE -------------------
        - The #define directive is used to "define" preprocessor "variables".
        - The #define preprocessor directive can be used to globally replace a word with a number.
        - It acts as if an editor did a global seacrh-and-replace edit of the file.

        ------------------- USING #DEFINE FOR DEBUGGING -------------------
        - # define directive can be used for debugging.
        - We can have printing statement that we only want active when debugging.
        - We can protect them in a "ifdef" block.

        ------------------- MACROS USING #DEFINE -------------------
        - We can also create macros using #define
        - Macros operate much like function, because they are expanded in place and are generally faster.
    */


    // ------------------- CODE EXAMPLE -------------------

    // ------- Calling function from quotation marks included file -------
    int arr[] = {1, 2, 3, 4};
    int size = 4;
    printf("The sum of arr is %d\n", sum(arr, size));

    // ------- define directive -------
    printf("The value of PI is %f\n", PI);

    // ------- define macro -------
    int a = 8;
    int b = 10;

    printf("Max value b/w a and b is %d\n", MAX(a, b));

    return 0;
}