#include <stdio.h>
#define DATE 29  // comment/uncomment this line to see the working of #if and #else
#define YEAR 2003  // comment/uncomment this line to see the working of #if and #else

int main(){
    /*
        -------------------- PREPROCESSOR DIRECTIVES (QUICK RECAPE) --------------------
        - Preprocessor is a kind of automated editor that modifies a copy of the original source code.
        - The #include directive causes the preprocessor to fetch the contents some other file to be included
          in the present file.
        - In C programme there are two common formats for #includes:
            - #include <headerfile.h>
            - #include "headerfile.h"
        - This file may turn #include some other file(s) which may in turn do the same.
        - Most commonly the #included files have a ".h" extension, indicating that they are header file.
        - The #define directive is used to "define" preprocessor "variables"

        -------------------- OTHER C PREPROCESSORS --------------------
        - undef -> undefines a macro.
        - ifdef -> check if a macro is define.
        - ifndef -> check if a macro is not define.
        - if ---------------
        - else              |  // if elif else ladder for macros.
        - elif -------------
        - pragma -> to issue some special commands to the compiler.

        -------------------- PREDEFINED MACROS IN C --------------------
        - __DATE__
          The current date as character literal in "MM DD YYYY" format.
        - __TIME__
          This contains the current time as character literal in "HH:MM:SS" format.
        - __FILE__
          The current filename as a string literal.
        - __LINE__
          The current line number as a decimal constant.
        - __STDC__
          Define as I (one) when the compiler compiles with the ANSI standard.
    */


    // -------------------- CODE EXAMPLE --------------------

    // ---------- PREDEFINED MACROS ----------
    printf("file name is %s\n", __FILE__);
    printf("today's date is %s\n", __DATE__);
    printf("today's time is %s\n", __TIME__);
    printf("current line number is %d\n", __LINE__);
    printf("code compiled from ANSI standard %d\n", __STDC__);

    // ---------- ifdef elif else ladder ----------

    #ifdef DATE  // check if PI is define or not
    printf("Date: %d\n", DATE);
    #elif YEAR
    printf("Year: %d\n", YEAR);
    #else
    printf("DATE and YEAR both are undefine\n");
    #endif

    // ---------- if elif else ladder ----------
    #if YEAR == 2003 && DATE == 29
    printf("We have date and year\n");
    #elif YEAR == 2003
    printf("We have year\n");
    #elif DATE == 29
    printf("We have date\n");
    #else
    printf("We don't have date and year\n");
    #endif

    // ---------- ifndef ----------
    #ifndef YEAR
    printf("year is not define\n");
    #endif
    
    #ifndef DATE
    printf("date is not define\n");
    #endif

    return 0;
}