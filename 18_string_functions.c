#include <stdio.h>
#include <string.h>

int main(){
    /*
        ---------------- IMPORTANT STRING FUNCTIONS ----------------
        Function                    Use
        
        strcat()                    This function is used to concatenate or combine two given strings
        strlen()                    This function is used to show length of a strings
        strrev()                    This function is used to show reverse of a strings
        strcpy()                    This function is used to copy one string into another
        strcmp()                    This function is used to compate two given strings

        NOTE: These function are come in <string.h>, we have to include <string.h> to use these functions

    */

    // ---------------- CODE EXAMPLE ----------------
    char str1[]  = "will";
    char str2[]  = "smith";

    // strcat
    printf("The combination of str1 and str2 is: ");
    puts(strcat(str1, str2));

    // strlen
    printf("The length of str1 is %ld\n", strlen(str1));

    // strrev
    // puts(strrev(str1));  // strrev not available in linux, if you want to use it you have to make custom function

    // strcpy
    printf("combination of str1 and str2 copy into fullname: ");
    char full_name[100];
    strcpy(full_name, strcat(str1, str2));
    puts(full_name); 

    // strcmp (returns ASCII characters difference)
    printf("The difference of str1 and str2 is %d\n", strcmp(str1, str2));

    return 0;
}